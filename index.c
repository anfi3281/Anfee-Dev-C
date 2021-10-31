#include <stdio.h>

int main(){
    int A,B,C;
    printf("Masukkan nilai A : ");
    scanf("%d", &A);
    printf("Masukkan nilai B : ");
    scanf("%d", &B);
    printf("Masukkan nilai C : ");
    scanf("%d", &C);

    if (A>B) {
        if(A>C){
            printf("Nilai A : %d\n", A);
        } else {
            printf("Nilai C : %d\n", C);
        } 
    } else if (B>C) {
        printf("Nilai B : %d\n", B);
    } else {
        printf("nilai C : %d\n", C);
    }

    return 0;
}