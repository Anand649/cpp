#include "stack.h"
int main()
{
    stack S;
    S.push(10);
    S.push(20);
    S.push(30);
    S.peek();
    S.pop();
    S.peek();
    S.getsize();
    return 0;
}