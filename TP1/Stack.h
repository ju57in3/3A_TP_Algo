//
// Created by phila on 29/09/2025.
//

#ifndef ALGO_STACK_H
#define ALGO_STACK_H
#include <iostream>
#include <ostream>

template <typename T>
class Stack {
private:
    T * p;
public:
    int current_size;
    int max_size;

    Stack(int size) {
        current_size = 0;
        max_size = size;
        p = nullptr;
    }

    void push(T value) {
        if (p==nullptr) {
            p = (T*) malloc(max_size * sizeof(T));
        }
        if (current_size < max_size) {
            current_size++;
            p[current_size]=value;
        }
        else {
            std::cerr<<"Stack grew longer than it's max size."<<std::endl;
        }
    }

    T pop() {
        if (p == nullptr or current_size == 0) {
            std::cerr<<"Stack is empty."<<std::endl;
        }
        else {
            current_size--;
            return p[current_size+1];
        }
    }
};


#endif //ALGO_STACK_H