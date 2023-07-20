/* 
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
    Tugas Masa Depan dalam mata kuliah Algoritma dan Pemrograman 2
    untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

//LIBRARY
#include "header.h"

int main ()
{
    //DEKLARASI VARIABEL
    int i, n = 0;                                                                         //inisialisasi                                            
    char pita[200];                                                                       //variabel penampung query
    
    //DEKLARASI STRUCT
    book datBuku[50];                                                                     //struct penampung data buku
    author datPen[50];                                                                    //struct penampung data penulis

    //PROSES MEMBACA FILE
    FILE *buku;                                                                           //deklarasi file buku
    FILE *penulis;                                                                        //deklarasi file penulis
    buku = fopen("tbuku.dat", "r");                                                       //membuka file tabel buku
    penulis = fopen("tpenulis.dat", "r");                                                 //membuka file tabel penulis
    int a = readBuku(buku, datBuku);                                                      //pemanggilan fungsi pembacaan file tbuku
    int b = readKode(penulis, datPen);                                                    //pemanggilan fungsi pembacaan file tpenulis
    fclose(buku); fclose(penulis);                                                        //menutup file buku dan penulis

    //DEKLARASI STRUCT
    book tempB;                                                                           //struct penampung data buku sementara
    author tempA;                                                                         //struct penampung data penulis sementara
    book tutupB;                                                                          //struct penampung EOP (penutup file buku)
    author tutupA;                                                                        //struct penampung EOP (penutup file penulis)

    //INISIALISASI
    strcpy(tutupB.kd_buku, "####");                                                       //mengisi EOP untuk kode buku
    strcpy(tutupB.judul, "####");                                                         //mengisi EOP untuk judul buku
    strcpy(tutupB.penulis, "####");                                                       //mengisi EOP untuk penulis buku
    strcpy(tutupB.penerbit, "####");                                                      //mengisi EOP untuk penerbit buku
    strcpy(tutupA.kode, "####");                                                          //mengisi EOP untuk kode penulis
    strcpy(tutupA.nama, "####");                                                          //mengisi EOP untuk nama penulis
    
    //MENAMPILKAN MENU KE LAYAR
    printf("Selamat Datang di DBMS Koreksian Cantika!\n");
    printf("Query:\n");
    printf("[1] Gunakan INSERT untuk menambah data\n");
    printf("[2] Gunakan UPDATE untuk mengubah data\n");
    printf("[3] Gunakan DELETE untuk menghapus data\n");
    printf("[4] Gunakan SELECT untuk menampilkan data\n");
    printf("[5] Gunakan EXIT untuk keluar dari program\n");
    printf("[4] Masukkan query:\n");

    //MEMULAI PROSES
    do 
    {
        scanf(" %199[^\n]s", &pita);                                                      //meminta inputan query dari user
        start(pita);                                                                      //menyalakan mesin

        //QUERY INSERT
        if(strcmp(getckata(), "INSERT") == 0)                                             //jika querynya INSERT                              
        {   
            inc(pita);                                                                    //maju satu kata

            //QUERY INSERT INSERT                                                                  
            if(strcmp(getckata(), "INSERT") == 0)                                         //jika kata selanjutnya adalah query INSERT
            {
                inc(pita);                                                                //maju satu kata
                if(strcmp(getckata(), "tbuku") == 0)                                      //jika tabel yg dituju tabel buku
                {
                    insertFixBuku(pita, datBuku, tempB, tutupB, buku, n, 1);              //panggil prosedur insert data buku
                }
                else if(strcmp(getckata(), "tpenulis") == 0)                              //jika tabel yang dituju tabel penulis
                {
                    insertFixPen(pita, datPen, tempA, tutupA, penulis, n, 1);             //panggil prosedur insert data penulis
                }   
            }

            //QUERY INSERT UPDATE
            else if(strcmp(getckata(), "UPDATE") == 0)
            {
                inc(pita);                                                                 //maju satu kata
                if(strcmp(getckata(), "tbuku") == 0)                                       //jika tabel yg dituju tabel buku 
                {
                    inc(pita);                                                             //maju satu kata
                    i = 0;                                                                 //inisialisasi
                    while ((strcmp(getckata(), datBuku[i].kd_buku) != 0) && (strcmp(datBuku[i].kd_buku, "####") != 0))  //mencari data
                    {   
                        i++;                                                                //increment sampai ketemu
                    }

                    if((strcmp(datBuku[i].kd_buku, "####") == 0))                           //jika sampai EOP tidak ketemu
                    {
                        insertFixBuku(pita, datBuku, tempB, tutupB, buku, n, 0);            //maka lakukan insert data
                    }
                    else                                                                    //jika ketemu maka lakukan proses update data
                    {
                        inc(pita);                                                          //maju satu kata
                        strcpy(datBuku[i].judul, getckata());                               //update data judul

                        inc(pita);                                                          //maju satu kata
                        strcpy(datBuku[i].penulis, getckata());                             //update data penulis

                        inc(pita);                                                          //maju satu kata
                        strcpy(datBuku[i].penerbit, getckata());                            //update data penerbit

                        writeBuku(buku, n, datBuku);                                        //panggil prosedur penulisan data buku
                    }
                }
                else if(strcmp(getckata(), "tpenulis") == 0)
                {
                    inc(pita);                                                              //maju satu kata
                    i = 0;
                    while ((strcmp(getckata(), datPen[i].kode) != 0) && (strcmp(datPen[i].kode, "####") != 0))  //mencari data
                    {   
                        i++;                                                                //increment
                    }

                    if((strcmp(datPen[i].kode, "####") == 0))                               //jika sampai EOP tidak ketemu
                    {
                        insertFixPen(pita, datPen, tempA, tutupA, penulis, n, 0);           //maka lakukan insert data
                    }
                    else                                                                    //jika ketemu maka lakukan proses update
                    {
                        inc(pita);                                                          //maju satu kata
                        strcpy(datPen[i].nama, getckata());                                 //update data nama

                        penulis = fopen("tpenulis.dat", "w");                               //buka file penulis

                        writePen(penulis, n, datPen);                                       //panggil prosedur penulisan data
                    }
                }
            }

            //INSERT TABEL BUKU
            else if(strcmp(getckata(), "tbuku") == 0)                                       //jika tujuan selanjutnya tabel buku
            {   
                insertFixBuku(pita, datBuku, tempB, tutupB, buku, n, 1);                    //maka lakukan insert pada tabel buku
            }

            //INSERT TABEL PENULIS
            else if(strcmp(getckata(), "tpenulis") == 0)                                    //jika tujuan selanjutnya tabel penylis
            {
                insertFixPen(pita, datPen, tempA, tutupA, penulis, n, 1);                   //maka lakukan insert pada tabel penulis
            }

            //TIDAK MEMENUHI
            else                                                                            //jika tidak memenuhi kondisi apapun             
            {
                printf("Data tidak lengkap!\n");                                            //maka data tidak lengkap
            }
        }

        //QUERY UPDATE
        else if(strcmp(getckata(), "UPDATE") == 0)                                          //jika querynya update
        {   
            inc(pita);                                                                      //maju satu kata

            //QUERY UPDATE INSERT
            if(strcmp(getckata(), "INSERT") == 0)                                           //jika selanjutnya query insert
            {
                inc(pita);                                                                  //maju satu kata
                if(strcmp(getckata(), "tbuku") == 0)                                        //jika tabel buku
                {
                    inc(pita);                                                              //maju satu kata
                    i = 0;                                                                  //inisialisasi
                    while ((strcmp(getckata(), datBuku[i].kd_buku) != 0) && (strcmp(datBuku[i].kd_buku, "####") != 0)) //mencari data
                    {   
                        i++;                                                                //incremet
                    }

                    if((strcmp(datBuku[i].kd_buku, "####") == 0))                           //jika data tidak ditemukan
                    {
                       insertFixBuku(pita, datBuku, tempB, tutupB, buku, n, 0);             //maka lakukan insert dat
                    }
                    else                                                                    //jika data ditemukan masukan update data
                    {
                        inc(pita);                                                          //maju satu kata
                        strcpy(datBuku[i].judul, getckata());                               //update judul buku

                        inc(pita);                                                          //maju satu kata
                        strcpy(datBuku[i].penulis, getckata());                             //update judul penulis

                        inc(pita);                                                          //maju satu kata
                        strcpy(datBuku[i].penerbit, getckata());                            //update judul penerbit

                        writeBuku(buku, n, datBuku);                                        //panggil prosedur tulis data buku
                    }
                }
                else if(strcmp(getckata(), "tpenulis") == 0)                                //jika yang dituju tabel penulis
                {
                    inc(pita);                                                              //maju satu kata
                    i = 0;
                    while ((strcmp(getckata(), datPen[i].kode) != 0) && (strcmp(datPen[i].kode, "####") != 0))  //mencari data
                    {   
                        i++;                                                                //increment
                    }

                    if((strcmp(datPen[i].kode, "####") == 0))                               //jika datanya tidak ditemukan
                    {
                        insertFixPen(pita, datPen, tempA, tutupA, penulis, n, 0);           //lakukan proses insert data
                    }
                    else                                                                    //jika ditemukan, lakukan update data
                    {
                        inc(pita);                                                          //maju satu kata                               
                        strcpy(datPen[i].nama, getckata());                                 //update nama penulis

                        writePen(penulis, n, datPen);                                       //pemanggilan prosedur menulis data
                    }
                }
            }

            //UPDATE TABEL BUKU
            else if(strcmp(getckata(), "tbuku") == 0)
            {
                inc(pita);                                                                  //maju satu kata
                i = 0;                                                                      //inisialisasi
                while ((strcmp(getckata(), datBuku[i].kd_buku) != 0) && (strcmp(datBuku[i].kd_buku, "####") != 0))      //mencari data
                {   
                    i++;                                                                    //increment
                }

                if((strcmp(datBuku[i].kd_buku, "####") == 0))                               //jika data tidak ditemuka
                {
                    printf("Data tidak ditemukan!\n");
                }
                else                                                                        //jika ditemukan
                {
                    inc(pita);                                                              //maju satu kata
                    strcpy(datBuku[i].judul, getckata());                                   //ubah judul buku

                    inc(pita);                                                              //maju satu kata
                    strcpy(datBuku[i].penulis, getckata());                                 //ubah penulis buku

                    inc(pita);                                                              //maju satu kata
                    strcpy(datBuku[i].penerbit, getckata());                                //ubah penerbit buku

                    writeBuku(buku, n, datBuku);                                            //prosedur menulis data buku
                }
                
            }

            //UPDATE TABEL PENULIS
            else if(strcmp(getckata(), "tpenulis") == 0)
            {
                inc(pita);                                                               //maju satu kata
                i = 0;
                while ((strcmp(getckata(), datPen[i].kode) != 0) && (strcmp(datPen[i].kode, "####") != 0)) //mencari data
                {   
                    i++;                                                                 //increment
                }

                if((strcmp(datPen[i].kode, "####") == 0))                                //jika data tidak ditemukan
                {
                    printf("Data tidak ditemukan!\n");
                }
                else                                                                     //jika data ditemukan
                {
                    inc(pita);                                                           //maju satu kata
                    strcpy(datPen[i].nama, getckata());                                  //mengupdate nama penulis

                    writePen(penulis, n, datPen);                                        //prosedur untuk menulis data penulis
                }
            }
        }

        //QUERY DELETE
        else if(strcmp(getckata(), "DELETE")== 0)
        {
            inc(pita);                                                                       //maju satu kata
            if(strcmp(getckata(), "tbuku") == 0)                                             //jika yang dituju tabel buku
            {
                inc(pita);                                                                   //maju satu kata
                i = 0;                                                                       //inisialisasi
                while ((strcmp(getckata(), datBuku[i].kd_buku) != 0) && (strcmp(datBuku[i].kd_buku, "####") != 0))      //mencari data
                {   
                    i++;                                                                     //increment
                }

                if((strcmp(datBuku[i].kd_buku, "####") == 0))                                //jika data tidak ditemukan
                {
                    printf("Data tidak ditemukan!\n");
                }
                else                                                                         //jika data ditemukan
                {
                    while(strcmp(datBuku[i].kd_buku, "####") != 0)                           //jika kode buku bukan EOP
                    {
                        datBuku[i] = datBuku[i+1];                                           //masukkan data indeks ke i ke indeks selanjutnya
                        i++;                                                                 //increment
                    }
                    datBuku[i] = datBuku[i+1];                                               //masukkan data indeks ke i ke indeks selanjutnya

                    writeBuku(buku, n, datBuku);                                             //lakukan prosedur menulis data buku
                }
            }
            else if(strcmp(getckata(), "tpenulis") == 0)                                     //jika yang dituju tabel penulis
            {
                inc(pita);                                                                   //maju satu kata
                i = 0;
                while ((strcmp(getckata(), datPen[i].kode) != 0) && (strcmp(datPen[i].kode, "####") != 0))      //mencari data
                {   
                    i++;                                                                     //increment
                }

                if((strcmp(datPen[i].kode, "####") == 0))                                    //jika kode tidak ditemukan
                {
                    printf("Data tidak ditemukan!\n");
                }
                else                                                                         //jika ditemukan
                {
                    while(strcmp(datPen[i].kode, "####") != 0)                               //jika kode buku bukan EOP
                    {
                        datPen[i] = datPen[i+1];                                             //masukkan data ke i ke indeks selanjutnya
                        i++;                                                                 //increment
                    }
                    datPen[i] = datPen[i+1];                                                 //masukkan data ke i ke indeks selanjutnya

                    writePen(penulis, n, datPen);                                            //lakukan proses menulis data penulis
                }
                
            }
        }

        //QUERY SELECT
        else if(strcmp(getckata(), "SELECT") == 0)
        {
            inc(pita);                                                                      //maju satu kata
            if(strcmp(getckata(), "tbuku") == 0)                                            //jika yang dituju tabel buku
            {
                buku = fopen("tbuku.dat", "r");                                             //open file buku
                a = readBuku(buku, datBuku);                                                //panggil fungsi read buku
                i = 0;                                                                      //inisialisasi
                while(strcmp(datBuku[i].kd_buku, "####") != 0)                              //selama data bukan EOP
                {
                    panjang[0][i] = strlen(datBuku[i].kd_buku);                             //panjang string kolom pertama                                                  
                    panjang[1][i] = strlen(datBuku[i].judul);                               //panjang string kolom kedua     
                    panjang[2][i] = strlen(datBuku[i].penulis);                             //panjang string kolom ketiga
                    panjang[3][i] = strlen(datBuku[i].penerbit);                            //panjang string kolom keempat
                    i++;                                                                    //increment
                } 
                fclose(buku);                                                               //menutup file buku
                printW(datBuku, a);                                                         //menampilkan tabel buku
            }
            else if(strcmp(getckata(), "tpenulis") == 0)                                    //jika yang dituju tabel penulis
            {
                penulis = fopen("tpenulis.dat", "r");                                       //buka file penulis
                a = readKode(penulis, datPen);                                              //panggil fungsi membaca file penulis   
                i = 0;                                                                      //inisialisasi
                while(strcmp(datPen[i].kode, "####") != 0)                                  //selama data bukan EOP
                {
                    panjang[0][i] = strlen(datPen[i].kode);                                 //panjang string kolom pertama                                              
                    panjang[1][i] = strlen(datPen[i].nama);                                 //panjang string kolom kedua    
                    i++;                                                                    //increment
                } 
                fclose(penulis);                                                            //menutup file penulis
                printA(datPen, a);                                                          //menampilkan tabel penulis
            }
        }

        //QUERY EXIT
        else if(strcmp(getckata(), "EXIT") == 0)                                              //jika querynya EXIT
        {
            break;                                                                            //keluar dari program                                                                        
        }
        else                                                                                  //selain seluruh query diatas
        {
            printf("Query tidak sesuai!\n");                                                //query tidak sesuai
        }
    } while(strcmp(getckata(), "EXIT") != 0);                                                 //lakukan dan berhenti ketika query EXIT
   
    return 0;                                                                                 //kembali ke 0
}