/*
Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
Soal Kuis 2 No 2 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
yang telah dispesifikasikan. Aamiin.
*/

//deklarasi library
#include "header.h"

void tampilkan (int n, char string[n][51])            //deklarasi prosedur untuk proses output
{   
    int panjang[n]; 
    for (i = 0; i < n; i++)
    {
        panjang[i] = 0;
        panjang[i] = strlen(string[i]);
    }

   for (i = 0; i < n; i++)
    {
        for (j = 0; j < spasi - strlen(string[i]); j++)
        {
            printf(" "); 
        }
        
        if (panjang[i] % 2 == 1)
        {
            for (k = strlen(string[i]) - 1; k >= 0; k--)       //perulangan untuk menampilkan isi string dengan terbalik
           {
              printf("%c", string[i][k]);          //menampilkan isi string
           }
           printf("\n");
        }
       else
       {
         panjang[i] = panjang[i] / 2;
         for (k = panjang[i]; k < strlen(string[i]); k++)
         {
             printf("%c", string[i][k]);
         }
         

         for (k = 0; k < panjang[i]; k++)
         {
             printf("%c", string[i][k]);
         }
         printf("\n");
       }
    }
}