#include <stdio.h>

void fibonaci(int n) {
    int a = 0, b = 1, nextTerm;
    for(int i = 1; i <= n;i++) {
        nextTerm = a + b;
        a = b;
        b = nextTerm;
        printf("%d + %d = %d\n",a,b,a+b);
    }
}


int main() {
    int n;
    scanf("%d",&n);
    fibonaci(n);
    return 0;
}
