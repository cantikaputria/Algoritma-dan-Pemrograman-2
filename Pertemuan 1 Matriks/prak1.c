#include <stdio.h>

int main ()
{
    int matriks[3][3];
    int baris, kolom;

    for (baris = 0; baris < 3; baris++)
    {
        for (kolom = 0; kolom < 3; kolom++)
        {
            printf("masukkan angka:\n");
            scanf("%d", &matriks[baris][kolom]);
            printf("\n");
        }
    }

    for (baris = 0; baris < 3; baris++)
    {
        for (kolom = 0; kolom <3; kolom++)
        {
            printf("%d ", matriks[baris][kolom]);
        }
        printf("\n");
    }

            printf("masukkan angka yang dicari:\n");
            scanf("%d", &matriks[baris-1][kolom-1]);

            printf("angka tersebut terdapat pada baris %d dan kolom %d", baris + 1, kolom +1);
    

    return 0;
}
