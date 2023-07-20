/* Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
Soal Praktikum 5 dalam mata kuliah Algoritma dan Pemrograman 2
untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
yang telah dispesifikasikan. Aamiin.
*/

//LIBRARY 
#include <stdio.h>
#include <string.h>

//DEKLARASI STRUCT
typedef struct
{
    char judul[50];         //variabel string penampung judul film
    int jam;                //variabel penampung durasi jam
    int menit;              //variabel penampung durasi menit
} bioskop;                  //nama struct

//DEKLARASI PROSEDUR
void bubble_asc(int n, bioskop film[]);                     //prosedur untuk sorting bubble ascending
void bubble_desc(int n, bioskop film[]);                    //prosedur untuk sorting bubble descending
void quick_asc(bioskop film[], int kiri, int kanan);        //prosedur untuk sorting quick ascending
void quick_desc(bioskop film[], int kiri, int kanan);       //prosedur untuk sorting quick descending