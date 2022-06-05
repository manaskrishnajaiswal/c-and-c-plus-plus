#include<iostream>
#include<stdio.h>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

void initialise(struct rectangle *r, int l, int b)
{
    r->length=l;
    r->breadth=b;
}

int area(struct rectangle r)
{
    return r.length*r.breadth;
}

int perimeter(struct rectangle r)
{
    return 2*(r.length+r.breadth);
}

int main()
{
    rectangle r={0, 0};

    int l,b;
    printf("Enter Length and Breadth:");
    cin>>l>>b;

    initialise(&r, l, b);

    int a=area(r);
    int peri=perimeter(r);

    printf("Area=%d\nPerimeter=%d\n", a, peri);

    return 0;
}