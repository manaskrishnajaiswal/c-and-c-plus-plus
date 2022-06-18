#include<stdio.h>

int fib(int n) {
    int a = 0, b = 1;
    if(n == 0) {
        return a;
    }        
    else if(n == 1) {
        return b;
    }
    else {
        return fib(n - 1) + fib(n - 2);
    }

}

int main() {
    printf("%d", fib(8));
    return 0;
}