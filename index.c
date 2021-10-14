#include <stdio.h>

int main(){
    int a, b, c, d;
    a = 1;
    b = 2;
    c = 3;
    d = 4;

    printf("%d\n", a%b);
    printf("%d\n", a-b);
    printf("%d\n", a+b);
    printf("%d\n", a/b);
    printf("%d\n", a/d*d+a%d);
    printf("%d\n", a%d/d*a-c);
    return 0;
}