/* Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
Soal Praktikum 2 dalam mata kuliah Algoritma dan Pemrograman 2
untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
yang telah dispesifikasikan. Aamiin.
*/

//LIBRARY
#include "header.h"

//PROSEDUR
void berhenti()                                             //prosedur untuk proses input dan berhenti ketika string = stop
{
    k = 0;                                                  //iterasi eh atau inisialisasi ya lupa kangg suka ketuker
    while (strcmp(tukar_kiri[k-1],"stop")!= 0)              //ketika string dalam tukar_kiri dan "stop" != 0 proses input akan terus dilakukan, dan berhenti ketika nilainya = 0
    {                                                      
        scanf("%s", tukar_kiri[k]);                         //meminta inputan string kiri yang akan ditukar dari user

        if (strcmp(tukar_kiri[k], "stop") != 0)             //jika string dalam tukar_kiri dan "stop" != 0 maka akan meminta input untuk string_kanan, tetapi jika string kiri = 0 maka berhenti
        {
            scanf("%s", tukar_kanan[k]);                    //meminta inputan string kanan yang akan ditukar dari user
        }

        k++;                                                //iterasi atau inisialisasi (kayak tadi)
    }
}

void spasi_print1(int n, int m, basket tim[n][m])               //prosedur untuk proses perapihan matriks dan menampilkan matriks awal ke layar
{
    int panjang_awal[m];                                        //deklarasi penampung sementara panjang string
    for ( i = 0; i < m; i++)                                    //perulangan untuk menampung panjang string
    {
        panjang_awal[i] = 0;                                    //panjang string diset = 0 untuk nilai awal
    }
    
    for ( i = 0; i < n; i++)                                    //perulangan untuk mencari string terpanjang
    {
        for ( j = 0; j < m; j++)
        {
            if (strlen(tim[i][j].nama) >= panjang_awal[j])      //jika panjang string lebih besar dari panjang awal makaa...
            {
                panjang_awal[j] = strlen(tim[i][j].nama);       //nilai panjang awal = strlen dari string tsb, dan seterusnya
            }
        }
    }

    printf("Drawing Awal:\n");                                  //menampilkan teks ke layar
    for ( i = 0; i < n; i++)                                    //perulangan untuk menampilkan string matriks dan spasi
    {
        for ( j = 0; j < m; j++)
        {
            printf("%s", tim[i][j].nama);                       //menampilkan nama tim sesuai matriks
            if (j < m - 1)                                      //ketika nilai j lebih kecil dari nilai kolom - 1
            {
                for (int r = 0; r < panjang_awal[j] - strlen(tim[i][j].nama); r++)    //perulangan untuk menampilkan spasi
                {                                               //banyaknya spasi adalah panjang awal - string
                    printf(" ");                                //menampilkan spasi sisa ke layar
                }
                printf("  ");                                   //menampilkan spasi jarak normal (2) ke layar
            }
        }
        printf("\n");                                           //menampilkan newline ke layar                    
    }
}

void tukar(int n, int m, basket temp, basket tim[][m])                  //prosedur untuk proses penukaran
{
    int tanda1[k];                                                      //deklarasi penanda kiri untuk baris
    int tanda2[k];                                                      //deklarasi penanda kiri untuk kolom
    int tanda3[k];                                                      //deklarasi penanda kanan untuk baris
    int tanda4[k];                                                      //deklarasi penanda kanan untuk kolo,
    int sama=0;

    for (o = 0; o < k-1; o++)                                           //perulangan untuk seluruh proses
    {
        for ( i = 0; i < n; i++)
        {
            for ( j = 0; j < m; j++)
            {
                if ( strcmp(tukar_kiri[o], tim[i][j].nama) == 0)        //jika keduanya = 0 (sama)
                {
                    tanda1[o] = i;                                      //tandai barisnya
                    tanda2[o] = j;                                      //tandai kolomnya
                    sama++; 
                }

                else if ( strcmp(tukar_kanan[o], tim[i][j].nama) == 0)  //jika keduanya = 0 (sama)
                {
                    tanda3[o] = i;                                      //tandai barisnya
                    tanda4[o] = j;                                      //tandai kolomnya
                    sama++;
                }

                if (sama == 2)                                          //jika nilai sama = 2
                { sama = 0;
                    if (tim[tanda1[o]][tanda2[o]].rata_rata > tim[tanda3[o]][tanda4[o]].rata_rata)        //jika rata rata kiri lebih besar dari rata-rata kanna, maka tukar
                    {
                        temp = tim[tanda1[o]][tanda2[o]];                                                 //simpan sementara bagian kiri di temp
                        tim[tanda1[o]][tanda2[o]] = tim[tanda3[o]][tanda4[o]];                            //bagian kanan dimasukkan ke dalam bagian kiri
                        tim[tanda3[o]][tanda4[o]] = temp;                                                 //bagian kiri yang disimpan di temp dimasukkan ke bagian kanan
                    }
                } 
            } 
        }
    }
}

void spasi_print2(int n, int m, basket tim[n][m])                          //prosedur untuk proses perapihan matriks dan menampilkan matriks awal ke layar
{
    int panjang_akhir[m];                                                  //deklarasi penampung sementara panjang string
    for ( i = 0; i < m; i++)                                               //perulangan untuk menampung panjang string
    {
        panjang_akhir[i] = 0;                                              //panjang string diset = 0 untuk nilai awal
    }   

    for ( i = 0; i < n; i++)                                               //perulangan untuk mencari string terpanjang
    {
        for ( j = 0; j < m; j++)
        {
            if (strlen(tim[i][j].nama) >= panjang_akhir[j])                //jika panjang string lebih besar dari panjang akhir makaa...
            {
                panjang_akhir[j] = strlen(tim[i][j].nama);                 //nilai panjang akhir = strlen dari string tsb, dan seterusnya
            }
        }
    }

    printf("\nDrawing Akhir:\n");                                          //menampilkan teks ke layar
    for ( i = 0; i < n; i++)                                               //perulangan untuk menampilkan string matriks dan spasi
    {
        for ( j = 0; j < m; j++)                                           
        {
            printf("%s", tim[i][j].nama);                                  //menampilkan nama tim sesuai matriks
            if (j < m - 1)                                                 //ketika nilai j lebih kecil dari nilai kolom - 1
            {
                for (int r = 0; r < panjang_akhir[j] - strlen(tim[i][j].nama); r++)     //perulangan untuk menampilkan spasi
                {                                                          //banyaknya spasi adalah panjang akhir - string
                    printf(" ");                                           //menampilkan spasi sisa ke layar
                }
                printf("  ");                                              //menampilkan spasi jarak normal (2) ke layar
            }
        }
        printf("\n");                                                      //menampilkan newline ke layar 
    }
}