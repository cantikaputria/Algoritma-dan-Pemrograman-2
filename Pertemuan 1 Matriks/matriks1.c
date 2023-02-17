#include <stdio.h>

//MENGISI NILAI MATRIKS
/* int main ()
{
    int matriks[3][2];
    int baris, kolom;

    for (baris = 0; baris < 3; baris++)
    {
        for (kolom = 0; kolom < 2; kolom++)
        {
            printf("masukkan angka:\n");
            scanf("%d", &matriks[baris][kolom]);
            printf("\n");
        }
    }

    return 0;
} */

//MENAMPILKAN NILAI MATRIKS (STATIS)
/*int main ()
{
    int matriks[4][6];
    int baris, kolom;

    for (baris = 0; baris < 4; baris++)
    {
        for (kolom = 0; kolom < 6; kolom++)
        {
            printf("masukkan angka:\n");
            scanf("%d", &matriks[baris][kolom]);
            printf("\n");
        }
    }

    for (baris = 0; baris < 4; baris++)
    {
        for (kolom = 0; kolom < 6; kolom++)
        {
            printf("%d ", matriks[baris][kolom]);
        }
        printf("\n");
    }

    return 0;
} */

//MENYALIN NILAI MATRIKS STATIS
/* int main ()
{
    int matriks1[2][2];
    int matriks2[2][2];
    int baris, kolom;

    for (baris = 0; baris < 2; baris++)
    {
        for (kolom = 0; kolom < 2; kolom++)
        {
            printf("masukkan angka:\n");
            scanf("%d", &matriks1[baris][kolom]);
            printf("\n");
        }
    }

    for (baris = 0; baris < 2; baris++)
    {
        for (kolom = 0; kolom < 2; kolom++)
        {
            matriks2[baris][kolom] = matriks1[baris][kolom];
        }
    }

    for (baris = 0; baris < 2; baris++)
    {
        for (kolom = 0; kolom < 2; kolom++)
        {
            printf("%d ", matriks2[baris][kolom]);
        }
        printf("\n");
    }

    return 0;
} */

//PENJUMLAHAN MATRIKS
/* int main ()
{
    int matriks1[2][2];
    int matriks2[2][2];
    int matriks3[2][2];

    int baris, kolom;

    printf("MATRIKS 1\n");
    for (baris = 0; baris < 2; baris++)
    {
        for (kolom = 0; kolom < 2; kolom++)
        {
            printf("masukkan angka:\n");
            scanf("%d", &matriks1[baris][kolom]);
            printf("\n");
        }
    }

    printf("MATRIKS 2\n");
    for (baris = 0; baris < 2; baris++)
    {
        for (kolom = 0; kolom < 2; kolom++)
        {
            printf("masukkan angka:\n");
            scanf("%d", &matriks2[baris][kolom]);
            printf("\n");
        }
    }

    for (baris = 0; baris < 2; baris++)
    {
        for (kolom = 0; kolom < 2; kolom++)
        {
            matriks3[baris][kolom] = matriks1[baris][kolom] + matriks2[baris][kolom];
        }
    }

    for (baris = 0; baris < 2; baris++)
    {
        for (kolom = 0; kolom < 2; kolom++)
        {
            printf("%d ", matriks3[baris][kolom]);
        }
        printf("\n");
    }

    return 0;
} */

//PERKALIAN MATRIKS
/*int main ()
{
    int matriks1[3][2];
    int matriks2[2][3];
    int matriks3[3][3];

    int baris, kolom, jumlah_kali;

    //matriks1
    printf("MATRIKS 1\n");
    for (baris = 0; baris < 3; baris++)
    {
        for (kolom = 0; kolom < 2; kolom++)
        {
            printf("masukkan angka:\n");
            scanf("%d", &matriks1[baris][kolom]);
            printf("\n");
        }
    }

    //matriks2
    printf("MATRIKS 2\n");
    for (baris = 0; baris < 2; baris++)
    {
        for (kolom = 0; kolom < 3; kolom++)
        {
            printf("masukkan angka:\n");
            scanf("%d", &matriks2[baris][kolom]);
            printf("\n");
        }
    }

    //perhitungan
    for (baris = 0; baris < 3; baris++)
    {
        for (kolom = 0; kolom < 3; kolom++)
        {
            matriks3[baris][kolom] = 0;
            for (jumlah_kali = 0; jumlah_kali < 2; jumlah_kali++)
            {
                matriks3[baris][kolom] =  matriks3[baris][kolom] + (matriks1[baris][jumlah_kali] * matriks2[jumlah_kali][kolom]);
            }
        }
    }

    //menampilkan
    printf("MATRIKS 1\n");
    for (baris = 0; baris < 3; baris++)
    {
        for (kolom = 0; kolom < 2; kolom++)
        {
            printf("%d ", matriks1[baris][kolom]);
        }
        printf("\n");
    }

    printf("MATRIKS 2\n");
    for (baris = 0; baris < 2; baris++)
    {
        for (kolom = 0; kolom < 3; kolom++)
        {
            printf("%d ", matriks2[baris][kolom]);
        }
        printf("\n");
    }

    printf("MATRIKS 3\n");
    for (baris = 0; baris < 3; baris++)
    {
        for (kolom = 0; kolom < 3; kolom++)
        {
            printf("%d ", matriks3[baris][kolom]);
        }
        printf("\n");
    }

    return 0;
} */

//MARI MENCOBA 2
/* int main ()
{
    int baris, kolom;
    int perintah;

    int matriks[2][3];

    for (baris = 0; baris < 2; baris++)
    {
        for (kolom = 0; kolom < 3; kolom++)
        {
            printf("masukkan angka:\n");
            scanf("%d", &matriks[baris][kolom]);
            printf("\n");
        }
    }

    for (baris = 0; baris < 2; baris++)
    {
        for (kolom = 0; kolom < 3; kolom++)
        {
            printf("%d ", matriks[baris][kolom]);
        }
        printf("\n");
    }

    printf("masukkan angka pengganti:\n");
    scanf("%d", &perintah);

    for (baris = 0; baris < 2; baris++)
    {
        for (kolom = 0; kolom < 3; kolom++)
        {
            if (matriks[baris][kolom] % 2 == 0)
            {
                matriks[baris][kolom] == perintah;
            }
        }
    }

    for (baris = 0; baris < 2; baris++)
    {
        for (kolom = 0; kolom < 3; kolom++)
        {
            printf("%d ", matriks[baris][kolom]);
        }
        printf("\n");
    }
    
    return 0;
} */

//MARI MENCOBA 3