/* 
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
    Tugas Praktikum 6 dalam mata kuliah Algoritma dan Pemrograman 2
    untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

//LIBRARY
#include <stdio.h>
#include <string.h>

//DEKLARASI TIPE BUNGKUSAN
typedef struct
{
    char barang[50];                                              //variabel untuk menampung barang yang akan dibeli
    int harga;                                                    //variabel untuk menampung harga barang
    float rating;                                                 //variabel untuk menampung rating barang                                          //variabel untuk menghitung
} beli;                                                           //nama struct

//DEKLARASI VARIABEL
int i, j, k;                                                      //variabel iterator

//DEKLARASI RPOSEDUR
void input(beli[], int);                                          //prosedur untuk meminta inputan dari user
void mergetabH(beli[], int, beli[], int, beli[]);                 //prosedur untuk menggabungkan tabel berdasarkan harga
void mergetabR(beli[], int, beli[], int, beli[]);                 //prosedur untuk menggabungkan tabel berdasarkan rating
void insertion(beli[], int);                                      //prosedur sorting dengan cara insertion
void selection(beli[], int);                                      //prosedur sorting dengan cara selection
void bubble(beli[], int);                                         //prosedur sorting dengan cara bubble short  
void quick(beli[], int);                                          //prosedur sorting dengan cara quick short
void hitung(beli[], int);                                         //prosedur untuk menghitung barang dengan uang yang cukup                                          