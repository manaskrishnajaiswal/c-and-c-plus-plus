#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

int main()
{
    int a = 10;
    int A[5] = {2, 4, 6, 8, 10};
    int *p; // declaration
    int *k;
    int *l;

    p = &a; // initialization
    k = A;
    // l = (int *)malloc(5*sizeof(int)); // C-language heap memory allocation
    l = new int[5]; // c++ heap memory allocation

    l[0] = 5; l[1] = 10; l[2] = 15; l[3] = 20; l[4] = 25;

    for(int i = 0; i < 5; i++)
    cout<<l[i]<<endl;

    cout<<10<<endl;
    printf("Using pointer: %d", *p); //de-referencing

    delete [ ] l; // c++ language
    // free(l); // c-lamguage
    return 0;
}