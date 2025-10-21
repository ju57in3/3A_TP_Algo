//
// Created by Julien Metzelard on 15/10/2025.
//

#include <iostream>
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

int main() {
    Queue_Array<int> queue_array = Queue_Array<int>();
    queue_array.push(1);
    queue_array.push(2);
    queue_array.push(3);
    int a = queue_array.pop();
    int b = queue_array.pop();
    int c = queue_array.pop();
    std::cout<<"Queue Array values Test : "<<a<<" "<<b<<" "<<c<<std::endl;
}