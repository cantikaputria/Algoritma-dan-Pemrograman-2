#include <stdio.h>
#include <string.h>

typedef struct
{
    char nama[100];
    char jurusan[100];
    char fakultas[100];
} data;

int main ()
{
    int n = 0;
    data mahasiswa[50];

    FILE *fmahasiswa;
    fmahasiswa = fopen("Mahasiswa.dat", "r");

    fscanf(fmahasiswa, "%s %s %s", mahasiswa[n].nama, mahasiswa[n].jurusan, mahasiswa[n].fakultas);

    if (strcmp(mahasiswa[0].nama, "####") == 0)
    {
        printf("File Kosong\n");
    }
    else
    {
        while(strcmp(mahasiswa[0].nama, "####") != 0)
        {
            n++;
            fscanf(fmahasiswa, "%s %s %s", mahasiswa[n].nama, mahasiswa[n].jurusan, mahasiswa[n].fakultas);
        }
    }
    fclose(fmahasiswa);

    FILE *fjurusan;
    fjurusan = fopen("Jurusan.dat", "r");
    char kode_jurusan[100], nama_jurusan[100];

    fscanf(fjurusan, "%s %s", kode_jurusan, nama_jurusan);

    if (strcmp(kode_jurusan, "####") == 0)
    {
        printf("File Kosong\n");
    }
    else
    {
        while(strcmp(kode_jurusan, "####") != 0)
        {
            for (int i = 0; i < n; i++)
            {
                if(strcmp(kode_jurusan, mahasiswa[i].jurusan) == 0)
                {
                    strcpy(mahasiswa[i].jurusan, nama_jurusan);
                }
            }
            fscanf(fjurusan, "%s %s", kode_jurusan, nama_jurusan);
        }
    }
    fclose(fjurusan);

    FILE *ffakultas;
    ffakultas = fopen("Fakultas.dat", "r");
    char kode_fakultas[100], nama_fakultas[100];

    fscanf(ffakultas, "%s %s", kode_fakultas, nama_fakultas);

    if (strcmp(kode_fakultas, "####") == 0)
    {
        printf("File Kosong\n");
    }
    else
    {
        while(strcmp(kode_fakultas, "####") != 0)
        {
            for (int i = 0; i < n; i++)
            {
                if(strcmp(kode_fakultas, mahasiswa[i].fakultas) == 0)
                {
                    strcpy(mahasiswa[i].fakultas, nama_fakultas);
                }
            }
            fscanf(ffakultas, "%s %s", kode_fakultas, nama_fakultas);
        }
    }
    fclose(ffakultas);

    fmahasiswa = fopen("Mahasiswa.dat", "w");

    for(int i = 0; i < n; i++)
    {
        fprintf(fmahasiswa, "%s %s %s\n", mahasiswa[i].nama, mahasiswa[i].jurusan, mahasiswa[i].fakultas);
    }

    fprintf(fmahasiswa, "#### #### ####\n");

    return 0;
}