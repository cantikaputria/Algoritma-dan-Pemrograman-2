/* 
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
    Soal Kuis 2 dalam mata kuliah Algoritma dan Pemrograman 2
    untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

//DEKLARASI LIBRARY
#include "header.h"

//PROSEDUR INPUT DATA
void input(makanan data[], int n)
{
    for (int i = 0; i < n; i++)                                                                  //looping
    {
        scanf("%s %d %s %d", &data[i].nama, &data[i].harga, &data[i].tempat, &data[i].kalori);   //meminta data nama, harga, tempat, dan kalori makanan dari user
    }
}

//PROSEDUR PENUKAR DATA
void temp(makanan *first, makanan *last)
{
    makanan temp;                                                                                 //variabel penampung sementara
    temp = *first;                                                                                //penampung untuk data awal
    *first = *last;                                                                               //pertukaran data akhir dan data awal
    *last = temp;                                                                                 //data dari penampung dipindah ke data akhir
}

//PROSEDUR SORTING HARGA (ascending)
void sorting1(makanan data[], int n)
{
    int i, j, idx;                                                                                 //deklarasi variabel iterasi
    for (i = 0; i < n - 1; i++)                                                                    //looping
    {                               
        idx = i;                                                                                   //inisialisasi indeks dengan i
        for (j = i + 1; j < n; j++)                                                                //looping
        {
            if (data[idx].harga > data[j].harga)                                                   //jika data ke kiri lebih besar dari data kanan
            {           
                idx = j;                                                                           //maka nilai idx = j
            }
        }
        temp(&data[i], &data[idx]);                                                                //pemanggilan prosedur penukaran
    }
}

//PROSEDUR SORTING KALORI (descending)
void sorting2(makanan data[], int n)
{
    int i, j, idx;                                                                                 //deklarasi variabel iterasi
    for (i = 0; i < n - 1; i++)                                                                    //looping
    {                              
        idx = i;                                                                                   //inisialisasi indeks dengan i
        for (j = i + 1; j < n; j++) 
        {
            if (data[idx].kalori < data[j].kalori)                                                 //jika data ke kiri lebih besar dari data kanan
            {           
                idx = j;                                                                           //maka nilai idx = j
            }
        }
        temp(&data[i], &data[idx]);                                                                //pemanggilan prosedur penukaran
    }   
}

//PROSEDUR SEARCHING HARGA (ascending)
int binSearch1(makanan data[], int left, int right)
{
    if (right >= left)                                                                              //jika nilai kanan lebih besar atau sama dengan kiri
    {
        int mid = (right - left) / 2 + left;                                                        //maka carilah tengah-tengahnya dan bagi dua
        if (data[mid].harga == search)                                                              //jika data tengah sama dengan search
        {               
            return mid;                                                                             //kembalikan indeks data tengah
        }
        else if (data[mid].harga > search)                                                          //jika data tengah lebih besar dari search
        {                                                       
            return binSearch1(data, left, mid - 1);                                                 //maka bagi array dan lakukan pencarian lagi di sebelah kiri
        }
        else if (data[mid].harga < search)                                                          //jika data tengah lebih kecil dari search
        {                                                
            return binSearch1(data, mid + 1, right);                                                //maka bagi array dan lakukan pencarian lagi di sebelah kanan
        }
    }
    return -1;                                                                                      //jika tidak memenuhi syarat maka kembalikan nilai -1 untuk penanda
}

//PROSEDUR SEARCHING KALORI (descending)
int binSearch2(makanan data[], int left, int right)
{
    if (right >= left)                                                                              //jika nilai kanan lebih besar atau sama dengan kiri
    {
        int mid = (right - left) / 2 + left;                                                        //maka carilah tengah-tengahnya dan bagi dua
        if (data[mid].kalori == search)                                                             //jika data tengah sama dengan search
        {               
            return mid;                                                                             //kembalikan indeks data tengah
        }   
        else if (data[mid].kalori < search)                                                         //jika data tengah lebih kecil dari search
        {                                               
            return binSearch2(data, left, mid - 1);                                                 //maka bagi array dan lakukan pencarian lagi di sebelah kiri
        }   
        else if (data[mid].kalori > search)                                                         //jika data tengah lebih besar dari search
        {                                                
            return binSearch2(data, mid + 1, right);                                                //maka bagi array dan lakukan pencarian lagi di sebelah kanan
        }
    }   
    return -1;                                                                                      //jika tidak memenuhi syarat maka kembalikan nilai -1 untuk penanda
}

//PROSEDUR PENCETAKAN OUTPUT
void output(makanan data)
{
    printf("nama makanan: %s\n", data.nama);                                                        //menampilkan nama makanan ke layar             
    printf("harga: %d\n", data.harga);                                                              //menampilkan harga makanan ke layar
    printf("tempat penjualan: %s\n", data.tempat);                                                  //menampilkan tempat makanan ke layar
    printf("persen kalori: %d\n", data.kalori);                                                     //menampilkan jumlah kalori makanan ke layar
}