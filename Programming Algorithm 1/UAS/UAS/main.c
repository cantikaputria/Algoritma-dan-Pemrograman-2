/*
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
    Soal UAS Nomor 1 dalam mata kuliah Algoritma dan Pemrograman 1
    untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

//deklarasi library berdasarkan file header
#include "header.h"

int main ()                          //fungsi utama yang akan dijalankan
{
    int n;                           //deklarasi variabel n untuk jumlah string yang akan diinput
    char str[50];                    //deklarasi suku kata yang akan dicari jumlahnya

    scanf("%d", &n);                 //meminta masukan nilai n dari user
    char arrstr[n][101];             //deklarasi string yang akan dicek
    
    for (i = 0; i < n; i++)          //perulangan untuk meminta masukan user
    {
        scanf("%s", &arrstr[i]);     //meminta masukan string dari user
    }

    scanf("%s", &str);               //meminta masukan suku kata yang akan dicari dari user

    hitung (n, arrstr, str);         //pengambilan perhitungan prosedur

    printf("%d", jumlah);            //menampilkan jumlah suku kata ke layar

    return 0;                        //mengembalikan proses ke 0
}