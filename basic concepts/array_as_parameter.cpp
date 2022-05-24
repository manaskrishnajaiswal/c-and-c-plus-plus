#include<iostream>

using namespace std;

//void fun(int A[ ], int n)
void fun(int *A, int n)
{
    // cout<<sizeof(A)/sizeof(int)<<endl;
    //for(int a:A) for each loop will not work
    //cout<<a<<endl;
    A[0] = 15;
    for(int i = 0; i < n; i++)
    cout<<A[i]<<endl;
}

int main()
{
    int A[ ] = {2, 4, 6, 8, 10};
    int n = 5;

    fun(A, n);
    // cout<<sizeof(A)/sizeof(int)<<endl;

    for(int x:A)
    cout<<x<<" ";

    return 0;
}