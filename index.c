#include <stdio.h>
#include <string.h>

int main(){
    char nama[100], alamat[100], kuliah[100],jurusan[100], kelas[100];
    int nilai, nim;    

    printf("Nama : ");
    gets(nama);
    printf("Alamat : ");
    gets(alamat);
    printf("Kuliah : ");
    gets(kuliah);
    printf("Jurusan : ");
    gets(jurusan);
    printf("Kelas : ");
    gets(kelas);
    printf("NIM : ");
    scanf("%d", &nim);

    printf("\nNama Anda adalah %s\n", nama);
    printf("Alamat Anda adalah %s\n", alamat);
    printf("Kuliah di %s\n",kuliah);
    printf("Jurusan %s\n", jurusan);
    printf("Kelas %s\n", kelas);
    printf("NIM Anda adalah %d\n", nim);

    // scanf("%d", &nilai);
    // printf("%s%d","sdagdgnama kamu adalah\t", nilai);
    return 0;
}