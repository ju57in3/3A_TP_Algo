//
// Created by phila on 29/09/2025.
//

#ifndef ALGO_QUEUE_H
#define ALGO_QUEUE_H
#include <vector>

template <typename T>
class Queue_Array2 {
private:
    int rear;
    int front;
    int const max = 10000;
    std::vector<T> array;
public:
    Queue_Array2() {
        array = std::vector<T>(max);
        rear = 0;
        front = 1;
    }

    void push(T data) {
        if (front >= max) {
            front = 0;
        }
        if (front == rear) {
            std::cerr <<"Queue is full"<<std::endl;
            return;
        }
        array[front] = data;
        front++;
    }

    T pop() {
        if (rear >= max) {
            rear = 0;
        }
        if (rear == front) {
            std::cerr <<"Queue is empty";
        }
        else return array[++rear];
    }
};

#endif //ALGO_QUEUE_H