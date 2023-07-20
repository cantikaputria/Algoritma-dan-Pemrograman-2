/*
    Saya Cantika Putri Arbiliansyah mengerjakan evaluasi
    Tugas Masa Depan dalam mata kuliah Algoritma dan Pemrograman 1
    untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

//deklarasi library berdasarkan file header
#include "header.h"

  //PROSEDUR UNTUK CETAK HURUF
    void hurufkiri (int n)                                  //prosedur untuk pola angka dengan huruf di sebelah kiri
    {
        for (kolom = 1; kolom <= n; kolom++)                //ketika kolom = 1 dan kurang dari sama dengan n maka....
        {
            printf("B");                                    //menampilkan huruf B ke layar
        }

        for (kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");                                    //menampilkan spasi ke layar
        }                                                   //dst berlanjut hingga akhir dengan proses yang sama

        for (kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
    }

    void huruftengah (int n)                               //prosedur untuk pola angka dengan huruf di sebelah tengah
    {
        for (kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }

        for (kolom = 1; kolom <= n; kolom++)
        {
            printf("B");
        }

        for (kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
    }

    void hurufkanan (int n)                                //prosedur untuk pola angka dengan huruf di sebelah kanan
    {
        for (kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }

        for (kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }

        for (kolom = 1; kolom <= n; kolom++)
        {
            printf("B");
        }
    }

    void hurufkanankiri (int n)                          //prosedur untuk pola angka dengan huruf di sebelah kanan dan kiri
    {
        for (kolom = 1; kolom <= n; kolom++)
        {
            printf("B");
        }

        for (kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }

        for (kolom = 1; kolom <= n; kolom++)
        {
            printf("B");
        }
    }

    void hurufkirikiri (int n)                             //prosedur untuk pola angka dengan huruf di sebelah kiri dan kiri
    {
        for (kolom = 1; kolom <= n; kolom++)
        {
            printf("B");
        }

        for (kolom = 1; kolom <= n; kolom++)
        {
            printf("B");
        }

        for (kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
    }

    void hurufi (int n)                                   //prosedur untuk pola angka dengan huruf di sebelah kanan sejajar
    {
        for (kolom = 1; kolom <= n; kolom++)
        {
            printf("B");
        }
    }

    //PROSEDUR UNTUK CETAK SPASI
    void spasiangka (int n)                               //prosedur untuk pola spasi antar angka ascii
    {
       for (kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }

        for (kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
    }

    void spasihuruf (int n)                              //prosedur untuk pola spasi antar huruf (kelipatan 2)
    {
       for (kolom = 1; kolom <= n * 2; kolom++)
        {
            printf(" ");
        }

        for (kolom = 1; kolom <= n * 2; kolom++)
        {
            printf(" ");
        }
    }