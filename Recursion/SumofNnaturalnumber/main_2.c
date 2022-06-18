#include<stdio.h>

int num_sum(int N) {
    return (N*(N+1))/2;
}

int main() {
    int num = 10;
    printf("%d", num_sum(num));
    return 0;
}