#include<iostream>
#include<stdio.h>

using namespace std;

int area(int l, int b)
{
    return l*b;
}

int perimeter(int l, int b)
{
    return 2*(l+b);
}

int main()
{
    int length=0, breadth=0;

    printf("Enter Length and Breadth:");
    cin>>length>>breadth;

    int a=area(length, breadth);
    int peri=perimeter(length, breadth);

    printf("Area=%d\nPerimeter=%d\n", a, peri);

    return 0;
}