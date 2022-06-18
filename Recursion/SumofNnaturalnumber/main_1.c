#include<stdio.h>

int num_sum(int N) {
    int i, s = 0;
    for(i=1;i<=N;i++)
        s = s + i;
    return s;
}

int main() {
    int num = 10;
    printf("%d", num_sum(num));
    return 0;
}