/* 
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
    Tugas Remedial dalam mata kuliah Algoritma dan Pemrograman 1
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>            //deklarasi library
#include <string.h>           //deklarasi library string

//variabel global
typedef struct                //tipe bungkusan
{
    int pembilang;            //deklarasi isi bungkusan untuk nilai pembilang pecahan
    int penyebut;             //deklarasi isi bungkusan untuk nilai penyebut pecahan
    char db;                  //deklarasi isi bungkusan untuk menampilkan karakter dari depan atau belakang
} arrbungkus;                 //deklarasi nama bungkusan

int i, j, k, spasi;           //deklarasi variabel untuk inisialiasi dan penanda

//deklarasi prosedur
void pisah (int n, char arrstr[n][50]);               //prosedur untuk memisahkan string
void tampil (int n, char arrstr[n][50]);              //prosedur untuk menampilkan string sesuai pola