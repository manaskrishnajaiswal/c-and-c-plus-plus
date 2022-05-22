#include<iostream>

using namespace std;

int main()
{
    int a = 10;
    int &r = a;
    a = 25;

    int b = 30;
    r = 30;
    
    cout<<a<<endl<<r<<endl;
    
    return 0;
}