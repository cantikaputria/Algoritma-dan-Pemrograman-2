/* 
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
    Soal Evaluasi 1 dalam mata kuliah Algoritma dan Pemrograman 2
    untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

//LIBRARY
#include "header.h"

//PROSEDUR INPUT
void input(mahasiswa kelompok[], int banyak)
{
    for (i = 0; i < banyak; i++)                                                                           //perulangan berdasarkan n/m/p
    {
        scanf("%s %s %d", &kelompok[i].nim, &kelompok[i].nama, &kelompok[i].nilai);                        //meminta nim, nama, dan nilai dari inputan user
    }
}

//PROSEDUR SORTING
void insertion(mahasiswa kelompok[], int banyak)
{                               
    for (i = 1; i < banyak; i++)                                                                        //perulangan berdasarkan n/m/p
    {
        char tempstr[51];                                                                               //deklarasi array penampung string sementara
        int temp;                                                                                       //deklarasi temp int penampung sementara

        strcpy(key, kelompok[i].nim);                                                                   //menyalin nim mahasiswa pada variabel key
        j = i - 1;                                                                                      //iterator j = nilai i dikurangi 1

        while ((j >= 0) && (strcmp(key, kelompok[i].nim) < 0))                                          //ketika key lebih kecil dari j dan nila j leih dari atau sama dengan nol                           
        {
            strcpy(kelompok[j + 1].nim, kelompok[j].nim);                                               //menyalin nila nim indeks j ke j+ 1     
            j--;                                                                                        //decrement
        }
        strcpy(kelompok[j + 1].nim, key);                                                               //menyalin isi key ke variabel semula

        strcpy(tempstr, kelompok[i].nama);                                                              //copykan string i nama ke variabel tempstr
        strcpy(kelompok[i].nama, kelompok[i + 1].nama);                                                 //memasukkan indeks dengan indeks i + 1
        strcpy(kelompok[i + 1].nama, tempstr);                                                          //menyalin isi variabel temp ke indeks i + 1

        temp = kelompok[i].nilai;                                                                       //kurang lebih sama seperti yang diatas, hanya dia int jadi tidak pakai strcpy
        kelompok[i].nilai = kelompok[i + 1].nilai;
        kelompok[i + 1].nilai = temp;
    }            
}

//PROSEDUR PENGGABUNGAN
void mergetab(mahasiswa kelompok1[], int banyak1, mahasiswa kelompok2[], int banyak2, mahasiswa hasil[])
{
    int indeks1 = 0, indeks2 = 0, indeks_hasil = 0;                                                     //deklarasi nilai indeks sebagai penanda perbagian
    while ((indeks1 < banyak1) && (indeks2 < banyak2))                                                  //ketika nilai indeks pertama dan kedua lebih kecil dari n
    {
        if (strcmp (kelompok1[indeks1].nim, kelompok2[indeks2].nim) <= 0)                               //jika indeks pertama lebih kecil atau sama dengan indeks kedua
        {
            hasil[indeks_hasil] = kelompok1[indeks1];                                                   //indeks hasil = indeks pertama
            indeks_hasil++;                                                                             //increment indeks_hasil
            indeks1++;                                                                                  //increment indeks pertama
        }
        else                                                                                            //jika tidak atau sebaliknya
        {
            hasil[indeks_hasil] = kelompok2[indeks2];                                                   //maka nilai indeks hasil adalah indeks kedua
            indeks_hasil++;                                                                             //increment indeks_hasil
            indeks2++;                                                                                  //increment indeks kedua
        }
    }

    if (indeks1 < banyak1)                                                                              //jika nilai indeks pertama lebih kecil dari n
    {
        while (indeks1 < banyak1)                                                                       //ketika indeks pertama lebih kecil dari n
        {
            hasil[indeks_hasil] = kelompok1[indeks1];                                                   //indeks hasil = indeks pertama
            indeks_hasil++;                                                                             //increment indeks_hasil
            indeks1++;                                                                                  //increment indeks pertama
        }
    }
    else                                                                                                //jika tidak
    {
        while (indeks2 < banyak2)                                                                       //ketika indeks kedua lebih kecil dari n
        {
            hasil[indeks_hasil] = kelompok2[indeks2];                                                   //indeks hasil = indeks pkedua
            indeks_hasil++;                                                                             //increment indeks_hasil
            indeks2++;                                                                                  //increment indeks_hasil
        }
    }
}