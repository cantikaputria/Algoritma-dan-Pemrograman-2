/* 
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
    Tugas Praktikum 6 dalam mata kuliah Algoritma dan Pemrograman 2
    untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

//LIBRARY
#include "header.h"

int main ()
{
    //DEKLARASI VARIABEL
    int n1, n2, n3;                                                 //deklarasi variabel penampung jumlah barang di toko A, B dan C
    char metode;                                                    //deklarasi variabel penampung metode yang akan digunakan
    int budget;                                                     //deklarasi variabel penampung budget yang tersedia
    char patokan[50];                                               //deklarasi variabel penampung string patokan sorting

    //TOKO A atau 1
    scanf("%d", &n1);                                               //meminta masukan n dari user
    beli toko1[n1];                                                 //deklarasi struct                               
    input(toko1, n1);                                               //pemanggilan prosedur input

    //TOKO B atau 2
    scanf("%d", &n2);                                               //meminta masukan n dari user
    beli toko2[n2];                                                 //deklarasi struct                           
    input(toko2, n2);                                               //pemanggilan prosedur input

    //TOKO C atau 3
    scanf("%d", &n3);                                               //meminta masukan n dari user
    beli toko3[n3];                                                 //deklarasi struct                             
    input(toko3, n3);                                               //pemanggilan prosedur input

    //INPUTAN USER
    scanf("%d", &budget);                                           //inputan untuk budget ana yang tersedia
    scanf(" %c", &metode);                                          //inputan untuk metode yang akan digunakan
    scanf("%s", &patokan);                                          //inputan untuk patokan yang akan digunakan

    //MENAMPILKAN KE LAYAR
    printf("Wishlist Ana:\n");                                      //menampilkan teks ke layar
    printf("------------------------------\n");                     //belum disesuaikan sama panjang total

    //STRUCT
    beli temp[n1 + n2], akhir[n1 + n2 + n3];                        //deklarasi struct untuk penampung

    //SYARAT
    if (strcmp(patokan, "harga") == 0)                              //jika patokannya harga maka
    {
        mergetabH(toko1, n1, toko2, n2, temp);                      //prosedur menggabungkan wishlist toko A dan B
        mergetabH(temp, n1 + n2, toko3, n3, akhir);                 //prosedur menggabungkan wishlist toko (A dan B) dan C
    }
    else if(strcmp(patokan, "rating") == 0)                         //jika patokannya rating maka
    {
        mergetabR(toko1, n1, toko2, n2, temp);                      //prosedur menggabungkan wishlist toko A dan B
        mergetabR(temp, n1 + n2, toko3, n3, akhir);                 //prosedur menggabungkan wishlist toko (A dan B) dan C
    }

    //PROSES MENAMPILKAN OUTPUT KE LAYAR
    for ( i = 0; i < n1 + n2 + n3; i++)                             //perulangan
    {
        printf("%s %d %0.1f\n", akhir[i].barang, akhir[i].harga, akhir[i].rating);          //menampilkan nama barang, harga barang dan ratingnya
    }

    printf("===============================\n");                    //menampilkan teks ke layar (belum di set panjangnya)
    printf("barang yang dibeli:\n");                                //menampilkan teks ke layar
    printf("-------------------------------\n");                    //menampilkan teks ke layar (belum di set panjangnya)
    

    return 0;                                                       //kembali ke o
}