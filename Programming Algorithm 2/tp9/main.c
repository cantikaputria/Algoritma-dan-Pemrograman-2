/* 
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
    Tugas Praktikum 9 dalam mata kuliah Algoritma dan Pemrograman 2
    untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

//LIBRARY
#include "header.h"

int main()
{   
    //DEKLARASI VARIABEL
    char pita[101];                                                         //deklarasi string penampung kalimat                                        

    //INPUTAN USER
    scanf(" %101[^\n]s", &pita);                                             //meminta inputan kalimat dari user

    //PEMANGGILAN PROSEDUR
    start(pita);                                                            //pemanggilan prosedur untuk memulai proses pembacaan karakter
    inc(pita);                                                              //pemanggilan prosedur untuk memajukan pembacaan karakter

    //PROSES
    while(eop() == 0)                                                       //selama bukan akhir dari kalimat, maka
    {
        if((pita[indeks] >= 65) && (pita[indeks] <= 90))                    //jika karakter merupakan hurudf kapital
        {
            if ((pita[indeks + 1] >= 97) && (pita[indeks + 1] <= 122))      //dan jika huruf + 1 setelah huruf kapital merupakan huruf kecil
            {
                printf(" ");                                                //maka print spasi
            }
            else if((pita[indeks - 1] >= 97) && (pita[indeks - 1] <= 122))  //dan jika huruf - 1 sebelum huruf kapital merupakan huruf kecil
            {
                printf(" ");                                                //maka print spasi
            }
        }
        printf("%c",getcc());                                               //menampilkan karakter ke layar
        inc(pita);                                                          //memajukan ke karakter selanjutnya 
    }

    printf("\n");                                                            //newline
    return 0;
}