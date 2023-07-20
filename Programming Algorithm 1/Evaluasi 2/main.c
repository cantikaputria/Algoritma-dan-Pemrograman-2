/*
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
    Soal Evaluasi dalam mata kuliah Algoritma dan Pemrograman 1
    untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

//deklarasi library berdasarkan file header
#include "header.h"

int main()                           //deklarasi codingan utama
{
    int n, i, j, k;                  //deklarasi variabel dan iterasi
    scanf("%d", &n);                 //meminta masukan user untuk nilai n

    char str[n][201];                //deklarasi array dua dimensi
    for(i = 0; i < n; i++)           //perulangan untuk meminta nilai n dari masukan user 
    {
        scanf("%s", &str[i]);        //meminta masukan array dua dimensi dari user
    }              
 
    char a1[n][201];                 //deklarasi array untuk menampung hasil pemisahan
    char a2[n][201];                 //deklarasi array untuk menampung hasil pemisahan

    hilang (n, str, a1, a2);         //pemanggilan prosedur
    printf("%s\n", a1);              
    printf("%s", a2);

    return 0;                        //nilai kembali ke 0
}