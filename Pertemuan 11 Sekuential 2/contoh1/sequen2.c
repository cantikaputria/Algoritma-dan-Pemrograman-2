#include <stdio.h>
#include <string.h>

typedef struct
{
    char nim[101];
    char nama[100];
    char nilai[2];
} nilaiMatkul;

int main ()
{
    nilaiMatkul rekaman;
    FILE *arsipMatkul1;
    FILE *arsipMatkul2;
    FILE *arsipMatkul3;

    arsipMatkul1 = fopen("arsipMatkul1.dat", "r");
    arsipMatkul2 = fopen("arsipMatkul2.dat", "r");
    arsipMatkul3 = fopen("arsipMatkul3.dat", "w");

    printf("Mulai proses penggabungan file\n");

    fscanf(arsipMatkul1, "%s %s %s\n", &rekaman.nim, &rekaman.nama, &rekaman.nilai);
    while(strcmp(rekaman.nim, "XXXXXXXX") != 0)
    {
        fprintf(arsipMatkul3, "%s %s %s\n", rekaman.nim, rekaman.nama, rekaman.nilai);
        fscanf(arsipMatkul1, "%s %s %s\n", &rekaman.nim, &rekaman.nama, &rekaman.nilai);
    }

    fscanf(arsipMatkul2, "%s %s %s\n", &rekaman.nim, &rekaman.nama, &rekaman.nilai);
    while(strcmp(rekaman.nim, "XXXXXXXX") != 0)
    {
        fprintf(arsipMatkul3, "%s %s %s\n", rekaman.nim, rekaman.nama, rekaman.nilai);
        fscanf(arsipMatkul2, "%s %s %s\n", &rekaman.nim, &rekaman.nama, &rekaman.nilai);
    }

    fprintf(arsipMatkul3, "%s %s %s\n", "XXXXXXXX", "XXX", "X");
    printf("selesai\n");
    
    fclose(arsipMatkul1);
    fclose(arsipMatkul2);
    fclose(arsipMatkul3);

    return 0;
}