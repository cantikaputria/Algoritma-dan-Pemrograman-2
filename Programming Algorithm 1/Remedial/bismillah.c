/* 
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
    Tugas Remedial dalam mata kuliah Algoritma dan Pemrograman 1
    untuk keberkahanNya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

//deklarasi library berdasarkan file header
#include "header.h"

int main ()
{
    int n;                                   //deklarasi variabel n sebagai jumlah array of string dan array tipe terstruktur
    scanf("%d", &n);                         //meminta masukan nilai n dari user

    char arrstr[n][50];                      //deklarasi array of string
    arrbungkus pecahan[n];                   //deklarasi array tipe bungkusan untuk pecahan
    arrbungkus fiksasi[n];                   //deklarasi array tipe bungkusan untuk pilihan dari depan atau belakang 
    int panjangstr[n];                       //variabel untuk menampung panjang array of string

    for (i = 0; i < n; i++)                  //perulangan untuk meminta masukan user
    {
        scanf("%s %d %d %c", &arrstr[i], &pecahan[i].pembilang, &pecahan[i].penyebut, &fiksasi[i].db);    //meminta masukan string, nilai pecahan, dan fiksasi dari user
    }

    pisah (n, arrstr);                      //pemanggilan prosedur
    tampil (n, arrstr);                     //pemanggilan prosedur


    return 0;                               //proses selesai dan mengembalikan kode program ke 0
}