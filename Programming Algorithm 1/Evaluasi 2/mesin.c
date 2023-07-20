/*
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
    Soal Evaluasi dalam mata kuliah Algoritma dan Pemrograman 1
    untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

//deklarasi library berdasarkan file header
#include "header.h"

void hilang (int n, char str[n][201], char a1[n][201], char a2[n][201])            //proses prosedur
{
    for (i = 0; i < n; i++)                                                        //perulangan untuk proses prosedur
    {
        j = 0;                                                                     //deklarasi iterasi
        while ((str[i][j] != '?') && (str[i][j] != '\0'))                          //ketika bertemu ? maka dipisah
        {
            a1[i][j] = str[i][j];                                                  //memasukkan string yang dipisah ke variabel baru
            j++;                                                                   //inisialisasi
        }
        a1[i][j] = '\0';                                                           //penutup string
            
        int k = 0;                                                                 //deklarasi iterasi
        while (k < strlen(str[i]))                                                 
        {
            a2[i][k] = str[i][k + 1];                                              //memasukkan string yang dipisah ke variabel baru
            k++;                                                                   //inisialisasi
        }
        a2[i][k] = '\0';                                                           //penutup string
    }
}