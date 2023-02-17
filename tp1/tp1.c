/* Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
Soal Praktikum 1 dalam mata kuliah Algoritma dan Pemrograman 2
untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

int main ()
{
    //INPUTAN USER
    scanf("%d %d", &m, &n);                  //meminta ukuran matriks dari user

    //DEKLARASI VARIABEL
    int matriks[m][n];                       //deklarasi array int untuk menampung nilai matriks
    int transpose[n][m];                     //deklarasi array int untuk menampung hasil matriks yang ditranspose
    int cermin[m][n];                        //deklarasi array int untuk menampung hasil matriks pada proses refleksi dan rotasi
    int cermin1[n][m];                       //deklarasi array int untuk menampung hasil matriks pada proses refleksi dan rotasi
   
    //PROSES PENGISIAN MATRIKS
    input_matriks(matriks);
    
    //MEMINTA MASUKAN JUMLAH TRANSFORMASI
    int a;                                   //variabel untuk menampung jumlah transformasi
    scanf("%d", &a);                         //meminta nilai jumlah transformasi dari user
    char kode[a];                            //deklarasi array char untuk menampung kode
    a = a % 4;                               //perulangan proses transformasi

    //MEMINTA MASUKKAN KODE SESUAI JUMLAH A
    input_kode(a, kode);                       

    //PROSES (AWAL)
    for ( i = 0; i < a; i++)                   
    {
        if (kode[i] == 'D')                                     //jika user menginput kode D
        {
            kode_d(a, matriks, transpose);                      //maka matriks akan ditranspose
        }

        else if (kode[i] == 'B')                                //jika user menginput kode B
        {
            kode_b(a, matriks, transpose, cermin, cermin1);     //maka matriks akan dirotasi ke kanan
        }

        else if (kode[i] = 'C')                                 //jika user menginput kode C
        {
            kode_c(a, matriks, transpose, cermin, cermin1);     //maka matriks akan dirotasi ke kiri
        }

        else if(kode[i] = 'A')                                  //jika user menginput kode A
        {
            kode_a(a, matriks, cermin1);                         //maka matriks di refleksi ke atas
        }
    }

    /* PROSES (SETELAH NYADAR YANG ATAS SALAH, tapi kayaknya masih salah juga:")
    int temp[m][n];
    for ( i = 0; i < a; i++)                   
    {
        if (kode[i] == 'A')                                     
        {
            for (i = 0; i < n; i++)
            {       
                for (j = 0; j < m; j++)
                {
                    temp[i][j] = matriks[(n-1)-i][j];             
                }
            }                    
        }

        else if (kode[i] == 'B')                               
        {
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    transpose[j][i] = matriks[i][j];              
                }
            }

            for (i = 0; i < n; i++)
            {
                for (j = 0; j < m; j++)
                {
                    temp[i][j] = transpose[i][(m-1)-j];          
                }
            }     
        }

        else if (kode[i] = 'C')                                 
        {
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    transpose[j][i] = matriks[i][j];           
                }
            }

            for (i = 0; i < n; i++)
            {
                for (j = 0; j < m; j++)
                {
                    temp[i][j] = transpose[(n-1)-i][j];    
                }
            }  
        }

        else if(kode[i] = 'D')                                  
        {
            for (i = 0; i < m; i++)
            {
                for (j = 0; j < n; j++)
                {
                    temp[j][i] = matriks[i][j];              
                }                                                 
            }                
        }
    }

    for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {                                                                                   
                printf("%d ", transpose[i][j]);               
            }
            printf("\n");
        }

    1. masih belum ada keterkaitan antar kode, misal input 3 kali A D B
    2. belum dibandingkan
    3. if statement 
    */



    return 0;
}

/*
Notes :
kang ini logic saya kayaknya masih salah deh wkwk harusnya langsung aja ya si proses jumlah
transformasinya ga usah di mod, semoga masih dapet nilai proses:" makasih kang
*/