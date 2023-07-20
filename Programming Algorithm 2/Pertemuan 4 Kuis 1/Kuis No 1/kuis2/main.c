/* Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
Soal Kuis Nomor 1 dalam mata kuliah Algoritma dan Pemrograman 2
untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
yang telah dispesifikasikan. Aamiin.
*/

//LIBRARY
#include "header.h"

int main ()
{
    //DEKLARASI VARIABEL
    int a, b;                                   //deklarasi koordinat matriks yang akan dicari

    //MATRIKS 1
    scanf("%d %d", &n, &m);                     //meminta masukan ukuran dimensi matriks pertama dari user
    int matriks1[n][m];                         //deklarasi variabel matriks pertama (belum pake strutk)

    for (i = 0; i < n; i++)                     //perulangan untuk mengisi nilai matriks
    {
        for ( j = 0; j < m; j++)
        {
            scanf("%d", matriks1[i][j]);        //meminta isi matriks dari user
        }
    }
/*
    //MATRIKS 2
    scanf("%d %d", &x, &y);                     //meminta masukan ukuran dimensi matriks kedua dari user
    int matriks2[x][y];                         //deklarasi variabel matriks kedua

    for (i = 0; i < x; i++)                     //perulangan untuk mengisi nilai matriks kedua dari user
    {
        for ( j = 0; j < y; j++)
        {
            scanf("%d", matriks2[i][j]);        //mmeinta inputan isi nilai matriks dari user
        }
    }
*/
    //KOORDINAT MATRIKS
    //scanf("%d %d", &a, &b);                     //meminta inputan koordinat matriks dari user

    //MENAMPILKAN MATRIKS (proses belum terbayang logicnya, sementara agar ada output print matriks awal)
  /*  for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            printf("%d", matriks1[i][j]);
        }
        printf("\n");
    } */
/*
    for ( i = 0; i < x; i++)
    {
        for ( j = 0; j < y; j++)
        {
            printf("%d", matriks2[i][j]);
        }
        printf("\n");
    }
*/
    return 0;
}

/* Note:
ibu maaf hasilnya belum maksimal dan latihan saya masih kurang, bismillah insya Allah saya akan coba terus */