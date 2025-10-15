//
// Created by phila on 29/09/2025.
//

#ifndef ALGO_QUEUE_H
#define ALGO_QUEUE_H

template <typename T>
class Linked_Node_Double {
public:
    Linked_Node_Double<T> * next;
    Linked_Node_Double<T> * prev;
    T data;
    Linked_Node_Double() {
        this->next = nullptr;
        this->prev = nullptr;
    }
    Linked_Node_Double(T data) {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

template <typename T>
class Queue {
private:
    Linked_Node_Double<T> * head;

public:
    Queue() {
        head = new Linked_Node_Double<T>();
    }

    void push(T data) {
        if (head == nullptr) {
            head = new Linked_Node_Double<T>(data);
            head -> next = head;
            head -> prev = head;
        }
        else {
            Linked_Node_Double<T> * new_node = new Linked_Node_Double<T>(data);
            new_node->next = head;
            new_node->prev = head->prev;
            head = new_node;
        }
    }

    T pop() {
        Linked_Node_Double<T> * end = head->prev;
        T to_return = end->data;
        end->prev = head->prev;
        end->prev->next = head;
        return to_return;
    }
};

#endif //ALGO_QUEUE_H