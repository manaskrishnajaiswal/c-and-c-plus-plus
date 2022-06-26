#include<stdio.h>
#include<math.h>
#include<iostream>

using namespace std;

bool True=1;

int main() {

    int A,B,C;
    cin>>A>>B>>C;

    //printf("%d %d %d\n", A, B, C);
    int temp = 0;
    while(True) {
        if(A>B) {
            temp=B;
            B=A;
            A=temp;
        }
        if(B>C) {
            temp=C;
            C=B;
            B=temp;
        }

        if(A<B&&B<C) {
            break;
        }
    }
    printf("%d", B);
    return 0;
}