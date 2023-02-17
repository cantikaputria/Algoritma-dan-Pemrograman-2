/* 
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
    Tugas Praktikum 6 dalam mata kuliah Algoritma dan Pemrograman 2
    untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

//LIBRARY
#include "header.h"

//PROSEDUR INPUT
void input(beli toko[], int banyak)                                                                    //prosedur proses input
{
for (i = 0; i < banyak; i++)                                                                           //perulangan
    {
        scanf("%s %d %f", &toko[i].barang, &toko[i].harga, &toko[i].rating);                           //meminta masukan dari user
    }
}

//PROSEDUR MENYATUKAN BARANG BERDASARKAN HARGA
void mergetabR(beli toko1[], int banyak1, beli toko2[], int banyak2, beli hasil[])
{
    int indeks1 = 0, indeks2 = 0, indeks_hasil = 0;                                                     //deklarasi nilai indeks sebagai penanda perbagian
    while ((indeks1 < banyak1) && (indeks2 < banyak2))                                                  //ketika nilai indeks pertama dan kedua lebih kecil dari n
    {
        if (toko1[indeks1].rating >= toko2[indeks2].rating)                                             //jika indeks pertama lebih kecil atau sama dengan indeks kedua
        {
            hasil[indeks_hasil] = toko1[indeks1];                                                       //indeks hasil = indeks pertama
            indeks_hasil++;                                                                             //increment indeks_hasil
            indeks1++;                                                                                  //increment indeks pertama
        }
        else                                                                                            //jika tidak atau sebaliknya
        {
            hasil[indeks_hasil] = toko2[indeks2];                                                       //maka nilai indeks hasil adalah indeks kedua
            indeks_hasil++;                                                                             //increment indeks_hasil
            indeks2++;                                                                                  //increment indeks kedua
        }
    }

    if (indeks1 < banyak1)                                                                              //jika nilai indeks pertama lebih kecil dari n
    {
        while (indeks1 < banyak1)                                                                       //ketika indeks pertama lebih kecil dari n
        {
            hasil[indeks_hasil] = toko1[indeks1];                                                       //indeks hasil = indeks pertama
            indeks_hasil++;                                                                             //increment indeks_hasil
            indeks1++;                                                                                  //increment indeks pertama
        }
    }
    else                                                                                                //jika tidak
    {
        while (indeks2 < banyak2)                                                                       //ketika indeks kedua lebih kecil dari n
        {
            hasil[indeks_hasil] = toko2[indeks2];                                                       //indeks hasil = indeks pkedua
            indeks_hasil++;                                                                             //increment indeks_hasil
            indeks2++;                                                                                  //increment indeks_hasil
        }
    }
}

//PROSEDUR MENYATUKAN BARANG BERDASARKAN RATING
void mergetabH(beli toko1[], int banyak1, beli toko2[], int banyak2, beli hasil[])
{
    int indeks1 = 0, indeks2 = 0, indeks_hasil = 0;                                                     //deklarasi nilai indeks sebagai penanda perbagian
    while ((indeks1 < banyak1) && (indeks2 < banyak2))                                                  //ketika nilai indeks pertama dan kedua lebih kecil dari n
    {
        if (toko1[indeks1].harga <= toko2[indeks2].harga)                                               //jika indeks pertama lebih kecil atau sama dengan indeks kedua
        {
            hasil[indeks_hasil] = toko1[indeks1];                                                       //indeks hasil = indeks pertama
            indeks_hasil++;                                                                             //increment indeks_hasil
            indeks1++;                                                                                  //increment indeks pertama
        }
        else                                                                                            //jika tidak atau sebaliknya
        {
            hasil[indeks_hasil] = toko2[indeks2];                                                       //maka nilai indeks hasil adalah indeks kedua
            indeks_hasil++;                                                                             //increment indeks_hasil
            indeks2++;                                                                                  //increment indeks kedua
        }
    }

    if (indeks1 < banyak1)                                                                              //jika nilai indeks pertama lebih kecil dari n
    {
        while (indeks1 < banyak1)                                                                       //ketika indeks pertama lebih kecil dari n
        {
            hasil[indeks_hasil] = toko1[indeks1];                                                       //indeks hasil = indeks pertama
            indeks_hasil++;                                                                             //increment indeks_hasil
            indeks1++;                                                                                  //increment indeks pertama
        }
    }
    else                                                                                                //jika tidak
    {
        while (indeks2 < banyak2)                                                                       //ketika indeks kedua lebih kecil dari n
        {
            hasil[indeks_hasil] = toko2[indeks2];                                                       //indeks hasil = indeks pkedua
            indeks_hasil++;                                                                             //increment indeks_hasil
            indeks2++;                                                                                  //increment indeks_hasil
        }
    }
}