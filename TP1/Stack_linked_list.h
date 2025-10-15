//
// Created by phila on 29/09/2025.
//

#ifndef ALGO_STACK_LINKED_LIST_H
#define ALGO_STACK_LINKED_LIST_H

template <typename T>
class Linked_Node {
public:
    Linked_Node<T> * next;
    T data;
    Linked_Node() =default;
    Linked_Node(T data) {
        this->data = data;
        this->next = nullptr;
    }
};

template <typename T>
class Stack_linked_list {
    Linked_Node<T> * head;
public:

    Stack_linked_list() {
        head = new Linked_Node<T>();
    }

    void push(T value) {
        Linked_Node<T>* new_node = new Linked_Node<T>(value);
        new_node->next = head;
        head = new_node;
    }

    T pop() {
        if (head == nullptr or !head->next) {
            std::cerr<<"Stack is empty"<<std::endl;
        }
        else {
            T to_return = head->data;
            head = head->next;
            return to_return;
        }
    }
};

#endif //ALGO_STACK_LINKED_LIST_H