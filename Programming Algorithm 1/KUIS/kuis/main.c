/*
Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
soal Kuis 2 No 2 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
yang telah dispesifikasikan. Aamiin.
*/

//deklarasi library
#include "header.h"

//fungsi utama yang akan dijalankan
int main ()
{  
    int n;
   scanf("%d", &n);               //meminta masukan user untuk jumlah string dari n
   char string[n][51];

   for (int i = 0; i < n; i++)    //meminta masukan user untuk isi string
   {
       scanf("%s", &string[i]);    
   }

   for (int i = 0; i < n; i++)   //perulangan untuk menentukan jumlah spasi
    {
        if (strlen(string[i]) >= spasi)
        {
            spasi = strlen(string[i]);  //menampilkan spasi ke layar
        }
    }
    
    //penggunaan fungsi prosedur
    tampilkan (n, string);
    
    //nilai kembali ke o
    return 0;
}