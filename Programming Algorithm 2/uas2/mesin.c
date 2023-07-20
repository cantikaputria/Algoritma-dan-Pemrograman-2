/* 
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
    Soal UAS No 2 dalam mata kuliah Algoritma dan Pemrograman 2
    untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

//DEKLARASI LIBRARY
#include "header.h"

//PROSEDUR MENYALAKAN MESIN DAN MEMULAI PROSES PEMBACAAN
void start(char str[])
{
    indeks = 0;                                                                    //inisialisasi indeks = 0
    panjangkata = 0;                                                               //inisialisasi panjnag kata = 0

    //jika karakternya spasi atau titik koma maka indeksnya terus maju
    while (str[indeks] == ' ')
    {
        indeks++;                                                                  //increment nilai indeks
    }

    //jika karakternya selain titik koma dan EOP
    while ((str[indeks] != ' ') && (eop(str) == 0))
    {
        ckata[panjangkata] = str[indeks];                                          //kata dimasukkan ke variabel global
        indeks++;                                                                  //increment nilai indeks 
        panjangkata++;                                                             //increment panjang kata
    }

    //inisialisasi
    ckata[panjangkata] = '\0';                                                     //inisialisasi indeks terakhir kata menjadi null
}

//PROSEDUR UNTUK MEMBERSIHKAN CKATA
void reset()
{
    panjangkata = 0;                                                               //inisialisasi panjang kata
    ckata[panjangkata] = '\0';                                                     //inisialisasi indeks panjang terakhir menjadi null
}

//FUNGSI END OF PROCESS SEBAGAI AKHIR KALIMAT
int eop(char str[])
{
    if (str[indeks] == '$')                                                        //jika bertemu karakter $ maka akhir kalimat
    {
        return 1;                                                                  //kembalikan nilai 1
    }
    else                                                                           //jika tidak maka
    {
        return 0;                                                                  //kembalikan nilai 0
    }
}

//FUNGSI MEMAJUKAN MESIN KATA
void inc(char str[])
{
    panjangkata = 0;                                                               //inisialisasi panjang kata

    //jika karakternya spasi atau titik koma maka indeksnya terus maju
    while (str[indeks] == ' ')
    {
        indeks++;                                                                  //increment nilai indeks
    }   

    //jika karakternya selain titik koma dan EOP
    while ((str[indeks] != ' ') && (eop(str) == 0))
    {
        ckata[panjangkata] = str[indeks];                                          //kata dimasukkan ke variabel global
        indeks++;                                                                  //increment nilai indeks
        panjangkata++;                                                             //increment panjang kata
    }

    ckata[panjangkata] = '\0';                                                     //inisialisasi indeks terakhir kata menjadi null
}

//FUNGSI UNTUK MENDAPATKAN KATA SAAT INI
char *getckata()
{
    return ckata;                                                                  //mengembalikan kata saat ini
}
