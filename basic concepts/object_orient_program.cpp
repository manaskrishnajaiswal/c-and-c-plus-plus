#include<iostream>
#include<stdio.h>

using namespace std;

class rectangle
{
public:
    int length;
    int breadth;

void initialise(int l, int b)
{
    length=l;
    breadth=b;
}

int area()
{
    return length*breadth;
}

int perimeter()
{
    return 2*(length+breadth);
}

};

int main()
{
    rectangle r;

    int l,b;
    printf("Enter Length and Breadth:");
    cin>>l>>b;

    r.initialise(l, b);

    int a=r.area();
    int peri=r.perimeter();

    printf("Area=%d\nPerimeter=%d\n", a, peri);

    return 0;
}