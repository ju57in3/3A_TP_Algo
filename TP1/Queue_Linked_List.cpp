//
// Created by Julien Metzelard on 15/10/2025.
//


#include <iostream>
#include <ostream>

template <typename T>
class Double_Linked_Node {
public:
    Double_Linked_Node<T> * next;
    Double_Linked_Node<T> * prev;
    T data;
    Double_Linked_Node() =default;
    Double_Linked_Node(T data) {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

template <typename T>
class Queue_Linked_List {
    Double_Linked_Node<T> * head;
    Double_Linked_Node<T> * tail;

    public:
    Queue_Linked_List() {
        head = nullptr;
        tail = nullptr;
    }
    void push(T data) {
        if (head == nullptr) {
            head = new Double_Linked_Node<T>;
            head -> data = data;
            head -> next = head;
            head -> prev = head;
            tail = head;
        }
        else {
            Double_Linked_Node<T> * new_node = new Double_Linked_Node<T>(data);
            new_node -> next = head;
            new_node -> prev = tail;
            tail -> next = new_node;
            head -> prev = new_node;
            head = new_node;
        }
    }

    T pop() {
        if (tail == nullptr) {
            std::cerr<<"Queue is empty"<<std::endl;
        }
        else {
            T to_return = tail -> data;
            tail = tail -> prev;
            tail -> next = head;;
            head-> prev = tail;
            return to_return;
        }
    }
};

int main() {
    Queue_Linked_List<int> queue = Queue_Linked_List<int>();
    queue.push(1);
    queue.push(2);
    queue.push(3);
    int a = queue.pop();
    int b = queue.pop();
    int c = queue.pop();
    std::cout<<"Queue values Test : "<<a<<" "<<b<<" "<<c<<std::endl;
}