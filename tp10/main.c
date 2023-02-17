/* 
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
    Tugas Praktikum 10 dalam mata kuliah Algoritma dan Pemrograman 2
    untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

//DEKLARASI LIBRARY
#include "header.h"

int main ()
{   
    //DEKLARASI VARIABEL
    char pita[200];                                                        //variabel penampung string kalimat
    int min, max;                                                          //variabel penampung pencari panjang maksimal dan minimal
    int n1, n2;                                                            //variabel penampung panjang maksimal dan minimal kelompok kata
    int idxpendek = 0;                                                     //variabel penyimpan indeks kata pendek
    int idxpanjang = 0;                                                    //variabel penyimpan indeks kata panjang
    int idxmenengah = 0;                                                   //variabel penyimpan indeks kata menengah

    //DEKLARASI STRUCT
    kata pendek[50];                                                       //struct penampung string kata pendek
    kata menengah[50];                                                     //struct penampung string kata menengah
    kata panjang[50];                                                      //struct penampung string kata panjang

    //MEMINTA MASUKAN USER
    scanf("%d %d", &n1, &n2);                                              //meminta input panjang maksimal dan minimal dari user
    scanf(" %199[^\n]s", &pita);                                           //meminta input string kalimat dari user

    //MENCARI BATAS PANJANG MAKSIMAL DAN MINIMAL
    if (n1 > n2)                                                           //jika n1 lebih besar dari n2                                                       
    {
        max = n1;                                                          //nilai maksimal adalah n1
        min = n2;                                                          //nilai minimal adalah n2
    }
    else                                                                   //jika tidak
    {
        max = n2;                                                          //nilai maksimal adalah n2
        min = n1;                                                          //nilai minimal n2
    }

    //MEMULAI MENYALAKAN MESIN DAN PROSES
    start(pita);                                                           //pemanggilan prosedur menyalakan mesin
    if (strlen(getckata()) <= min)                                         //jika panjang kata saat ini kurang dari atau sama dengan batas nilai minimal
    {
        strcpy(pendek[idxpendek].kata, getckata());                        //memasukkan nilai kata saat ini ke struct "kata pendek"
        idxpendek++;                                                       //increment index kata pendek
    }
    else if(strlen(getckata()) > max)                                      //jika panjang kata saat ini lebih dari batas nilai minimal
    {
        strcpy(panjang[idxpanjang].kata, getckata());                      //memasukkan nilai kata saat ini ke struct "kata panjang"
        idxpanjang++;                                                      //increment index kata panjang
    }
    else                                                                   //jika tidak keduanya
    {
        strcpy(menengah[idxmenengah].kata, getckata());                    //memasukkan nilai kata saat ini ke struct "kata menengah"
        idxmenengah++;                                                     //increment index kata menengah
    }
    
    //SELAMA BELUM KETEMU EOP (.)
    while(eop(pita) == 0)
    {
        inc(pita);                                                         //pemanggilan fungsi untuk increment kata
        if (strlen(getckata()) <= min)                                     //jika panjang kata saat ini kurang dari atau sama dengan batas nilai minimal
        {
            strcpy(pendek[idxpendek].kata, getckata());                    //memasukkan nilai kata saat ini ke struct "kata pendek"
            idxpendek++;                                                   //increment index kata pendek
        }
        else if(strlen(getckata()) > max)                                  //jika panjang kata saat ini lebih dari batas nilai minimal
        {
            strcpy(panjang[idxpanjang].kata, getckata());                  //memasukkan nilai kata saat ini ke struct "kata panjang"
            idxpanjang++;                                                  //increment index kata panjang
        }   
        else                                                               //jika tidak keduanya
        {
            strcpy(menengah[idxmenengah].kata, getckata());                //memasukkan nilai kata saat ini ke struct "kata menengah"
            idxmenengah++;                                                 //increment index kata menengah
        }
    }

    //SORTING BERDASARKAN ALPHABET
    bubble(idxpendek, pendek);                                             //pemanggilan prosedur sorting kata pendek
    bubble(idxmenengah, menengah);                                         //pemanggilan prosedur sorting kata menengah
    bubble(idxpanjang, panjang);                                           //pemanggilan prosedur sorting kata panjang

    //OUTPUT KATA PENDEK
    printf("KATA PENDEK\n");                                               //menamplkan teks ke layar
    if (idxpendek == 0)                                                    //jika indeksnya nol
    {
        printf("TIDAK ADA.\n");                                            //maka tidak ada kata pendek dan tampilkan teks ke layar
    }
    else                                                                   //jika tidak maka
    {
        for (int i = 0; i < idxpendek; i++)                                //looping
        {
            printf("- %s\n", pendek[i].kata);                              //menampilkan kata pendek ke layar
        }
    }
    
    //OUTPUT KATA MENENGAH
    printf("\nKATA MENENGAH\n");                                           //menampilkan teks ke layar
    if (idxmenengah == 0)                                                  //jika indeksnya nol
    {
        printf("TIDAK ADA.\n");                                            //maka tidak ada kata menengah dan tampilkan teks ke layar
    }
    else                                                                   //jika tidak maka
    {
        for (int i = 0; i < idxmenengah; i++)                              //looping
        {
            printf("- %s\n", menengah[i].kata);                            //menampilkan kata menengah ke layar
        }
    }
    
    //OUTPUT KATA PANJANG
    printf("\nKATA PANJANG\n");                                            //menampilkan teks ke layar
    if (idxpanjang == 0)                                                   //jika indeksnya nol
    {   
        printf("TIDAK ADA.\n");                                            //maka tidak ada kata panjang dan tampilkan teks ke layar
    }
    else                                                                   //jika tidak maka
    {
        for (int i = 0; i < idxpanjang; i++)                               //looping
        {
            printf("- %s\n", panjang[i].kata);                             //menampilkan kata panjang ke layar
        }
    }
    
    return 0;                                                              //kembali ke 0
}