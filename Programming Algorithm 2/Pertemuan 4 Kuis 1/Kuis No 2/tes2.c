#include <stdio.h>

typedef struct
{
    int pembilang,
        penyebut;
} matrix;


int main()
{
    int i, j,
        x1, y1, x2, y2,
        x3, y3;

    scanf("%d %d", &x1, &y1);
    matrix mat1[x1][y1];

    for(i = 0; i < x1; i++)
    {
        for(j = 0; j < y1; j++)
        {
            scanf("%d %d", &mat1[i][j].pembilang, &mat1[i][j].penyebut);
        }
    }

    scanf("%d %d", &x2, &y2);
    matrix mat2[x2][y2];

    for(i = 0; i < x2; i++)
    {
        for(j = 0; j < y2; j++)
        {
            scanf("%d %d", &mat2[i][j].pembilang, &mat2[i][j].penyebut);
        }
    }

    scanf("%d %d", &x3, &y3);

    // x3 = 0, y3 = 1

    if((x1 * y1) > (x2 * y2)) // Posisi mat1 > mat2
    {
        for(i = 0; i < x2; i++)
        {
            for(j = 0; j < y2; j++)
            {
                // i = 0, j = 0
                // Matriks 1 [0][1] = Matriks 2 [0][0]
                // i = 0, j = 1
                // Matriks 1 [0][2] = Matriks 2 [0][1]
                // i = 1, j = 0
                // Matriks 1 [1][1] = Matriks 2 [1][0]
                // i = 1, j = 1
                // Matriks 1 [1][2] = Matriks 2 [1][1]
                mat1[i + x3][j + y3].pembilang *= mat2[i][j].pembilang;
                mat1[i + x3][j + y3].penyebut *= mat2[i][j].penyebut;
            }
        }

        printf("Matriks 1 lebih besar : \n");
        for(i = 0; i < x1; i++)
        {
            for(j = 0; j < y1; j++)
            {
                printf("Pembilang : %d | Penyebut : %d\n", mat1[i][j].pembilang, mat1[i][j].penyebut);
            }
        }
    }
    else // Posisi mat1 < mat2
    {
        for(i = 0; i < x1; i++)
        {
            for(j = 0; j < y1; j++)
            {
                mat2[i + x3][j + y3].pembilang *= mat1[i][j].pembilang;
                mat2[i + x3][j + y3].penyebut *= mat1[i][j].penyebut;
            }
        }

        printf("Matriks 2 lebih besar : \n");
        for(i = 0; i < x2; i++)
        {
            for(j = 0; j < y2; j++)
            {
                printf("Pembilang : %d | Penyebut : %d\n", mat2[i][j].pembilang, mat2[i][j].penyebut);
            }
        }
    }

    return 0;
}