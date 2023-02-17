#include <stdio.h>
#include <string.h>

//PENCARIAN BERUNTUN (sequential search)
/* typedef struct
{
    char nim[50];
    char nama[50];
    float nilai;
} nilaiMatkul;
nilaiMatkul tabel[5];

void isi (int i, char nim[], char nama[], float nilai)
{
    strcpy(tabel[i].nim, nim);
    strcpy(tabel[i].nama, nama);
    tabel[i].nilai = nilai;
}

int main ()
{
    char nim_cari[50];
    int ketemu; int i;
    isi (0, "13050771", "Nana", 64.75);
    isi (1, "13050772", "Rudi", 75.11);
    isi (2, "13050773", "Dea", 84.63);
    isi (3, "13050774", "Ihsan", 77.07);
    isi (4, "13050775", "Tiara", 66.70);

    strcpy(nim_cari, "13050774");
    ketemu = 0; i = 0;

    while ((i < 5) && (ketemu == 0))
    {
        if (strcmp(tabel[i].nim, nim_cari) == 0)
        {
            ketemu = 1;
        }
        else
        {
            i = i + 1;
        }
    }

    if (ketemu == 1)
    {
        printf("nim: %s\n", tabel[i].nim);
        printf("nama: %s\n", tabel[i].nama);
        printf("nilai: %0.2f\n", tabel[i].nilai);
    }
    else
    {
        printf("tidak ditemukan");
    }

    return 0;
} */

//MARI MENCOBA
/* typedef struct
{
    char nim[50];
    char nama[50];
    float nilai;
} nilaiMatkul;

void isi (int i, char nim[], char nama[], float nilai)
{
    strcpy(tabel[i].nim, nim);
    strcpy(tabel[i].nama, nama);
    tabel[i].nilai = nilai;
}

void cari (int i, nilaiMatkul[], char cari)
{
    strcpy(cari, "A");
    ketemu = 0; i = 0;

    for (i = 0; i < 5; i++)
    {
        if (strcmp(tabel[i].nim, nim_cari) == 0)
        {
            ketemu = 1;
        }
        else
        {
            i = i + 1;
        }
    }
}

int main ()
{
    int ketemu; int i;
    isi (0, "13050771", "Nana", 64.75);
    isi (1, "13050772", "Rudi", 75.11);
    isi (2, "13050773", "Dea", 84.63);
    isi (3, "13050774", "Ihsan", 77.07);
    isi (4, "130507715, "Tiara", 66.70);

    cari(i, tabel, cari);

    printf("%d", ketemu);

    return 0;
} */

//BINARY SEARCH 
int tabInt[10] = {15, 16, 20, 22, 28, 34, 67, 67, 89, 98};

int main ()
{
    int i, j, bil_cari, k, ketemu;
    i = 0; j = 9; ketemu = 0;
    bil_cari = 67;
    
    while((ketemu == 0) && (i <= j))
    {
        k = (int)(i + j) / 2;
        if (tabInt[k] == bil_cari)
        {
            ketemu = 1;
        }
        else
        {
            if(tabInt[k] > bil_cari)
            {
                j = k - 1;
            }
            else{
                i = k + 1;
            }
        }
    }

    if(ketemu == 1)
    {
        printf("ada pada tabel");
    }
    else
    {
        printf("tidak ada");
    }

    return 0;
}