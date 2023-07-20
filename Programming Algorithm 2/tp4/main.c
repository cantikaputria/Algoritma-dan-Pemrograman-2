/* Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
Soal Praktikum 4 dalam mata kuliah Algoritma dan Pemrograman 2
untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
yang telah dispesifikasikan. Aamiin.
*/

//LIBRARY
#include "header.h"

int main ()
{
    //DEKLARASI VARIABEL N
    int n;                              //variabel untuk menampung jumlah film
    scanf("%d", &n);                    //meminta masukkan nilai n dari user
    
    //DEKLARASI STRUCT
    lalala film[n];                     //deklarasi struct bernama film sesuai jumlah n

    //MASUKAN USER
    for (i = 0; i < n; i++)             //perulangan meminta masukan user
    {
        scanf("%s %s %s", &film[i].judul, &film[i].genre, &film[i].rating);         //meminta judul, genre, dan rating film dari user
    }
    scanf("%s %s %s", &patokan, &metode, &urutan);                                  //meminta patokan, metode, dan urutan sesuai keinginan user

    //JIKA PATOKAN BERDASARKAN JUDUL
    if(strcmp(patokan, "judul") == 0)                                               //jika patokannya berdasarkan judul, maka...
    {
        //JIKA METODENYA INSERTION
        if (strcmp(metode, "insertion") == 0)                                       //lalu jika metodenya insertion maka....
        {
            //JIKA URUTANNYA ASCENDING
            if (strcmp(urutan, "asc") == 0)                                         //lalu jika urutannya ascending maka diurutkan dari nilai terkecil
            {
                insert_asc(n, film);                                                //pemanggilan prosedur insertion ascending
            }

            //JIKA URUTANNYA DESCENDING
            else if(strcmp(urutan, "desc") == 0)                                    //jika urutannya descending maka diurutkan dari nilai terbesar
            {
                insert_desc(n, film);                                               //pemanggilan prosedur insertion descending
            }
        }

        //JIKA METODENYA SELECTION
        else if (strcmp(metode, "selection") == 0)                                  //jika metodenya selection maka...
        {
            //JIKA URUTANNYA ASCENDING
            if(strcmp(urutan, "asc") == 0)                                          //lalu jika urutannya ascending maka diurutkan dari nilai terkecil
            {
               select_asc(n, film);                                                 //pemanggilan prosedur selection descending
            }

            //JIKA URUTANNYA DESCENDING (belum jalan)
            else if(strcmp(urutan, "desc") == 0)                                    //jika urutannya descending maka diurutkan dari nilai terbesar
            {
                select_desc(n, film);                                               //pemanggilan prosedur selection descending
            }
        }
    }

    //MOHON MAAF TEH BAGIAN INI DIJADIKAN KOMENTAR KARENA MASIH ERROR
    /*
    //JIKA PATOKANNYA RATING
    if(strcmp(patokan, "rating") == 0)
    {
        //JIKA METODENYA INSERTION
        if (strcmp(metode, "insertion") == 0)
        {
            //JIKA URUTANNYA ASCENDING
            if (strcmp(urutan, "asc") == 0)
            {
                insert2_asc(n, film);
            }

            //JIKA URUTANNYA DESCENDING
            else if(strcmp(urutan, "desc") == 0)
            {
                insert2_desc(n, film);
            }
        }

        //JIKA METODENYA SELECTION
        else if (strcmp(metode, "selection") == 0)
        {
            //JIKA URUTANNYA ASCENDING
            if(strcmp(urutan, "asc") == 0)
            {
                select2_asc(n, film);
            }

            //JIKA URUTANNYA DESCENDING (belum jalan)
            else if(strcmp(urutan, "desc") == 0)
            {
                select2_desc(n, film);
            }
        }
    } */

    //MENAMPILKAN HASIL KE LAYAR
    print(n, film);                     //pemanggilan prosedur proses print

    return 0;                           //kembali ke 0
}