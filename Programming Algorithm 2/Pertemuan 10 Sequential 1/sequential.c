#include <stdio.h>
#include <string.h>

//ARSIP BERUNTUN WRITE
/* typedef struct
{
    char nim[10];
    char nama[100];
    char nilai[2];
} nilaiMatkul;

int main ()
{
    nilaiMatkul rekaman;
    FILE *arsipMatkul;

    arsipMatkul = fopen ("arsipMatkul.dat", "w");

    printf("Tuliskan rekaman data satu persatu:\n");
    printf("masukkan NIM:\n");
    scanf("%s", &rekaman.nim);

    while(strcmp(rekaman.nim, "XXXX") != 0)
    {
        printf("masukkan nama: \n");
        scanf("%s", &rekaman.nama);

        printf("masukkan nilai: \n");
        scanf("%s", &rekaman.nilai);

        fprintf(arsipMatkul, "%s %s %s\n", rekaman.nim, rekaman.nama, rekaman.nilai);

        printf("masukkan NIM:\n");
        scanf("%s", &rekaman.nim);
    }

    fprintf(arsipMatkul, "%s %s %s\n", "XXXX", "XXX", "X");

    fclose(arsipMatkul);

    return 0;
} */

//ARSIP BERUNTUN READ
/* typedef struct
{
    char nim[10];
    char nama[100];
    char nilai[2];
} nilaiMatkul;

int main ()
{
    nilaiMatkul rekaman;
    FILE *arsipMatkul;

    arsipMatkul = fopen ("arsipMatkul.dat", "r");

   printf("isi arsip beruntun adalah:\n");
   fscanf(arsipMatkul, "%s %s %s\n", &rekaman.nim, &rekaman.nama, &rekaman.nilai);

   if(strcmp(rekaman.nim, "XXXX") == 0)
   {
      printf("arsip kosong!");
   }
   else
   {
       do
       {
           printf("nim: %s\n", rekaman.nim);
           printf("nama: %s\n", rekaman.nama);
           printf("nilai: %s\n", rekaman.nilai);

           fscanf(arsipMatkul, "%s %s %s\n", &rekaman.nim, &rekaman.nama, &rekaman.nilai);
       } while (strcmp(rekaman.nim, "XXXX") != 0);  
   }

   fclose(arsipMatkul);

    return 0;
} */

//ARSIP DENGAN PENCARIAN DATA
typedef struct
{
    char nim[10];
    char nama[100];
    char nilai[2];
} nilaiMatkul;

int main ()
{
    nilaiMatkul rekaman;
    FILE *arsipMatkul;

    arsipMatkul = fopen ("arsipMatkul.dat", "r");

    char kata_cari[10];
    printf("masukkan nim yang dicari:\n");
    scanf("%s", &kata_cari);
    
    fscanf(arsipMatkul, "%s %s %s\n", &rekaman.nim, &rekaman.nama, &rekaman.nilai);
    
    if(strcmp(rekaman.nim, "XXXX") == 0)
    {
      printf("arsip kosong!");
    }
    else
    {
        if(strcmp(kata_cari, "XXXX") == 0)
        {
            printf("tidak ditemukan!\n");
        }
        else
        {
            while((strcmp(rekaman.nim, "XXXX") != 0) && (strcmp(rekaman.nim, kata_cari) != 0))
            {
                fscanf(arsipMatkul, "%s %s %s\n", &rekaman.nim, &rekaman.nama, &rekaman.nilai); 
            }

            if(strcmp(rekaman.nim, kata_cari) == 0)
            {
                printf("Hasil pencarian:\n");
                printf("nim: %s\n", rekaman.nim);
                printf("nama: %s\n", rekaman.nama);
                printf("nilai: %s\n", rekaman.nilai);
                printf("-------------");
            }
            else
            {
                printf("tidak ditemukan");
            }
        }
    }

    fclose(arsipMatkul);

    return 0;
} 

//MENYALIN ARSIP 
typedef struct
{
    char nim[10];
    char nama[100];
    char nilai[2];
} nilaiMatkul;

int main ()
{
    nilaiMatkul rekaman;
    FILE *arsipMatkul;
    FILE *copyArsip;

    arsipMatkul = fopen("arsipMatkul.dat", "r");
    copyArsip = fopen("copyArsip.dat", "w");

    printf("mulai proses menyalin\n");

    fscanf(arsipMatkul, "%s %s %s\n", &rekaman.nim, &rekaman.nama, &rekaman.nilai);

    if(strcmp(rekaman.nim, "XXXX") == 0)
    {
        fprintf(copyArsip, "%s %s %s\n", "XXXX", "XXX", "X");
    }
    else
    {
        while (strcmp(rekaman.nim, "XXXX") != 0)
        {
            fprintf(copyArsip, "%s %s %s\n", rekaman.nim, rekaman.nama, rekaman.nilai);
            fscanf(arsipMatkul, "%s %s %s\n", &rekaman.nim, &rekaman.nama, &rekaman.nilai);
        }
        fprintf(copyArsip, "%s %s %s\n", "XXXX", "XXX", "X");
    }

    printf("proses menyalin telah selesai\n");

    fclose(arsipMatkul);
    fclose(copyArsip);
}
