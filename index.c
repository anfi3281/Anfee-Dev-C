#include <stdio.h>

int main(){
    int a, b, c, D;
    
    printf("%s", "Nilai a = ");
    scanf("%d", &a);
    printf("%s", "Nilai b = ");
    scanf("%d", &b);
    printf("%s", "Nilai c = ");
    scanf("%d", &c);

    D = b-4*a*c;


    printf("%s%d\n", "Nilai Diskriminannya adalah ", D);
    return 0;
}