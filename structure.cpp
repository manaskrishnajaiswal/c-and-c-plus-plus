#include<stdio.h>
#include<iostream>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

struct rectangle r1 = {4, 5};

int main()
{
    struct rectangle r;
    r.length = 10;
    r.breadth = 20;

    printf("Area of rectangle is %d and size is %d.", r.length*r.breadth, sizeof(r));
    printf("\n");
    printf("Area of rectangle is %d.", r1.length*r1.breadth);
    return 0;
}