#include <stdio.h>
#include <string.h>

typedef struct
{
    char nama[100];
    char jurusan[100];
    char fakultas[100];
} data_mhs;

int main()
{
    int n = 0;
    int i;

    data_mhs mhs[10];

    FILE *fmahasiswa;
    fmahasiswa = fopen("Mahasiswa.dat", "r");

    fscanf(fmahasiswa, "%s %s %s", mhs[n].nama, mhs[n].jurusan, mhs[n].fakultas);

    if (strcmp(mhs[0].nama, "####") == 0)
    {
        printf("File Mahasiswa kosong\n");
    }
    else
    {
        while (strcmp(mhs[n].nama, "####") != 0)
        {
            n++;
            fscanf(fmahasiswa, "%s %s %s", mhs[n].nama, mhs[n].jurusan, mhs[n].fakultas);
        }
    }
    fclose(fmahasiswa);

    FILE *fjurusan;
    fjurusan = fopen("Jurusan.dat", "r");
    char kd_jur[10], nama_jur[50];

    fscanf(fjurusan, "%s %s", kd_jur, nama_jur);

    if (strcmp(kd_jur, "####") == 0)
    {
        printf("File Jurusan kosong\n");
    }
    else
    {
        while (strcmp(kd_jur, "####") != 0)
        {
            for (i = 0; i < n; i++)
            {
                if (strcmp(kd_jur, mhs[i].jurusan) == 0)
                {
                    strcpy(mhs[i].jurusan, nama_jur);
                }
            }
            fscanf(fjurusan, "%s %s", kd_jur, nama_jur);
        }
    }
    fclose(fjurusan);

    FILE *ffakultas;
    ffakultas = fopen("Fakultas.dat", "r");
    char kd_fak[10], nama_fak[50];

    fscanf(ffakultas, "%s %s", kd_fak, nama_fak);

    if (strcmp(kd_fak, "####") == 0)
    {
        printf("File Fakultas kosong\n");
    }
    else
    {
        while (strcmp(kd_fak, "####") != 0)
        {
            for (i = 0; i < n; i++)
            {
                if (strcmp(kd_fak, mhs[i].fakultas) == 0)
                {
                    strcpy(mhs[i].fakultas, nama_fak);
                }
            }
            fscanf(ffakultas, "%s %s", kd_fak, nama_fak);
        }
    }
    fclose(ffakultas);

    FILE *fhasil;
    fhasil = fopen("hasil.dat", "w");
    for (i = 0; i < n; i++)
    {
        fprintf(fhasil, "%s %s %s\n", mhs[i].nama, mhs[i].jurusan, mhs[i].fakultas);
        printf("%s %s %s\n", mhs[i].nama, mhs[i].jurusan, mhs[i].fakultas);
    }

    fprintf(fhasil, "#### #### ####\n");

    return 0;
}
