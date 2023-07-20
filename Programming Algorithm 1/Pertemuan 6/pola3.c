#include <stdio.h>

int main ()
{
    int baris, kolom, bintang;
    printf("masukkan bannyaknya bintang:\n");
    scanf("%d", &bintang);

    for (baris=1; baris <= bintang; baris++)
    {
        for (kolom=1; kolom <= baris; kolom++)
        {
          printf("*");
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
