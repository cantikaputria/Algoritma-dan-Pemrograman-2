/* 
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
    Soal UTS dalam mata kuliah Algoritma dan Pemrograman 2
    untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

//LIBRARY
#include <stdio.h>
#include <string.h>

//DEKLARASI TIPE BUNGKUSAN
typedef struct
{
    char merk[50];                                              //variabel untuk menampung nama merk minyak goreng
    int kalori;                                                 //variabel untuk menampung jumlah kalori
    int lemak;                                                  //variabel untuk menampung jumlah lemak
    int harga;                                                  //variabel untuk menampung harga minyak goreng
    double hitung;                                              //variabel untuk menghitung
} minyak;                                                       //nama struct

//DEKLARASI VARIABEL
int i, j, k;                                                    //variabel iterator

//DEKLARASI RPOSEDUR
void input(minyak[], int);                                      //prosedur untuk menerima input dari user
void insertion(minyak[], int);                                  //prosedur untuk proses insertion short
void selection(minyak[], int);                                  //prosedur untuk proses selection short
void tukar(minyak*, minyak*);                                   //prosedur untuk proses penukaran
void bubble(minyak[], int);                                     //prosedur untuk proses bubble short
void quick(minyak[], int, int);                                 //prosedur untuk proses quick short
void print(minyak[], int);                                      //prosedur untuk menampilkan hasil sorting ke layar
void mergetab(minyak[], int, minyak[], int, minyak[]);          //prosedur untuk menggabungkan 3 tipe terstruktur