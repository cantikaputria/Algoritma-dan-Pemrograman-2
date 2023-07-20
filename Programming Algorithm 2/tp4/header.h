/* Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
Soal Praktikum 4 dalam mata kuliah Algoritma dan Pemrograman 2
untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
yang telah dispesifikasikan. Aamiin.
*/

//LIBRARY
#include <stdio.h>
#include <string.h>

//DEKLARASI STRUCT
typedef struct              //untuk menampung kompen film
{
    char judul[50];         //variabel untuk menampung string judul
    char genre[50];         //variabel menampung string genre
    char rating[2];         //variabel menampung rating (harusnya float tapi error terus, sementara pake string)
} lalala;

//DEKLARASI ARRAY
char key[100];              //variabel untuk menampung nilai kunci pada insertion
char temp[100];             //variabel untuk menampung nilai sementara saat selection
char patokan[100];          //variabel untuk menentukan apakah judul atau rating
char metode[100];           //variabel untuk menentukan metode apakah selection atau insertion
char urutan[100];           //variabel untuk menentukan urutan apakah ascending atau descending

//DEKLARASI VARIABEL
int i, j, minIndex;         //variabel i, j sebagai iterator, dan minIndex penampung nilai indeks sementara

//DEKLARASI PROSEDUR (IF JUDUL)
void insert_asc(int n, lalala film[]);          //prosedur untuk proses insertion ascending
void insert_desc(int n, lalala film[]);         //prosedur untuk proses insertion descending
void select_asc(int n, lalala film[]);          //prosedur untuk proses selection ascending
void select_desc(int n, lalala film[]);         //prosedur untuk proses selection descending
void print(int n, lalala film[]);               //prosedur untuk menampilkan hasil ke layar

/* //DEKLARASI PROSEDUR (IF RATING)
void insert2_asc(int n, lalala film[]);         //prosedur untuk proses insertion ascending
void insert2_desc(int n, lalala film[]);        //prosedur untuk proses insertion descending
void select2_asc(int n, lalala film[]);         //prosedur untuk proses selection ascending
void select2_desc(int n, lalala film[]);        //prosedur untuk proses selection descending

mohon maaf ini dijadikan komentar karena masih error
*/
