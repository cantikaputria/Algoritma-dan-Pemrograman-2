/* Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
Soal Praktikum 3 dalam mata kuliah Algoritma dan Pemrograman 2
untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
yang telah dispesifikasikan. Aamiin.
*/

//LIBRARY
#include "header.h"

//PROSES PERHITUNGAN FUNGSI
int jumlah_virus(int x)              //fungsi menghitung jumlah virus ()
{
    if(x == 0)
    {
        return x;                   //jika nilai x = 0, maka nilainya dikembalikan seperti semula
    }
    else if(x == 1)
    {
        return x;                   //jika nilai x = 1, maka nilainya dikembalikan seperti semula
    }
    else if(x == 2)
    {
        return 3;                   //jika nilai x = 2, maka nilainya dikembalikan sebagai 3
    }
    else                            //jika selain 3 maka dihitung menggunakan rumus
    {
        return ((2 * x) * jumlah_virus(x-1)) + ((jumlah_virus(x - 2) * jumlah_virus(x - 2)) - 1);
    }
}