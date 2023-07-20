/* 
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
    Evaluasi 2 dalam mata kuliah Algoritma dan Pemrograman 2
    untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

//LIBRARY
#include <stdio.h>
#include <string.h>

//DEKLARASI VARIABEL
int indeks;                                                         //variabel penampung indeks
int panjangkata;                                                    //variabel penampung panjang kata
char ckata[200];                                                    //variabel penampung kata saat ini
int panjang[4][50];                                                 //variabel penampung panjang string
int panjangmax[4];                                                  //variabel penampung panjang maksimal string tiap kolom

//DEKLARASI STRUCT
typedef struct
{
    char nama[51];                                                  //variabel penampung nama barang
    char harga[51];                                                 //variabel penampung harga barang
    char status[51];                                                //variabel penampung status barang
} toko;

//DEKLARASI PROSEDUR & FUNGSI
void start(char str[]);                                             //prosedur untuk menyalakan mesin dan memulai pembacaan
void inc(char str[]);                                               //prosedur untuk memajukan proses baca kata       
void reset();                                                       //prosedur membersihkan ckata   
int eop(char str[]);                                                //fungsi end of procces dengan ; sebagai akhir kalimat / kata
char *getckata();                                                   //prosedur mengambil nilai kata saat ini (ckata)
void insertData(char pita[], toko (*barang));                       //prosedur insert data
int maximal(int idx, int n);                                        //prosedur mencari panjang max string
void batas();                                                       //menampilkan batas tabel
void print(toko barang[], int n);                                   //menampilkan output