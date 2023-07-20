#include <stdio.h>

int main ()
{
    int baris, kolom, n;
    printf("masukkan bannyaknya bintang:\n");
    scanf("%d", &n);
 
    for (baris = 1; baris <= n; baris++)
    {
        for (kolom = n - baris; kolom >= 1; kolom--)
        {
            printf(" ");
        }
        for (kolom = 1; kolom <= baris; kolom++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (baris = 1; baris <= n; baris++)
    {
        for (kolom = 1 ; kolom <= baris; kolom++)
        {
            printf(" ");
        }
        for (kolom = n - baris; kolom >= 1; kolom--)
        {
            printf("*");
        }
        printf("\n");
    }

   return 0;
}