#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

void fun(struct rectangle *p)
{
    p->length = 20;
    cout<<"Original Length:"<<p->length<<", "<<"Original Breadth:"<<p->breadth<<endl;
}

int main()
{
    struct rectangle r = {10, 5};
    fun(&r);

    printf("New Length: %d, New Breadth: %d", r.length, r.breadth);
    return 0;
}