#include "queue.h"
int main()
{
    Queue q;
    q.enqueue(20);
    q.enqueue(30);
    q.get_front();
    q.dequeue();
    q.get_rear();
    q.get_size();
    return 0;
}