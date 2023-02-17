/* 
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
    Soal UAS No 1 dalam mata kuliah Algoritma dan Pemrograman 2
    untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

//LIBRARY
#include "header.h"

//PROSEDUR UNTUK MEMULAI PROSES PEMBACAAN
void start(char pita[])
{
    indeks = 0;                                 //inisialisasi indeks dengan 0 sebagai tanda awal kalimat                
    cc = pita[indeks];                          //mengambil karakter pertama
}

//PROSEDUR UNTUK INCREMENT DAN MEMAJUKAN PEMBACAAN KARAKTER
void inc(char pita[])
{
    indeks++;                                   //increment indeks agar melanjutkan pembacaan karakter
    cc = pita[indeks];                          //mengambil karakter saat ini
    
}

//PROSEDUR UNTUK MEMAJUKAN PEMBACAAN KARAKTER MELEWATI SPASI
void adv(char pita[])
{
    indeks++;                                   //increment indeks agar melanjutkan pembacaan karakter
    cc = pita[indeks];                          //mengambil karakter saat ini
    while((cc == ' ') && (eop() == 0))          //jika sebelum akhir kata ditemukan spasi
    {
        indeks++;                               //incremeent untuk melanjutkan pembacaan pada indeks selanjutnya
    }
    cc = pita[indeks];                          //mengambil karakter saat ini
}

//PROSEDUR UNTUK MENGAMBIL NILAI KARAKTER
char getcc()
{
    return cc;                                   //mengembalkan nlai karakter saat ini
}

//PROSEDUR UNTUK MENDETEKSI AKHIR STRING ATAU KALIMAT
int eop()
{
    if(cc == '$')                                //jika membaca karakter titik maka
    {
        return 1;                                //kembalikan nilai 1 sebagai tanda sudah sampai akhir kalimat
    }
    else                                         //jika tidak
    {
        return 0;                                //maka kembalikan nilai 0 sebagai penanda masih ada karakter lain
    }
}