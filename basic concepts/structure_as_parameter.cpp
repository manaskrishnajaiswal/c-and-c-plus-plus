#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

int area(struct rectangle r1)
{
    return r1.length*r1.breadth;
}

int main()
{
    struct rectangle r = {10, 5};
    printf("Area of rectangle is: %d.", area(r));

    return 0;
}