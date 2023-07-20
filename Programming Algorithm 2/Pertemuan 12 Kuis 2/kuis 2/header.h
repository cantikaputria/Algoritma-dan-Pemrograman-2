/* 
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
    Soal Kuis 2 dalam mata kuliah Algoritma dan Pemrograman 2
    untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

//DEKLARASI LIBRARY
#include <stdio.h>
#include <string.h>

//DEKLARASI STRUCT
typedef struct
{
    char nama[50];                                          //variabel penampung string nama makanan
    int harga;                                              //variabel penampung harga barang
    char tempat[50];                                        //variabel penampung sting nama tempat
    int kalori;                                             //variabel penamung gram kalori
} makanan;

//DEKLARASI VARIABEL
int search;                                                 //variabel penampung besaran yang akan dicari 

//DEKLARASI PROSEDUR dan FUNGSI
void input(makanan data[], int n);                          //prosedur untuk proses inputan data makanan
void sorting1(makanan data[], int n);                       //prosedur untuk proses sorting untuk harga secara ascending
void sorting2(makanan data[], int n);                       //prosedur untuk proses sorting untuk harga secara descending
void temp(makanan *first, makanan *last);                   //prosedur untuk proses penukaran data saat sorting
int binSearch1(makanan data[], int left, int right);        //fungsi untuk proses seacrhing harga secara ascending
int binSearch2(makanan data[], int left, int right);        //fungsi untuk proses searching harga secara descending
void output(makanan data);