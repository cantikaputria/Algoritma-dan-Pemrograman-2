/* 
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
    Soal Kuis 2 dalam mata kuliah Algoritma dan Pemrograman 2
    untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

//DEKLARASI LIBRARY
#include "header.h"

int main()
{   
    //DEKLARASI VARIABEL
    int n;                                                      //variabel penampung jumlah data makanan
    int ketemu;                                                 //variabel penampung sebagai penanda
    char urutkan[50];                                           //variabel penampung string untuk patokan pengurutan
    makanan kangen[50];                                         //deklarasi nama struct

    //MASUKAN USER
    scanf("%d", &n);                                            //meminta masukan nilai n dari user
    input(kangen, n);                                           //pemanggilan prosedur untuk inputan data makanan
    scanf("%s", &urutkan);                                      //meminta masukan pengurutan dari user
    scanf("%d", &search);                                       //meminta masukan int yang dicari dari user

    //KONDISI
    if(strcmp(urutkan, "harga") == 0)                           //jika urutan berdasarkan harga, maka...
    {
        sorting1(kangen, n);                                    //pemanggilan prosedur untuk proses sorting
        ketemu = binSearch1(kangen, 0, n);                      //pemanggilan fungsi untuk proses searching
    }
    else if(strcmp(urutkan, "kalori") == 0)                     //jika urutan berdasarkan kalori, maka...
    {
        sorting2(kangen, n);                                    //pemanggilan prosedur untuk proses sorting
        ketemu = binSearch2(kangen, 0, n);                      //pemanggilan fungsi untuk proses searching
    }

    if (ketemu == -1)                                           //jika nilai ketemu = -1
    {                                                   
        printf("tidak ditemukan\n");                            //maka data yang dicari tidak ditemukan
    }
    else                                                        //selain itu, maka data ditemukan (berdasarkan index)
    {                                
        output(kangen[ketemu]);                                 //pemanggilan prosedur untuk menampilkan output
    }

    return 0;                                                   //kembali ke 0
}