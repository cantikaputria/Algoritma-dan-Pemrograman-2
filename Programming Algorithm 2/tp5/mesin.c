/* Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
Soal Praktikum 5 dalam mata kuliah Algoritma dan Pemrograman 2
untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
yang telah dispesifikasikan. Aamiin.
*/

//LIBRARY berdasarkan file header
#include "header.h"

//PROSEDUR
void bubble_asc(int n, bioskop film[])                                         //prosedur sorting bubble secara ascending
{
    //DEKLARASI VARIABEL                            
    char tempstr[50];                                                          //deklarasi variabel psementara penampung string judul
    int swap;                                                                  //deklarasi indeks untuk perpindahan
    int temp;                                                                  //deklarasi temp untuk durasi dan jam
    int i, j;                                                                  //variabel iterasi

    //PROSES
    do                                                                          //lakukan
    {
        swap = 0;                                                               //nilai swap di set = 0

        for ( i = 0; i < (n - 1); i++)                                          //perulangan
        {
            //MENGHITUNG DURASI
            int durasi1, durasi2;                                               //deklarasi variabel penyimpan                                               
            durasi1 = (film[i].jam * 60) + film[i].menit;                       //penghitungan durasi indeks i
            durasi2 = (film[i + 1].jam * 60) + film[i + 1].menit;               //penghitungan durasi indeks i + 1

            if(durasi1 > durasi2)                                               //jika durasi 1 lebih besar dari durasi 2
            {
                //tukar string
                strcpy(tempstr, film[i].judul);                                 //copykan string i judul ke variabel tempstr
                strcpy(film[i].judul, film[i + 1].judul);                       //memasukkan indeks dengan indeks i + 1
                strcpy(film[i + 1].judul, tempstr);                             //string dari temp dimasukkan ke indeks i + 1

                //tukar durasi jam
                temp = film[i].jam;                                             //var temp diisi variabel jam
                film[i].jam = film[i+1].jam;                                    //variabel i jam diisi jam dengan indeks + 1
                film[i+1].jam = temp;                                           //nilai indeks i + 1 diisi nilai dari temp
                
                //tukar durasi menit
                temp = film[i].menit;                                           //kurang lebih sama seperti yang diatas
                film[i].menit = film[i+1].menit;
                film[i+1].menit = temp;

                swap = 1;                                                       //jika proses selesai, nilai swap = 1
            }
        }
        
    } while (swap == 1);                                                        //ketika swap = 1 maka program berhenti
}

void bubble_desc(int n, bioskop film[])                                         //prosedur bubble short secara descending
{
    //DEKLARASI VARIABEL
    char tempstr[50];                                                           //deklarasi variabel psementara penampung string judul
    int swap;                                                                   //deklarasi indeks untuk perpindahan                                                  
    int temp;                                                                   //deklarasi temp untuk durasi dan jam
    int i, j;                                                                   //variabel iterasi   

    do                                                                          //lakukan
    {
        swap = 0;                                                               //nilai swap di set = 0

        for ( i = 0; i < (n - 1); i++)                                          //perulangan
        {
            //MENGHITUNG DURASI
            int durasi1, durasi2;                                               //deklarasi variabel penyimpan
            durasi1 = (film[i].jam * 60) + film[i].menit;                       //penghitungan durasi indeks i
            durasi2 = (film[i + 1].jam * 60) + film[i + 1].menit;               //penghitungan durasi indeks i + 1

            if(durasi1 < durasi2)                                               //jika durasi 1 lebih besar dari durasi 2
            {
                //PROSES MENUKAR
                strcpy(tempstr, film[i].judul);                                 //proses sama seperti bubble short diatas
                strcpy(film[i].judul, film[i + 1].judul);                
                strcpy(film[i + 1].judul, tempstr);

                temp = film[i].jam;
                film[i].jam =film[i+1].jam;
                film[i+1].jam = temp;

                temp = film[i].menit;
                film[i].menit = film[i+1].menit;
                film[i+1].menit = temp;

                swap = 1;                                                       //setelah proses menukar proses swap = 1
            }
        }
                
    }while (swap == 1);                                                         //ketika nilai swap = 1 maka prosesnya selesai
}

