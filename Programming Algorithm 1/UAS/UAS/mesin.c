/*
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan
    Soal UAS Nomor 1 dalam mata kuliah Algoritma dan Pemrograman 1
    untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

//deklarasi library berdasarkan file header
#include "header.h"

//penghitungan prosedur untuk mencari jumlah suku kata
void hitung (int n, char arrstr[n][101], char str[])
{
    jumlah = 0;                                        //deklarasi nilai awal variabel jumlah
    for (i = 0; i < n; i++)                            //perulangan untuk mencari jumlah suku kata
    {   
        if (strstr(arrstr[i], str) != NULL)            //kondisi jika nilai arrstr dan str tidak sama dengan null
        {
            jumlah++;                                  //maka nilai jumlah suku kata akan terus bertambah
        }
    }
}