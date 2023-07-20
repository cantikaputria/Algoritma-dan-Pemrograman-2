#include <stdio.h>

int main ()
{
    int penghitung, bintang;
    printf("masukkan bannyaknya bintang:\n");
    scanf("%d", &bintang);

    for (penghitung=1; penghitung <= bintang; penghitung++)
    {
        printf("*");
    }
    printf("\n");

    return 0;
}