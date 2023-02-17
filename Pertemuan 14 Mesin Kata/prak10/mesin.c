#include "header.h"

int idx, wlen;
char cw[52];

void start(char str[])
{
    idx = 0;
    wlen = 0;

    while (str[idx] == ' ')
    {
        idx++;
    }

    while ((str[idx] != ' ') && (eop(str) == 0))
    {
        cw[wlen] = str[idx];
        idx++;
        wlen++;
    }

    cw[wlen] = '\0';
}

void reset()
{
    wlen = 0;
    cw[wlen] = '\0';
}

int eop(char str[])
{
    if (str[idx] == '.')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void inc(char str[])
{
    wlen = 0;

    while (str[idx] == ' ')
    {
        idx++;
    }

    while ((str[idx] != ' ') && (str[idx] != '.'))
    {
        cw[wlen] = str[idx];
        idx++;
        wlen++;
    }

    cw[wlen] = '\0';
}

int getlen()
{
    return wlen;
}

char *getcw()
{
    return cw;
}

void modifydata(char str[], student *data)
{
    start(str);

    if (strcmp(getcw(), "INSERT") == 0)
    {
        inc(str);
        if (strcmp(getcw(), "mahasiswa") == 0)
        {
            inc(str);
            strcpy(data->nim, getcw());
            inc(str);
            strcpy(data->nama, getcw());
            inc(str);
            strcpy(data->nilai, getcw());
        }
        else
        {
            // Masukkan error handling di sini..
        }
    }
    else if (strcmp(getcw(), "UPDATE") == 0)
    {
        // masukkan kode modifikasi data di sini
    }
    else if (strcmp(getcw(), "DELETE") == 0)
    {
        // Masukkan kode penghapusan data di sini
    }
}