#include "main.h"

#include "Queue_Linked_List.h"


int main() {
/*
    Stack<int> stack1 = Stack<int>(5);
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);
    std::cout<<"Stack values Test : "<<stack1.pop()<<" "<<stack1.pop()<<" "<<stack1.pop()<<std::endl;


    Stack_linked_list<int> stack2 = Stack_linked_list<int>();
    stack2.push(1);
    stack2.push(2);
    stack2.push(3);
    std::cout<<"Stack_linked_list values Test : "<<stack2.pop()<<" "<<stack2.pop()<<" "<<stack2.pop()<<std::endl;


    Queue_Array2<int> queue = Queue_Array2<int>();
    queue.push(1);
    queue.push(2);
    queue.push(3);
    int a = queue.pop();
    int b = queue.pop();
    int c = queue.pop();
    std::cout<<"Queue values Test : "<<a<<" "<<b<<" "<<c<<std::endl;

    Queue_Array<int> queue_array = Queue_Array<int>();
    queue_array.push(1);
    queue_array.push(2);
    queue_array.push(3);
    int a = queue_array.pop();
    int b = queue_array.pop();
    int c = queue_array.pop();
    std::cout<<"Queue values Test : "<<a<<" "<<b<<" "<<c<<std::endl;

    return 0;
*/

    Queue_Linked_List<int> queue = Queue_Linked_List<int>();
    queue.push(1);
    queue.push(2);
    queue.push(3);
    int a = queue.pop();
    int b = queue.pop();
    int c = queue.pop();
    std::cout<<"Queue values Test : "<<a<<" "<<b<<" "<<c<<std::endl;

    return 0;
}
