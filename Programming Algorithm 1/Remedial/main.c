/* 
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
    Tugas Remedial dalam mata kuliah Algoritma dan Pemrograman 1
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

//deklarasi library berdasarkan file header
#include "header.h"

//prosedur untuk memisahkan string sesuai pecahan
void pisah (int n, char arrstr[n][50])
{
   arrbungkus pecahan[n];                               //deklarasi array tipe bungkusan untuk pecahan
   arrbungkus fiksasi[n];                               //deklarasi array tipe bungkusan untuk pilihan dari depan atau belakang
   int panjangstr[n];                                   //variabel untuk menampung panjang array of string
    
    for (i = 0; i < n; i++)                             //perulangan untuk membagi panjang array of string
    {
        panjangstr[i] = strlen(arrstr[i]);                                                        //mengisi nilai variabel dengan panjang array of string
        panjangstr[i] = panjangstr[i] * pecahan[i].pembilang / pecahan[i].penyebut;               //membagi panjang string sesuai pecahan
    }
}

//prosedur untuk menampilkan string sesuai pola
void tampil (int n, char arrstr[n][50])
{
    arrbungkus pecahan[n];                              //deklarasi array tipe bungkusan untuk pecahan
    arrbungkus fiksasi[n];                              //deklarasi array tipe bungkusan untuk pilihan dari depan atau belakang

    for (i = 0; i < n; i++)                             //perulangan untuk membuatpola tangga
    {
        for (j = 0; j < spasi; j++)
        {
            printf(" ");
        }
      /*
        if (fiksasi[i].db == 'b')                               //jika karakter yang dimasukkan = b maka tampilkan string dari belakang / terbalik
        {
            for (k = spasi; k >= 0; k--)                        //perulangan untuk menampilkan isi string dengan terbalik
            {
              printf("%s", arrstr[i][k]);                       //menampilkan isi string
            }
           printf("\n");
        }

        else if (fiksasi[i].db == 'd')                         //jika karakter yang dimasukkan = d maka tampilkan string dari depan
        {
            printf("%s\n", arrstr[i]);                         //menampilkan isi string
        }
      */
        printf("%s\n", arrstr[i]);                             //ibu mohon maaf tangganya masih kebalik :(
        spasi = spasi + strlen(arrstr[i]);
    }
} 