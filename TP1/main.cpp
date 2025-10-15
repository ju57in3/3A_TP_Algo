#include "main.h"

#include "Queue.h"


int main() {
/*
    Stack stack1 = Stack<int>(5);
    stack1.push(1);
    stack1.push(2);
    stack1.push(3);
    std::cout<<"Stack values Test : "<<stack1.pop()<<" "<<stack1.pop()<<" "<<stack1.pop()<<std::endl;

*/
    Stack_linked_list<int> stack2 = Stack_linked_list<int>();
    stack2.push(1);
    stack2.push(2);
    stack2.push(3);
    std::cout<<"Stack_linked_list values Test : "<<stack2.pop()<<" "<<stack2.pop()<<" "<<stack2.pop()<<std::endl;

/*
    Queue<int> queue = Queue<int>();
    queue.push(1);
    queue.push(2);
    queue.push(3);
    std::cout<<"Queue values Test : "<<queue.pop()<<" "<<queue.pop()<<" "<<queue.pop()<<std::endl;
*/


    return 0;
}
