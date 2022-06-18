#include<stdio.h>

int power(int M, int N) {
    if(N == 0) {
        return 1;        
    }
    else {
        return power(M, N - 1) * M;
    }
}

int main() {
    int num = 2, t = 5;
    printf("%d", power(num, t));
    return 0;
}