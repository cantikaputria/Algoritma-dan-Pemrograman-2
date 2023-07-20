#include <stdio.h>

/*
int main ()
{
    int baris, kolom, bintang;
    printf("masukkan bannyaknya bintang:\n");
    scanf("%d", &bintang);

    for (baris=1; baris <= bintang; baris++)
    {
        for (kolom=1; kolom <= bintang; kolom++)
        {
          printf("*");
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
*/

int main ()
{
    int i,j;
    int n;
    scanf("%d", &n);

    for (i=1; i < n; i++)
    {
        for (j=1; j < n; j++);
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
}