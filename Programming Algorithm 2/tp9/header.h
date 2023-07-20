/* 
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
    Tugas Praktikum 9 dalam mata kuliah Algoritma dan Pemrograman 2
    untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

//LIBRARY
#include <stdio.h>
#include <string.h>

//DEKLARASI VARIABEL   
int indeks;                                 //variabel penampung penanda indeks
char cc;                                    //variabel penampung karakter

//DEKLARASI VARAIBEL DAN PROSEDUR
void start(char pita[]);                    //prosedur untuk memulai proses pembacaan karakter
void inc(char pita[]);                      //prosedur untuk increment dan memajukan pembacaan karakter
void adv(char pita[]);                      //prosedur untuk memajukan pembacaan karakter melewati spasi
char getcc();                               //prosedur untuk mengambil nilai karakter
int eop();                                  //prosedur untuk mendeteksi akhir string atau kalimat