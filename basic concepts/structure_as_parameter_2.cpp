#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

struct rectangle *fun()
{
    struct rectangle *p;
    p = new rectangle; // c++ language 
    // p = (struct rectangle *)malloc(sizeof(struct rectangle)); // c language

    p->length=15;
    p->breadth=7;

    return p;
}

int main()
{
    struct rectangle *ptr=fun();
    cout<<"Length: "<<ptr->length<<endl<<"Breadth: "<<ptr->breadth<<endl;
    
    return 0;
}