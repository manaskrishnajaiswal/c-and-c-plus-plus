#include<stdio.h>

int num_sum(int N) {
    if(N == 0) {
        return 0;        
    }
    else {
        return num_sum(N - 1) + N;
    }
}

int main() {
    int num = 10;
    printf("%d", num_sum(num));
    return 0;
}