/*
    Saya Cantika Putri Arbiliansyah mengerjakan evaluasi
    Tugas Masa Depan dalam mata kuliah Algoritma dan Pemrograman 1
    untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

//deklarasi library yang digunakan
#include <stdio.h>
#include <string.h>

//deklarasi variabel
int i;                                   //deklarasi variabel penanda
int baris, kolom;                        //deklarasi variabel untuk penanda baris dan kolom

//deklarasi prosedur
void hurufkiri (int n);                  //prosedur untuk pola angka dengan huruf di sebelah kiri
void huruftengah (int n);                //prosedur untuk pola angka dengan huruf di sebelah tengah
void hurufkanan (int n);                 //prosedur untuk pola angka dengan huruf di sebelah kanan
void hurufkanankiri (int n);             //prosedur untuk pola angka dengan huruf di sebelah kanan dan kiri
void hurufkirikiri (int n);              //prosedur untuk pola angka dengan huruf di sebelah kiri dan kiri
void hurufi (int n);                     //prosedur untuk pola angka dengan huruf di sebelah kanan sejajar
void spasiangka (int n);                 //prosedur untuk pola spasi antar angka ascii
void spasihuruf (int n);                 //prosedur untuk pola spasi antar huruf (kelipatan 2)