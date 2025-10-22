//
// Created by phila on 29/09/2025.
//


#include <iostream>

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

int main() {
    Stack_linked_list<int> stack2 = Stack_linked_list<int>();
    stack2.push(1);
    stack2.push(2);
    stack2.push(3);
    std::cout<<"Stack_linked_list values Test : "<<stack2.pop()<<" "<<stack2.pop()<<" "<<stack2.pop()<<std::endl;
}