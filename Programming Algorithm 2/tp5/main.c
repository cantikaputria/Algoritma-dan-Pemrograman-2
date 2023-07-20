/* Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
Soal Praktikum 5 dalam mata kuliah Algoritma dan Pemrograman 2
untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
yang telah dispesifikasikan. Aamiin.
*/

//LIBRARY berdasarkan file header
#include "header.h"

int main ()
{
    //DEKLARASI VARIABEL
    int n, i, j;                    //deklarasi variabel penampung jumlah film dan iterasi
    scanf("%d", &n);                //meminta masukan n dari user
    bioskop film[n];                //deklarasi struct sejumlah n
    char metode;                    //deklarasi penampung metode yang akan digunakan
    char urutan;                    //deklarasi penampung urutan yang akan digunakan

    //MEMINTA MASUKAN USER
    for ( i = 0; i < n; i++)        //perulangan
    {
        scanf("%s %d %d", &film[i].judul, &film[i].jam, &film[i].menit);    //meminta masukan judul film, dan durasi jam menit dari user
    }
    scanf(" %c", &metode);          //meminta masukan metode yang akan digunakan dari user
    scanf(" %c", &urutan);          //meminta masukan urutan yang akan digunakan dari user

    //PROSES SORTING
    if (metode == 'b')                                  //jika metode 'b' maka gunakan bubble short
    {
        if (urutan == 'a')                              //jika urutannya 'a' maka ascending
        {
           bubble_asc(n, film);                         //pemanggilan prosedur
        }
        else if (urutan == 'd')                         //jika urutannya 'd' maka descending
        {
            bubble_desc(n, film);                       //pemanggilan prosedur
        }
    } 
    else if (metode == 'q')                             //jika metodenya 'q' maka gunakan quick short
    {
       if (urutan == 'a')                               //jika urutannya 'a' maka ascending
        {
           quick_asc(film, 0, n-1);                     //pemanggilan prosedur
        }
        else if (urutan == 'd')                         //jika urutannya 'd' maka descending
        {
           quick_desc(film, 0, n-1);                    //pemanggilan prosedur
        }
    }

    //PROSES MENGHITUNG TOTAL DURASI
    int durasi_total1 = 0, durasi_total2, durasi_total3;                //deklarasi variabel penghitung
    for ( i = 0; i < n; i++)                                            //perulangan men
    {
        durasi_total1 += (film[i].jam * 60) + film[i].menit;            //penghitungan durasi total
    }
    durasi_total2 = durasi_total1 / 60;                                 //penghitungan durasi jam
    durasi_total3 = durasi_total1 % 60;                                 //penghitungan durasi menit
    
    //PROSES MENAMPILKAN SPASI KE LAYAR
    int panjang_awal = 0;                                               //deklarasi penanda panjang awal string judul
    for ( i = 0; i < n; i++)                                            //perulangan
    {
        if (strlen(film[i].judul) > panjang_awal)                       //jika panjang string judul lebih besar dari panjang awal
        {
            panjang_awal = strlen(film[i].judul);                       //maka nilai panjang awal berubah menjadi panjang string tsb    
        }
    }

    //PROSES MENAMPILKAN OUTPUT KE LAYAR
    printf("Data Film Terurut :\n");                                    //menampilkan teks ke layar
    for ( i = 0; i < n; i++)                                            //perulangan
    {
        printf("%s", film[i].judul);                                    //menampilkan judul film
        for (j = strlen(film[i].judul); j < panjang_awal; j++)          //perulangan untuk spasi
        {                                               
          printf(" ");                                                  //menampilkan spasi ke layar
        }
        printf("  ");
        printf("%dj %dm\n", film[i].jam, film[i].menit);                //menampilkan spasi ke layar
    }
    printf("\nTotal Durasi : %d jam %d menit\n", durasi_total2, durasi_total3);     //menampilkan total durasi ke layar

    return 0;                                                           //kembali ke 0
}