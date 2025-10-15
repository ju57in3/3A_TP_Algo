//
// Created by Julien Metzelard on 15/10/2025.
//

#ifndef INC_3A_TP_ALGO_QUEUE_ARRAY_H
#define INC_3A_TP_ALGO_QUEUE_ARRAY_H
#include <vector>

template <typename T>
class Queue_Array {
private:
    int front;
    int rear;
    const int max = 10000;
    std::vector<T> array;

public:
    Queue_Array() {
        array = std::vector<T>();
        front = 0;
        rear = 0;
    }

    void push(T data) {
        if (front < max) {
            array.push_back(data);
            front++;
        }
    }
    T pop() {
        if (rear == front) {
            std::cerr << "Queue is empty" << std::endl;
        }

        else {
            return array[rear++];
        }
    }
};
#endif //INC_3A_TP_ALGO_QUEUE_ARRAY_H