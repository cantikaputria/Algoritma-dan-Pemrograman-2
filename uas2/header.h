/* 
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
    Soal UAS No 2 dalam mata kuliah Algoritma dan Pemrograman 2
    untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

//DEKLARASI LIBRARY
#include <stdio.h>
#include <string.h>

//DEKLARASI VARIABEL
int indeks;                                             //variabel penampung indeks
int panjangkata;                                        //variabel penampung panjang kata
char ckata[200];                                        //variabel penampung kata saat ini

//DEKLARASI STRUCT
typedef struct
{
    char kata[200];                                     //variabel penampung string kata
} kata;                                                 //deklarasi nama struct

//DEKLARASI PROSEDUR & FUNGSI
void start(char str[]);                                 //prosedur untuk menyalakan mesin dan memulai pembacaan
void inc(char str[]);                                   //prosedur untuk memajukan proses baca kata       
void reset();                                           //prosedur membersihkan ckata   
int eop(char str[]);                                    //fungsi end of procces dengan . sebagai akhir kalimat / kata
char *getckata();                                       //prosedur mengambil nilai kata saat ini (ckata)
