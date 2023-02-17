/* 
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
    Soal UAS No 2 dalam mata kuliah Algoritma dan Pemrograman 2
    untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

int main ()
{
    //DEKLARASI VARIABEL
    char pita[200];                                                 //variabel penampung string pita
    char kata[100];                                                 //variabel penampung kata yang ingin dicari

    //MEMINTA MASUKAN USER
    scanf("%s", &kata);                                             //meminta inputan kata yang dicari dari user
    scanf(" %199[^\n]s", &pita);                                    //input string pita dari user

    //PROSES
    start(pita);                                                    //menyalakan mesin, memulai proses pembacaan

    //ibu mohon maaf belum selesai
    // while(eop(pita) == 0)
    // {
        

    printf("%s", getckata());
    
    return 0;
}