void quick_asc(bioskop film[], int kiri, int kanan)                             //proses sorting secara ascending pivot tengah
{
    //DEKLARASI VARIABEL
    int i = kiri;                                                               //i ditandai sebagai kiri
    int j = kanan;                                                              //j ditandai sebagai kanan
    char tempstr[50];                                                           //variabel penampung str saat penukaram
    int temp;                                                                   //variabel penampung saat pertukaran\

    //mencari indeks tengah
    int hitung = (kanan + kiri) / 2;

    //PROSES MENGHITUNG DURAS
    int durasi1;
    durasi1 = (film[hitung].jam * 60) + film[hitung].menit;

    do                                                                      //lakukan
    {
        while(((film[i].jam * 60) + film[i].menit < durasi1) && (i <= j))   //ketika durasi indeks i lebih kecil dari durasi tengah
        {
            i++;            
        }
        while(((film[j].jam * 60) + film[j].menit > durasi1) && (i <= j))   //ketika durasi indeks j lebih besar dari durasi tengah
        {
            j--;
        }

        if (i < j)                                                          //jika nilai i lebih kecil dari j
        {
            //LAKUKAN PROSES PERTUKARAN (sama seperti bubble diatas)
            strcpy(tempstr, film[i].judul);                                
            strcpy(film[i].judul, film[j].judul);                
            strcpy(film[j].judul, tempstr);

            temp = film[i].jam;
            film[i].jam = film[j].jam;
            film[j].jam = temp;

            temp = film[i].menit;
            film[i].menit = film[j].menit;
            film[j].menit = temp;

            //iterasi
            i++;
            j--;
        }

    } while (i < j);                                                        //ketika nilai i kurang dari j maka berhenti

    //REKURSIF
    if((kiri < j) && (j < kanan))                                           //jika kiri lebih kecil dari j dan nilai j lebih dari kanan
    {
        quick_asc(film, kiri, j);                                           //rekursif untuk kiri
    }

    if((i < kanan) && (i > kiri))                                           //jika i lebih kecil dari kanan dan lebih besar dari kiri
    {
        quick_asc(film, i, kanan);                                          //rekursif untuk kanan
    }
}

void quick_desc(bioskop film[], int kiri, int kanan)
{
    //DEKLARASI VARIABEL
    int i = kiri;                                                               //i ditandai sebagai kiri
    int j = kanan;                                                              //j ditandai sebagai kanan
    char tempstr[50];                                                           //variabel penampung str saat penukaram
    int temp;  

    //mencari indeks tengah
    int hitung = (kanan + kiri) / 2;

    //PROSES MENGHITUNG DURAS
    int durasi1;
    durasi1 = (film[hitung].jam * 60) + film[hitung].menit;

    do                                                                          //lakukan
    {
        while(((film[i].jam * 60) + film[i].menit > durasi1) && (i <= j))       //ketika durasi indeks i lebih besar dari durasi tengah
        {
            i++;
        }
        while(((film[j].jam * 60) + film[j].menit < durasi1) && (i <= j))       //ketika durasi indeks j lebih besar dari durasi tengah
        {
            j--;
        }

        if (i < j)                                                              //jika nilai i lebih kecil dari j
        {
            //LAKUKAN PROSES PENUKARAM (kurang lebih sama seperti diatas)
            strcpy(tempstr, film[i].judul);                                
            strcpy(film[i].judul, film[j].judul);                
            strcpy(film[j].judul, tempstr);

            temp = film[i].jam;
            film[i].jam = film[j].jam;
            film[j].jam = temp;

            temp = film[i].menit;
            film[i].menit = film[j].menit;
            film[j].menit = temp;

            //iterasi
            i++;
            j--;
        }

    } while (i < j);                                                                   //ketika nilai i kurang dari j maka berhenti

    //REKURSIF
    if((kiri < j) && (j < kanan))                                                      //jika kiri lebih kecil dari j dan nilai j lebih dari kanan
    {
        quick_desc(film, kiri, j);                                                     //rekursif untuk kiri
    }

    if((i < kanan) && (i > kiri))                                                      //jika i lebih kecil dari kanan dan lebih besar dari kiri
    {
        quick_desc(film, i, kanan);                                                    //rekursif untuk kanan
    }
}