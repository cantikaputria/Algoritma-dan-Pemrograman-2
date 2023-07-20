/* Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
Soal Praktikum 2 dalam mata kuliah Algoritma dan Pemrograman 2
untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
yang telah dispesifikasikan. Aamiin.
*/

//LIBRARY
#include <stdio.h>
#include <string.h>

//DEKLARASI VARIABEL
int n, m;                                                       //deklarasi variabel untuk baris dan kolom
int i, j, k, o;                                                 //deklarasi variabel untuk iterasi

//DEKLARASI TIPE BUNGKUSAN
typedef struct                                                
{
    char nama[50];                                              //deklarasi string untuk menampung nama tim
    int attack;                                                 //deklarasi variabel untuk menampung nilai attack
    int defence;                                                //deklarasi variabel untuk menampung nilai defence
    float rata_rata;                                            //deklarasi variabel untuk menampung nilai rata-rata
} basket;

//DEKLARASI VARIABEL
char tukar_kiri[50][50];                                        //deklarasi variabel untuk menampung nama tim yang akan ditukar pada bagian kiri
char tukar_kanan[50][50];                                       //deklarasi variabel untuk menampung nama tim yang akan ditukar pada bagian kiri

//DEKLARASI PROSEDUR
void berhenti();                                                //deklarasi prosedur untuk menghentikan inputan ketika string = stop
void spasi_print1(int n, int m, basket tim[n][m]);              //deklarasi prosedur untuk merapihkan matriks awal dan menampilkan ke layar
void tukar(int n, int m, basket temp, basket tim[n][m]);        //deklarasi prosedur untuk menukar 
void spasi_print2();                                            //deklarasi prosedur untuk merapihkan matriks awal dan menampilkan ke layar