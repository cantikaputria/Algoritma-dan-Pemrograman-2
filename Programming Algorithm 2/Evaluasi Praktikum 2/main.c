/* 
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
    Evaluasi 2 dalam mata kuliah Algoritma dan Pemrograman 2
    untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

int main ()
{
    //DEKLARASI VARIABEL
    int i, n = 0;                                                                               //inisialisasi                                            
    char pita[200];                                                                             //variabel penampung query
    
    //DEKLARASI STRUCT
    toko barang[200];                                                                           //struct penampung barang toko

    do 
    {
        scanf(" %199[^\n]s", &pita);                                                            //meminta inputan query dari user
        start(pita);                                                                            //menyalakan mesin

        //QUERY INSERT
        if(strcmp(getckata(), "INSERT") == 0)                                                   //jika querynya INSERT maka
        {
            //insertData(pita, &barang[i]);                                                       //panggil prosedur insert data
        }
        else if(strcmp(getckata(), "UPDATE") == 0)                                              //jika querynya UPDATE maka
        {
            inc(pita);                                                                          //maju satu kata
            if(strcmp(getckata(), "HARGA") == 0)                                                //jika harga yang diupdate
            {
                inc(pita);                                                                      //maju satu kata
                i = 0;                                                                          //inisialisasi
                while ((strcmp(getckata(), barang[i].harga) != 0))                              //mencari data
                {   
                    i++;                                                                        //incremet
                }

                if((strcmp(barang[i].harga, getckata()) == 0))                                  //jika data ditemukan
                {
                    inc(pita);                                                                  //maju satu kata
                    strcpy(barang[i].nama, getckata());                                         //update nama barang

                    inc(pita);                                                                  //maju satu kata
                    strcpy(barang[i].status, getckata());                                       //update status barang
                }    
            }
            else if(strcmp(getckata(), "NAMA") == 0)                                            //jika yang diupdate nama barang
            {
                inc(pita);                                                                      //maju satu kata
                i = 0;                                                                          //inisialisasi
                while ((strcmp(getckata(), barang[i].nama) != 0))                               //mencari data
                {   
                    i++;                                                                        //increment
                }

                if((strcmp(barang[i].nama, getckata()) == 0))                                   //jika data ditemukan
                {
                    inc(pita);                                                                  //maju satu kata
                    strcpy(barang[i].harga, getckata());                                        //update harga barang

                    inc(pita);                                                                  //maju satu kata
                    strcpy(barang[i].status, getckata());                                       //update status barang
                }    
            }
            else if(strcmp(getckata(), "STATUS") == 0)                                          //jika yang diupdate status
            {
                inc(pita);                                                                      //maju satu kata
                i = 0;                                                                          //inisialisasi
                while ((strcmp(getckata(), barang[i].status) != 0))                             //mencari data
                {   
                    i++;                                                                        //increment
                }

                if((strcmp(barang[i].harga, getckata()) == 0))                                  //jika data ditemukan
                {
                    inc(pita);                                                                  //maju satu kata
                    strcpy(barang[i].nama, getckata());                                         //update nama barang

                    inc(pita);                                                                  //maju satu kata
                    strcpy(barang[i].harga, getckata());                                        //update harga barang
                }    
            }
        }
        else if(strcmp(getckata(), "SELESAI") == 0)                                             //jika query inputan selesai
        {
            printf("Test Test\n");                                                              //tampilkan output
            break;                                                                              //keluar dari program
        }

    } while (strcmp(getckata(), "SELESAI") != 0);                                           

    /* Punten kang teh kodingannya ngaco banget lagi kurang enak badan hehe, semoga masih dapet point deh :(
        mangats tubes tubesmnya */
    return 0;                                                                                   //kembali ke 0
}