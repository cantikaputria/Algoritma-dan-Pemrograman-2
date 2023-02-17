/* 
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
    Soal Evaluasi 1 dalam mata kuliah Algoritma dan Pemrograman 2
    untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

//LIBRARY
#include <stdio.h>
#include <string.h>

//DEKLARASI STRUCT
typedef struct 
{
    char nim[11];                                               //variabel penampung string nim
    char nama[51];                                              //variabel penampung nama mahasiswa
    int nilai;                                                  //variabel penampung nilai mahasiswa
} mahasiswa;                                                    //nama struct

//DEKLARASI VARIABEL
int i, j, k;                                                    //variabel iterasi
char key[11];                                                   //variabel penyimpan sementara

//DEKLARASI PROSEDUR
void input(mahasiswa[], int);                                   //prosedur untuk meminta input data mahasiswa
void mergetab(mahasiswa[], int, mahasiswa[], int, mahasiswa[]); //prosedur untuk menggabungkan tiga tabel
void insertion(mahasiswa[], int);                               //prosedur sorting