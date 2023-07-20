/* 
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
    Tugas Praktikum 8 dalam mata kuliah Algoritma dan Pemrograman 2
    untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

//DEKLARASI LIBRARY
#include <stdio.h>
#include <string.h>

//DEKLARASI STRUCT
typedef struct
{
    char judul[100];                                                //string penampung judul film
    char sutradara[100];                                            //string penampung kode sutradara
    char genre[100];                                                //string penampung kode genre
    char bioskop[100];                                              //string penampung kode bioskop
} list;                                                             //nama struct

//DEKLARASI STRUCT
typedef struct
{
    char kode[10];                                                  //string penampung kode
    char nama[50];                                                  //string penampung namanya
} kode;                                                             //nama struct

//DEKLARASI VARIABEL
int panjang[4][50];                                                 //variabel penyimpan panjang string setiap kolomnya
int panjangmax[4];                                                  //variabel penyimpan data string terpanjang 

//PROSEDUR DAN FUNGSI
int readList(FILE *film, list x[]);                                 //fungsi proses membaca data list film
int readKode(FILE *file, kode x[], char namaFile[]);                //fungsi proses membaca data list kode (bisa genre, sutradara, dll)
int cocok(char search[], kode data[], int n);                       //fungsi proses mencari kecocokan kode dan data
int maximal(int idx, int n);                                        //fungsi mencari string terpanjang
void batas(int n);                                                  //prosedur mencetak batasan tiap kolom
void namaKolom(int a, int b, int c, int d);                         //prosedur mencetak nama judul kolom
void print(list x[], int n);                                        //prosedur proses menampilkan keluaran
void binSearch(char id_cari[], kode file[], int n);                 //prosedur pencarian binary search
void tambahListFilm(list data[]);                                   //prosedur menambah list film
void tambahListKode(kode data[], char nama_file[]);                 //prosedur menambah kode
void writeFileKode(FILE *file, kode data[], int n, char nama_file[]);  //prosedur menuliskan data ke file kode