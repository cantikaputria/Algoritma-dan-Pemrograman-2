#include <stdio.h>
#include <string.h>

typedef struct
{
    char nama_warna[100];
    int kode_red;
    int kode_green;
    int kode_blue;
} warna;


int main ()
{
    int i, j;
    int m, n;
    scanf("%d %d", &n, &m);

    warna matriks[n][m];

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            scanf("%s", matriks[i][j].nama_warna);
            scanf("%d", matriks[i][j].kode_red);
            scanf("%d", matriks[i][j].kode_green);
            scanf("%d", matriks[i][j].kode_blue);
        }
    }

    printf("======================BATAS=================\n");

     for(i = 0; i < n; i++)
    {
        printf("Baris %d:\n", i+1);
        for (j = 0; j < m; j++)
        {
            printf("Detail warna %s :", matriks[i][j].nama_warna);
            scanf(" %d", matriks[i][j].kode_red);
            scanf(" %d", matriks[i][j].kode_green);
            scanf(" %d", matriks[i][j].kode_blue);
        }
        printf("----------------------------");
    }

    return 0;
}