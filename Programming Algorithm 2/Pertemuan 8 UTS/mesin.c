/* 
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
    Soal UTS dalam mata kuliah Algoritma dan Pemrograman 2
    untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

//LIBRARY
#include "header.h"

//PROSEDUR INPUT
void input(minyak tipe[], int banyak)
{
    for (i = 0; i < banyak; i++)                                                                           //perulangan
    {
        scanf("%s %d %d %d", &tipe[i].merk, &tipe[i].kalori, &tipe[i].lemak, &tipe[i].harga);              //meminta nama merk, jumlah kalori, jumlah lemak, dan harga minyak daro user
        tipe[i].hitung = (double)(tipe[i].harga / (tipe[i].lemak + tipe[i].kalori));                       //menghitung harga yg dibagi jumlah lemak dan kalori sebagai dasar sorting
    }
}

//PROSEDUR INSERTION
void insertion(minyak tipe[], int banyak)
{
    for (i = 1; i < banyak; i++)                                                    //perulangan
    {
        minyak temp = tipe[i];                                                      //struct temp = tipe indeks ke i
        j = i - 1;                                                                  //iterator j = nilai i dikurangi 1

        while ((temp.hitung < tipe[j].hitung) && (j >= 0))                          //ketika temp hitung i lebih kecil dari j dan nila j leih dari atau sama dengan nol                           
        {
            tipe[j + 1] = tipe[j];                                                  //indks j + 1 sama dengan tipe j biasa
            j--;                                                                    //decrement
        }
        tipe[j + 1] = temp;                                                         //indeks j + 1 masuk kembali ke variabel temp
    }
}

//PROSEDUR SELECTION
void selection(minyak tipe[], int banyak)
{
    for (i = 0; i < banyak - 1; i++)                                               //perulangan
    {
        int indeks_maks = i;                                                       //membuat variabel indeks maksimal dengan nila = i
        for (j = i + 1; j < banyak; j++)                                           //perulangan
        {
            if (tipe[j].hitung < tipe[indeks_maks].hitung)                         //jika tipe j lebih kecil dari indeks maks
            {
                indeks_maks = j;                                                   //maka indeks maks = j
            }
        }   
        tukar(&tipe[indeks_maks], &tipe[i]);                                       //pemanggilan prosedur tukar data
    }
}

//PROSEDUR TUKAR
void tukar(minyak* a, minyak* b)                                                  //bentuk pointer
{
    minyak temp = *a;                                                             //nilai yang akan ditukar masuk ke variabel temp
    *a = *b;                                                                      //nilai pertama diisi nilai kedua
    *b = temp;                                                                    //nikai kedua diisi nilai temp
}

//PROSEDUR BUBBLE SHORT
void bubble(minyak tipe[], int banyak)
{
    for (i = 0; i < banyak - 1; i++)                                            //perulangan untuk indeks i
    {
        for (j = 1; j < banyak - i; j++)                                        //perulangan untuk indeks j
        {
            if (tipe[j - 1].hitung > tipe[j].hitung)                            //jika indeks j - 1 lebih besar dari j
            {
                tukar(&tipe[j - 1], &tipe[j]);                                  //maka lakukan pertukaran (pemanggilan prosedur)
            }
        }
    }
}


//PROSEDUR QUICK SHORT
void quick(minyak tipe[], int kiri, int kanan)
{
    if (kiri < kanan)                                                            //jika nila kiri lebih kecil dari kanan
    {
        i = kiri;                                                                //nilai kiri masuk ke variabel i
        for (j = kiri; j < kanan; j++)                                           //perulangan indeks j
        {
            if (tipe[j].hitung < tipe[kanan].hitung)                             //jika indeks j lbih kecil dari indeks kanan
            {
                tukar(&tipe[j], &tipe[i]);                                       //maka lakukan penukaran indeks i dan j(prosedur)
                i++;                                                             //increment
            }
        }
        tukar(&tipe[i], &tipe[kanan]);                                          //pemanggilan prosedur penukaran indeks i dan indeks kanan
        quick(tipe, kiri, i - 1);                                               //rekursif quick sebelah kiri
        quick(tipe, i + 1, kanan);                                              //rekursif quick sebelah kanan
    }
}

//PROSEDUR MENAMPILKAN KE LAYAR
void print(minyak tipe[], int banyak)
{   
    for ( i = 0; i < banyak; i++)                                              //perulangan
    {   
        printf("%s %d %d %d - ", tipe[i].merk, tipe[i].kalori, tipe[i].lemak, tipe[i].harga);           //menampilkan merk, kalori, lemak, dan harga minyak ke layar

        if ((tipe[i].harga % (tipe[i].lemak + tipe[i].kalori)) == 0)                                    //jika mod hasil perhitungan sama dengan 0 maka
        {
            printf("%.0lf\n", tipe[i].hitung);                                                          //print angka tanpa koma
        }
        else                                                                                            //jika tidak maka hasilnya bersisa
        {
            printf("%.2lf\n", tipe[i].hitung);                                                          //tampilkan sisanya dengan 2 angka dibelakang koma
        }   
    }
}

//PROSEDUR PENGGABUNGAN TABEL
void mergetab(minyak tipe1[], int banyak1, minyak tipe2[], int banyak2, minyak hasil[])
{
    int indeks1 = 0, indeks2 = 0, indeks_hasil = 0;                                                     //deklarasi nilai indeks sebagai penanda perbagian
    while ((indeks1 < banyak1) && (indeks2 < banyak2))                                                  //ketika nilai indeks pertama dan kedua lebih kecil dari n
    {
        if (tipe1[indeks1].hitung <= tipe2[indeks2].hitung)                                             //jika indeks pertama lebih kecil atau sama dengan indeks kedua
        {
            hasil[indeks_hasil] = tipe1[indeks1];                                                       //indeks hasil = indeks pertama
            indeks_hasil++;                                                                             //increment indeks_hasil
            indeks1++;                                                                                  //increment indeks pertama
        }
        else                                                                                            //jika tidak atau sebaliknya
        {
            hasil[indeks_hasil] = tipe2[indeks2];                                                       //maka nilai indeks hasil adalah indeks kedua
            indeks_hasil++;                                                                             //increment indeks_hasil
            indeks2++;                                                                                  //increment indeks kedua
        }
    }

    if (indeks1 < banyak1)                                                                              //jika nilai indeks pertama lebih kecil dari n
    {
        while (indeks1 < banyak1)                                                                       //ketika indeks pertama lebih kecil dari n
        {
            hasil[indeks_hasil] = tipe1[indeks1];                                                       //indeks hasil = indeks pertama
            indeks_hasil++;                                                                             //increment indeks_hasil
            indeks1++;                                                                                  //increment indeks pertama
        }
    }
    else                                                                                                //jika tidak
    {
        while (indeks2 < banyak2)                                                                       //ketika indeks kedua lebih kecil dari n
        {
            hasil[indeks_hasil] = tipe2[indeks2];                                                       //indeks hasil = indeks pkedua
            indeks_hasil++;                                                                             //increment indeks_hasil
            indeks2++;                                                                                  //increment indeks_hasil
        }
    }
}