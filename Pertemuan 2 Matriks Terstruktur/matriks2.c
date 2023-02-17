#include <stdio.h>

//MATRIKS TIPE BENTUKAN TITIK KOORDINAT
/* typedef struct
{
    int x, y;
} titik;

int main ()
{
    titik matriks[4][4];
    int i, j;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("Masukkan koordinat x:\n");
            scanf("%d", &matriks[i][j].x);
            printf("Masukkan koordinat y:\n");
            scanf("%d", &matriks[i][j].y);
        }
    }

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("koordinat x: %d\n", matriks[i][j].x);
            printf("koordinat y: %d\n", matriks[i][j].y);
        }
    } 

    return 0;
} */

//SIMULASI RGB PADA PIKSEL
  /*  typedef struct 
    {
        int red;
        int green;
        int blue;
    } piksel;

    int main ()
    {
        int baris, kolom;

        printf("masukkan banyaknya baris\n");
        scanf("%d", &baris);
        
        printf("masukkan banyaknya kolom\n");
        scanf("%d", &kolom);
        piksel arr[baris][kolom];
        
        int b, k;
        for (b = 0; b < baris; b++)
        {
            for (k = 0; k < kolom; k++)
            {
                arr[b][k].red = 255;
                arr[b][k].green = 255;
                arr[b][k].blue = 255;

                arr[0][1].red = 0;
                arr[0][1].green = 255;
                arr[0][1].blue = 0;
            }
        }

        for (b = 0; b < baris; b++)
        {
            for (k = 0; k < kolom; k++)
            {
                if ((arr[b][k].red == 255) && (arr[b][k].green == 255)
                && (arr[b][k].blue == 255))
                {
                    printf("putih ");
                }
                else if ((arr[b][k].red == 0) && (arr[b][k].green == 255)
                && (arr[b][k].blue == 0))
                {
                    printf("hijau ");
                }
            }
            printf("\n");
        }
        return 0;
    } */

//MATRIKS GAME TIC TAC TOE
/* int main ()
{
    //membersihkan layar
    system ("cls");
    int papan [3][3];

    //angka 1 untuk pmain pertama = o
    //angka 2 untuk pemain kedua = x
    int i, j, k;

    for ( i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            papan[i][j] = 0;
        }
    }

    int pemain = -1;

    int x = -1, y = -1;
    for (i = 0; i < 9; i++)
    {
        if ((x != -1) && (y != -1))
        {
            papan [x][y] = pemain;
        }
    }

    printf("Kondisi Papan:\n");
    printf("-------------\n");

    for (j = 0; j < 3; j++)
    {
        printf ("| ");
        for (k = 0; k < 3; k++)
        {
            if (papan [k][j] == 0) 
            {
                printf ("  | ");
            }
            else if (papan [k][j] == 1) 
            {
                printf ("O | ");
            }
            else if (papan [k] [j] == 2) 
            {
                printf ("X | ");
            }
        } 
        printf("\n-------------\n");
    }
    printf("\n");

    if (pemain == 1)
    {
        pemain = 2;
    }
    else 
    {
        pemain = 1;
    }

    printf("Masukkan X, Y (Pemain %d) : ", pemain);
    scanf("%d %d", &x, &y);

    system("cls");

    return 0;
} */

//ANIMASI SEDERHANA WALKING B
/* #include <time.h>

void wait (float x)
{
    time_t start;
    time_t current;

    time(&start);
    do
    {
        time(&current);
    } while (difftime(current, start) < x);
    
}

int main ()
{
    char arr[6][6];

    int i, j, x = -1, y = -1, jalan = 1;

    for ( i = 0; i < 6; i++)
    {
        for ( j = 0; j < 6; j++)
        {
            arr[i][j] = '-';
        }
    }

    while(1)
    {
        system("cls");

        if ((x >= 0) && (x < 6))
        {
            arr[x][y] = '-';
        }

        if ((x == 6) && (y == 6))
        {
            jalan = -1;
            x = x - 1;
            y = y - 1;
        }
        else if ((x == -1) && (y == -1))
        {
            jalan = 1;
            x = x + 1;
            y = y + 1;
        }
        else if (jalan == 1)
        {
            x = x + 1;
            y = y + 1;
        }
        else
        {
            x = x - 1;
            y = y - 1;
        }

        if ((x >= 0) && (x < 6))
        {
            arr[x][y] = 'B';
        }

        for ( i = 0; i < 6; i++)
        {
            for ( j = 0; j < 6; j++)
            {
                if (arr[i][j] == '-')
                {
                    printf("     ");
                }
                else
                {
                    printf(" %c", arr[i][j]);
                }
            }
            printf("\n");
        }
        wait(1);
    }
    return 0;
} */

//MATRIKS UNTUK PETA
int main ()
{
    
}