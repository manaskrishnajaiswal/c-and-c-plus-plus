#include<stdio.h>
int a = 0, b = 1;
int fib(int n) {
    
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
    printf("%d", fib(5));
    return 0;
}