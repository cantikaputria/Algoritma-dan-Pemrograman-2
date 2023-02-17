/* 
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
    Tugas Praktikum 8 dalam mata kuliah Algoritma dan Pemrograman 2
    untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

//DEKLARASI LIBRARY
#include "header.h"

int main ()
{
    //DEKLARASI VARIABEL PENANDA
    int i;                                                                      //variabel penampung indeks                
    int n = 0;                                                                  //variabel penampung indeks (jumlah)

    //DEKLARASI STRUCT
    list Lfilm[50];                                                             //struct penampung list film
    kode Lsutradara[50];                                                        //struct penampung list sutradara
    kode Lgenre[50];                                                            //struct penampung list genre
    kode Lbioskop[50];                                                          //struct penampung list bioskop

    //DEKLARASI FILE
    FILE *film;                                                                 //penampung file list film awal
    FILE *sutradara;                                                            //penampung file sutradara
    FILE *genre;                                                                //penampung file genre
    FILE *bioskop;                                                              //penampung file bioskop
    FILE *final;                                                                //penampung file list film final

    //MEMBUKA FILE
    film = fopen("listfilm.dat", "r");                                          //membuka file listfilm.dat dengan metode read
    sutradara = fopen("sutradara.dat", "r");                                    //membuka file sutradara.dat dengan metode read
    genre = fopen("genre.dat", "r");                                            //membuka file genre.dat dengan metode read
    bioskop = fopen("bioskop.dat", "r");                                        //membuka file bioskop.dat dengan metode read
    final = fopen("listfilmfinal.dat", "w");                                    //membuka file listfilmFinal.dat dengan metode write

    //MEMBACA FILE
    int a = readList(film, Lfilm);                                              //pemanggilan fungsi membaca file list film
    int b = readKode(sutradara, Lsutradara, "sutradara.dat");                   //pemanggilan fungsi membaca file list sutradara
    int c = readKode(genre, Lgenre, "genre.dat");                               //pemanggilan fungsi membaca file list genre
    int d = readKode(bioskop, Lbioskop, "bioskop.dat");                         //pemanggilan fungsi membaca file list bioskop

    //MENUTUP FILE
    fclose(film);                                                               //menutup file film                           
    fclose(sutradara);                                                          //menutup file sutradara
    fclose(genre);                                                              //menutup file genre
    fclose(bioskop);                                                            //menutup file bioskop

    //DEKLARASI STRUCT
    list filmFinal[a];                                                          //struct penampung list film final

    for (int i = 0; i < a; i++)                                                 //looping                        
    {   
        //MENYALIN DATA
        strcpy(filmFinal[i].judul, Lfilm[i].judul);                                                            //menyalin data judul film ke list film final
        strcpy(filmFinal[i].sutradara, Lsutradara[cocok(Lfilm[i].sutradara, Lsutradara, b)].nama);             //menyalin data sutradara ke list film final dan pemanggilan prosedur untuk mengubah idnya
        strcpy(filmFinal[i].genre, Lgenre[cocok(Lfilm[i].genre, Lgenre, c)].nama);                             //menyalin data genre ke list film final dan pemanggilan prosedur untuk mengubah idnya
        strcpy(filmFinal[i].bioskop, Lbioskop[cocok(Lfilm[i].bioskop, Lbioskop, d)].nama);                     //menyalin data bioskop ke list film final dan pemanggilan prosedur untuk mengubah idnya

        //MENCARI PANJANG STRING
        panjang[0][i] = strlen(filmFinal[i].judul);                                                             
        panjang[1][i] = strlen(filmFinal[i].sutradara);
        panjang[2][i] = strlen(filmFinal[i].genre);
        panjang[3][i] = strlen(filmFinal[i].bioskop);

        //MENCETAK DATA KE DALAM FILE FILM FINAL
        fprintf(final, "%s %s %s %s\n", filmFinal[i].judul, filmFinal[i].sutradara,filmFinal[i].genre, filmFinal[i].bioskop);
    }
    fprintf(final, "%s %s %s %s\n", "####", "####", "####", "####");            //mencetak data dummy
    fclose(final);                                                              //menutup file final

    //DEKLARASI FILE YANG AKAN DI SEARCHING
    FILE *fsutradara;                                                            //penampung file sutradara
    FILE *fgenre;                                                                //penampung file genre
    FILE *fbioskop;                                                              //penampung file bioskop

    //OPEN FILE
    fsutradara = fopen("sutradara.dat", "r");                                    //membuka file sutradara.dat dengan metode read
    fgenre = fopen("genre.dat", "r");                                            //membuka file genre.dat dengan metode read
    fbioskop = fopen("bioskop.dat", "r");                                        //membuka file bioskop.dat dengan metode read

    //MEMBACA FILE
    int e = readKode(fsutradara, Lsutradara, "sutradara.dat");                   //pemanggilan fungsi membaca file list sutradara
    int f = readKode(fgenre, Lgenre, "genre.dat");                               //pemanggilan fungsi membaca file list genre
    int g = readKode(fbioskop, Lbioskop, "bioskop.dat");                         //pemanggilan fungsi membaca file list bioskop

    //DEKLARASI FILE
    char id_cari[10];                                                            //deklarasi id yang dicari
    char file_cari[10];                                                          //deklarasi file yang akan dicari

    //MENU
    printf("==================================\n");                             
    printf("MENU\n");
    printf("----------------------------------\n");
    printf("Apa yang ingin anda lakukan?\n");
    printf("[1] Tampilkan list film final\n");
    printf("[2] Pencarian data\n");
    printf("==================================\n");

    //DEKLARASI INPUTAN USER
    int perintah;                                                               //variabel penampung yang akan diperintahkan
    scanf("%d", &perintah);                                                     //meminta inputan dari user

    //KONDISI
    if(perintah == 1)                                                           //jika perintahnya 1
    {
        print(filmFinal, a);                                                    //tampilkan prosedur pemanggilan output
    }
    else if(perintah == 2)                                                      //jika perintahnya dua
    {   
        //PROSES SEARCHING
        printf("File yang akan dicari:\n");                                     //menampilkan teks ke layar
        scanf("%s", &file_cari);                                                //meminta masukan id dari userW
        printf("Masukkan id yang dicari:\n");                                   //menampilkan teks ke layar
        scanf("%s", &id_cari);                                                  //meminta masukan id dari user

        //KONDISI
        if(strcmp(file_cari, "sutradara") == 0)                                 //jika yang dicari sutradara
        {
            binSearch(id_cari, Lsutradara, e);                                  //pemanggilan prosedur pencarian sutradara
        }
        else if (strcmp(file_cari, "genre") == 0)                               //jika yang dicari genre
        {
            binSearch(id_cari, Lgenre, f);                                      //pemanggilan prosedur pencarian genre
        }   
        else if (strcmp(file_cari, "bioskop") == 0)                             //jika yang dicari    
        {
            binSearch(id_cari, Lbioskop, g);                                    //pemanggilan prosedur pencarian bioskop
        }
    }
    else                                                                        //jika perintah tidak sesuai
    {
        printf("Mohon maaf inputan tidak sesuai\n");                            //tampilkan teks ke layar
    } 

    return 0;                                                                   //kembali ke 0
}