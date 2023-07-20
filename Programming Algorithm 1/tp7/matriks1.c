#include <stdio.h>

int main ()
{
    int matriks[3][2];
    int baris, kolom;

    for (baris = 0; baris < 3; baris++)
    {
        for (kolom = 0; kolom < 2; kolom++)
        {
            printf("masukkan angka:\n");
            scanf("%d", matriks[baris][kolom]);
            printf("\n");
        }
    }

    return 0;
}