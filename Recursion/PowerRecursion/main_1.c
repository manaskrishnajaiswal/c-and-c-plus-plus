#include<stdio.h>

int power(int M, int N) {
    if(N == 0) {
        return 1;        
    }
    if(N%2 == 0) {
        return power(M*M, N/2);
    }
    else {
        return power(M*M, (N - 1)/2) * M;
    }
}

int main() {
    int num = 2, t = 5;
    printf("%d", power(num, t));
    return 0;
}