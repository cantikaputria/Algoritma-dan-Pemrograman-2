/* 
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
    Tugas Masa Depan dalam mata kuliah Algoritma dan Pemrograman 2
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

//DEKLARASI STRUCT TABEL BUKU
typedef struct
{
    char kd_buku[100];                                              //variabel penampung string kode buku
    char judul[100];                                                //variabel penampung string judul buku
    char penulis[100];                                              //variabel penampung string buku penulis buku
    char penerbit[100];                                             //variabel penampung string penerbit buku
} book;                                                             //nama struct

//DEKLARASI STRUCT TABEL AUTHOR
typedef struct
{
    char kode[100];                                                 //variabel penampung string kode penulis           
    char nama[100];                                                 //variabel penampung nama penulis   
} author;                                                           //nama struct

//FUNGSI
int readBuku(FILE *buku, book x[]);                                 //fungsi untuk membaca file buku
int readKode(FILE *penulis, author x[]);                            //fungsi untuk membaca file penulis
int eop(char str[]);                                                //fungsi end of procces dengan . sebagai akhir kalimat / kata
char *getckata();                                                   //prosedur mengambil nilai kata saat ini (ckata)
int cekBuku(char str[], book (*temp), int key);                     //fungsi untuk mengecek kelengkapan inputan file buku
int cekPenulis(char str[], author (*temp), int key);                //fungsi untuk mengecek kelengkapan inputan file penulis
int maximal(int idx, int n);                                        //fungsi untuk mencari panjang maksimal string

//PROSEDUR
void start(char str[]);                                             //prosedur untuk menyalakan mesin dan memulai proses pembacaan
void inc(char str[]);                                               //prosedur untuk memajukan proses baca kata       
void batas(int n1, int n2);                                         //prosedur untuk menampilkan batas pada tabel
void printW(book x[], int n);                                       //prosedur untuk menampilkan tabel buku
void printA(author x[], int n);                                     //prosedur untuk menampilkan tabel penulis
void namaKolom(int *a, int *b, int *c, int *d);                     //prosedur untuk menapilkan nama kolom buku
void namaKolom2(int *a, int *b);                                    //prosedur untuk menapilkan nama kolom penulis
void writeBuku(FILE *buku, int n, book datBuku[]);                  //prosedur untuk menulis file buku
void writePen(FILE *penulis, int n, author datPen[]);               //prosedur untuk menulis file penulis
void insertBuku(book datBuku[], book tempB, book tutupB, FILE *buku, int n);                                        //prosedur untuk insert data pada file buku
void insertPen(author datPen[], author tempA, author tutupA, FILE *penulis, int n);                                 //prosedur untuk insert data pada file penulis                     
void insertFixBuku(char pita[], book datBuku[], book tempB, book tutupB, FILE *buku, int n, int m);                 //prosedur untuk insert data keseluhan pada file buku
void insertFixPen(char pita[], author datPen[], author tempA, author tutupA, FILE *penulis, int n, int m);          //prosedur untuk insert data keseluhan pada file buku