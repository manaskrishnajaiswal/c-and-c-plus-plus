#include<stdio.h>

int fact(int N) {
    if(N == 0) {
        return 1;        
    }
    else {
        return fact(N - 1) * N;
    }
}

int main() {
    int num = 5;
    printf("%d", fact(num));
    return 0;
}