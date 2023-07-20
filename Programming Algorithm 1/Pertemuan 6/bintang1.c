#include <stdio.h>

int main () {
    int baris;
    int kolom;
    int n;

    scanf("%d", &baris);
    for (baris=1; baris<=n; baris ++)
    {
        for (kolom=1; kolom <= baris; kolom++)
        {
            printf("*");
        }
        printf("\n");

    }

    for (baris=n-1; baris >=1; baris--) 
    {
        for(kolom=1; kolom <= baris; kolom++)            
        {
            printf("*");
        }
        printf ("\n");
    }
    return 0;
}