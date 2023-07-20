/* 
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
    Soal UAS No 1 dalam mata kuliah Algoritma dan Pemrograman 2
    untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

//LIBRARY
#include "header.h"

int main ()
{
    //DEKLARASI VARIABEL
    char pita[501];                                                            //variabel penampung string inputan user                                                      
    int n, jumlah = 0;                                                         //variabel penampung jumlah karakter yang akan dipisah       
    char cari, temp[501];                                                      //variabel penampung karakter yang dicari dan penampung sementara
    int i = 0;                                                                 //inisialisasi
    int ketemu = 0;                                                            //variabel penanda jika ketemu hurufnya

    //INPUTAN USER
    scanf("%d %c", &n, &cari);                                                 //menginput jumlah yang dipisah dan karakter yang dicari
    scanf(" %500[^\n]s", &pita);                                               //meminta input string pita dari user                                        

    //PROSES
    start(pita);                                                               //menyalakan mesim 
    while (i < n)                                                              //ketika nilai i kurang dari n
    {
        temp[i] = getcc();                                                     //masukkan karakter ke variabel temp
        inc(pita);                                                             //increment
        i++;                                                                   //nilai i incremet
    }

    i = 0;                                                                     //reset nilai i
    while ((i < n) && (ketemu == 0))                                           //ketika nilai i kurang dari sama dengan n dan ketemu = 0
    {   
        if(temp[i] == cari)                                                    //jika isi dari temp sama dengan variabel yang dicari
        {
            ketemu = 1;                                                        //nilai ketemu ditandai true
            jumlah++;                                                       
        }
        i++;
    }

    // while(eop() == 0)
    // {   
    //     i = 0;
    //     while ((i < n) && (eop() == 0))
    //     {
    //         temp[i] = getcc();
    //         inc(pita);
    //         i++;
    //     }

    //     i = 0;
    //     while ((i < n) && (ketemu == 0))
    //     {   
    //         if(temp[i] == cari)
    //         {
    //             ketemu = 1;
    //             jumlah++;
    //         }
    //         i++;
    //     }   
    //     inc(pita);
    // }
    
    //OUTPUT JUMLAH
    printf("%d", jumlah);

    return 0;
}