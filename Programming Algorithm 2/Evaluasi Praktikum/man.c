/* 
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
    Soal Evaluasi 1 dalam mata kuliah Algoritma dan Pemrograman 2
    untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

//LIBRARY
#include "header.h"

int main ()
{
    //DEKLARASI VARIABEL
    int n, m, p;                                                //deklarasi variabel penampung jumlah tabel untuk setiap kelompk

    //INPUTAN USER
    scanf("%d", &n);                                            //meminta jumlah n dari user                    
    mahasiswa kelompok1[n];                                     //deklarasi struct untuk kelompok 1                         
    input(kelompok1, n);                                        //pemanggilan prosedur untuk input

    scanf("%d", &m);                                            //meminta jumlah m dari user
    mahasiswa kelompok2[m];                                     //deklarasi struct untuk kelompok 2        
    input(kelompok2, m);                                        //pemanggilan prosedur untuk input

    scanf("%d", &p);                                            //meminta jumlah p dari user
    mahasiswa kelompok3[p];                                     //deklarasi struct untuk kelompok 2
    input(kelompok3, p);                                        //pemanggilan prosedur untuk input

    //PROSEDUR
    insertion(kelompok1, n);                                    //pemanggilan prosedur sorting kelompok1
    insertion(kelompok2, m);                                    //pemanggilan prosedur sorting kelompok2
    insertion(kelompok3, p);                                    //pemanggilan prosedur sorting kelompok2

    //STRUCT TEMP (PENYIMPAN SEMENTARA)
    mahasiswa temp[n + m], akhir[n + m + p];   

    mergetab(kelompok1, n, kelompok2, m, temp);                  //prosedur menggabungkan tabel kelompok 1 dan 2
    mergetab(temp, n + m, kelompok3, p, akhir);                  //prosedur menggabungkan tabel kelompok 1,2 dan 3

    //OUTPUT
    printf("====================\n");                           //menampilkan teks ke layar
    for (i = 0; i < n + m + p; i++)                             //perulangan dengan total seluruh n, m dan p
    {
        printf("%s %s %d\n", akhir[i].nim, akhir[i].nama, akhir[i].nilai);           //menampilkan nim, nama dan nilai mahasiswa                                                    
    } 
    printf("====================\n");                           //menampilkan teks ke layar

    
    //PEMISAHAN TABEL note : masih error kang belum kepikiran codingannya gimana :( jadi dijadiin komen dulu aja deh hehe biar ga run error)
/*
    int pisah;
    pisah = (n + m + p) / 2;

    mahasiswa kiri[n + m + p];
    mahasiswa kanan[n + m + p];

    int k1, k2;

    for (i = 0; i < n + m + p; i++)                             //perulangan dengan total seluruh n
    {
        if (i < pisah)
        {
            akhir[k1++] = kiri[i];
        }
        else
        {
            akhir[k2++] = kanan[i];
        }
    }
    
    for (i = 0; i < k1; i++)
    {
        printf("%s %s %d\n", kiri[i].nim, kiri[i].nama, kiri[i].nilai);
    }

    printf("====================\n");
    for (i = 0; i < k2; i++)
    {
        printf("%s %s %d\n", kanan[i].nim, kanan[i].nama, kanan[i].nilai);
    }
    printf("====================\n");
*/

    return 0;                                                     //kembali 0
}