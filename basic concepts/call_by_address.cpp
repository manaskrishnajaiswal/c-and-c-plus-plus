#include<iostream>

using namespace std;

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x, y;
    x = 10; y = 20;
    
    printf("before swap, x is %d and y is %d", x, y);
    swap(&x, &y);
    printf("after swap, x is %d and y is %d", x, y);

    return 0;
}