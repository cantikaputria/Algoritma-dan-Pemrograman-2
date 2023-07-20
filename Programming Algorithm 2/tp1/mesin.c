/* Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
Soal Praktikum 1 dalam mata kuliah Algoritma dan Pemrograman 2
untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

void input_matriks(int matriks[][n])           //prosedur untuk mengisi nilai matriks dari user
{
    for (i = 0; i < m; i++)                    //perulangan untuk baris dengan batas m
    {
        for (j = 0; j < n; j++)                //perulangan untuk kolom dengan batas n
        {
            scanf("%d", &matriks[i][j]);       //meminta user mengisi nilai matriks
        }
    }
}

void input_kode (int a, char kode[a])          //prosedur untuk mengisi kode yang akan ditransformasi
{
    for (i = 0; i < a; i++)                    //perulangan dengan batas jumlah transformasi
    {
        scanf(" %c", &kode[i]);                //meminta isi kode dari user
    } 
}

void kode_d(int a, int matriks[][n], int transpose[][m])       //proses transformasi kode D (transpose)
{
    switch (a)
    {
    case 0:                                                    //ketika nilai jumlah = 0
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {                                                                                   
                printf("%d ", matriks[i][j]);                  //maka posisi yang ditampilkan tetap
            }
            printf("\n");
        }
    break;

    case 1:                                                    //ketika nilai jumlah = 1
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                transpose[j][i] = matriks[i][j];              //nilai matriks dimasukan kedalam variabel transpose
            }                                                 //baris menjadi kolom, kolom menjadi baris
        }

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {                                                                                   
                printf("%d ", transpose[i][j]);               //menampikan hasil transpose ke layar
            }
            printf("\n");
        }
    break;

    case 2:                                                  //ketika nilai jumlah = 2
        for (i = 0; i < m; i++) 
        {
            for (j = 0; j < n; j++)
            {                                                                                   
                printf("%d ", matriks[i][j]);                //nilai matriks yang ditampilkan tetap
            }
            printf("\n");
        }
    break;

    case 3:                                                   //ketika nilai jumlah = 3
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                transpose[j][i] = matriks[i][j];              //baris menjadi kolom, kolom menjadi baris
            }
        }

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {                                                                                   
                printf("%d ", transpose[i][j]);               //menampilkan hasil transpose ke layar
            }
            printf("\n");
        }
    break;
            
    default:
    break;
    }
}

void kode_b(int a, int matriks[][n], int transpose[][m], int cermin[][n], int cermin1[][m])   //proses transformasi kode B (rotasi ke kanan)
{
    switch(a)
    {
    case 0:                                                       //ketika nilai jumlah = 0
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {                                                                                   
                printf("%d ", matriks[i][j]);                    //nilai matriks yang ditampilkan tetap
            }
            printf("\n");
        }
    break;

    case 1:                                                      //ketika nilai jumlah = 1
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                transpose[j][i] = matriks[i][j];                //proses pertama menukar baris menjadi kolom dan sebaliknya serta dimasukkan ke variabel transpose
            }
        }

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                cermin1[i][j] = transpose[i][(m-1)-j];          //kolom dikurangi satu sehingga baris bertambah satu
            }
        }

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                printf("%d ", cermin1[i][j]);                   //menampilkan hasil rotasi ke layar
            }
                printf("\n");
            }
        break;

    case 2:                                                     //jika nilai jumlah = 2
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                cermin[i][j] = matriks[(m-1)-i][(n-1)-j];       //baris dikurangi satu dan kolom dikurangi satu
            }
        }

        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d ", cermin[i][j]);                   //menampilkan hasil rotasi ke layar
            }
            printf("\n");
        }
    break;

    case 3:                                                     //jika nilai jumlah = 3
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                transpose[j][i] = matriks[i][j];                //baris diubah jadi kolom dan sebaliknya
            }
        }

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                cermin1[i][j] = transpose[(n-1)-i][j];          //baris dikurangi satu sehingga kolom bertambah
            }
        }

        for (i = 0; i < n; i++)
        {
            for (j= 0; j < m; j++)
            {
                printf("%d ", cermin1[i][j]);                    //menampilkan hasil ke layar
            }
            printf("\n");
        }
    break;

    default:
    break;
    }
}

void kode_c(int a, int matriks[][n], int transpose[][m], int cermin[][n], int cermin1[][m])    //proses transformasi kode C (rotasi ke kiri)
{
    switch(a)
    {
    case 0:                                                 //jika nilai jumlah = 0
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {                                                                                   
                printf("%d ", matriks[i][j]);               //maka matriks yang ditampilkan tetap
            }
            printf("\n");
        }
    break;

    case 1:                                                 //jika nilai jumlah = 1
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                transpose[j][i] = matriks[i][j];           //baris diubah menjadi kolom dan sebaliknya
            }
        }

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                cermin1[i][j] = transpose[(n-1)-i][j];    //jumlah baris dikurangi satu sehingga kolom bertambah
            }
        }

        for (i = 0; i < n; i++)
        {
            for (j= 0; j < m; j++)
            {
                printf("%d ", cermin1[i][j]);             //menampilkan hasil ke laya
            }
            printf("\n");
        }
    break;

    case 2:                                                   //jika nilai jumlah  2
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                cermin[i][j] = matriks[(m-1)-i][(n-1)-j];     //jumlah baris dan kolom dikurangi satu
            }
        }

        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d ", cermin[i][j]);                //menampilkan hasil ke layar
            }
            printf("\n");
        }
    break;

    case 3:                                                  //jika nilai jumlah = 3
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                transpose[j][i] = matriks[i][j];             //mengubah baris menjadi kolom dan sebaliknya
            }
        }

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                cermin1[i][j] = transpose[i][(m-1)-j];       //jumlah kolom dikurangi satu sehingga baris bertambah
            }
        }

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                printf("%d ", cermin1[i][j]);                 //menampilkan hasil ke layar
            }
            printf("\n");
         }
    break;
            
    default:
    break;
    }
}

void kode_a(int a, int matriks[][n], int cermin1[][n])
{
    switch(a)
    {
    case 0:
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cermin1[i][j] = matriks[(n-1)-i][j];             
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j= 0; j < m; j++)
        {
            printf("%d ", cermin1[i][j]);                    
        }
        printf("\n");
    }
    break;

    case 1:
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cermin1[i][j] = matriks[(n-1)-i][j];             
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j= 0; j < m; j++)
        {
            printf("%d ", cermin1[i][j]);                    
        }
        printf("\n");
    }
    break;

    case 2:
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cermin1[i][j] = matriks[(n-1)-i][j];             
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j= 0; j < m; j++)
        {
            printf("%d ", cermin1[i][j]);                    
        }
        printf("\n");
    }
    break;

    case 3:
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cermin1[i][j] = matriks[(n-1)-i][j];             
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j= 0; j < m; j++)
        {
            printf("%d ", cermin1[i][j]);                    
        }
        printf("\n");
    }
    break;
    }
}