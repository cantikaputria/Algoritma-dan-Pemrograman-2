/* Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
Tugas Praktikum 7 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti 
yang telah dispesifikasikan. Aamiin.
*/

//library
#include <stdio.h>
#include <string.h>

int main ()
{
   char string[50];                    //deklarasi string utama
   
   //membagi dua string
   char depan[50];                    //deklarasi string depan
   char kunci[50];                    //deklarasi string kunci
   int panjang;                       //deklarasi panjang string untuk kunci
   
   //meminta masukan user
   scanf("%s", string);
   
   int i = 0;                        //inisialisasi
   int c = 0;                        //deklarasi penanda
   while ((i < strlen(string)) && (string[i] != '!'))          //kondisi
   {
      depan[i] = string[i];          //memasukan nilai string sebelum ! ke string depan
      i++;                           //iterasi
      c = i;
   }
   depan[c] = '\0';                  //penutup string
   
   //menghitung panjang string kata kunci
   panjang = (strlen(string) - strlen(depan) - 1);
   
   //mencari kata kunci
   i = strlen(depan) + 1;
   int j =  0;                     //inisialisasi
   while ((j < panjang) && (i < strlen(string)))    //kondisi
   {
      kunci[j] = string[i];        //nilai kunci sama dengan sisa niai string setelah !
      i++;                         //iterasi
      j++;                         //iterasi
   }
   
   //menghilangkan kata kunci dalam string
   int m = strlen(depan);                   //menghitung panjang string depan
   int n = strlen(kunci);                   //menghitung panjang string belakang
   j = 0;         
   int k = 0;
   for (i = 0; i < m; i++)                   //kondisi
   {
        if (depan[i] == kunci[j])            //jika nilai depan == nilai kunci
        {
            j++;                             //iterasi
        }  
        else if (depan[i] == kunci[0])  
        { 
            j = 1;
        }
        else
        {
            j = 0;
        }
        
        if (kunci[j] == '\0')             //jika nilai kunci == dengan \0
        {
            i = i + 1 - j;               
            for (k = i; k < m; k++)       //perulangan untuk menghilangkan char yang sama
            {
                depan[k] = depan[k + n];
            }
            j = 0;
            i--;
        }
    }
   //menampilkan hasil tanpa kunci
   printf("Tanpa kunci: %s", depan);

   /* deskripsi 1 selang seling
   for (i = 0; i < ; i++)
   {
       if (depan[i] % 2 == 0)
       {
           c = 0;
       }
       else
       {
          c = 1;
       }
   }

   //deskripsi 2
   utama = strlen(string);
   bagi  = (utama + 1) / 2;
   i = 0;
   while ()
   {

   } */

   //kembali ke nol
    return 0;
}