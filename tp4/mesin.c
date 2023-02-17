/* Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
Soal Praktikum 4 dalam mata kuliah Algoritma dan Pemrograman 2
untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
yang telah dispesifikasikan. Aamiin.
*/

//LIBRARY
#include "header.h"

//PROSES INSERTION ASCENDING
void insert_asc(int n, lalala film[])
{
    for ( i = 1; i < n; i++)                                    //perulangan
    {
        strcpy(key, film[i].judul);                             //memasukkan nilai key (variabel penampung ) = judul
        j = i - 1;                                             

        while ((j >= 0) && (strcmp(key, film[j].judul) < 0))    //ketika j lebih dari 0 dan judul lebih besar dari temp maka..
        {
            strcpy(film[j + 1].judul, film[j].judul);           //posisi j + 1 = posisi j (dimasukkan)
            j--;
        }
        strcpy(film[j + 1].judul, key);                         //dimasukkan kembali ke variabel penampung
    }
}

//PROSES INSERTION DESCENDING
void insert_desc(int n, lalala film[])
{
    for ( i = 1; i < n; i++)                                   //perulangan
    {
        strcpy(key, film[i].judul);                            //memasukkan nilai key (variabel penampung ) = judul
        j = i - 1;

        while ((j >= 0) && (strcmp(key, film[j].judul) > 0))   //ketika j lebih dari 0 dan judul lebih kecil dari temp maka..
        {
            strcpy(film[j + 1].judul, film[j].judul);          //posisi j + 1 = posisi j (dimasukkan)
            j--;
        }
    strcpy(film[j + 1].judul, key);                            //dimasukkan kembali ke variabel penampung
    }
}

//PROSES SELECTION ASCENDING
void select_asc(int n, lalala film[])
{
     for (i = 0; i < (n - 1); i++)                                      //perulangan dengan nilai n - 1
    {
        minIndex = i;                                                   //nilai minIndek = i
        for ( j = i + 1; j < n; j++)                                    //perulangan untuk j
        {
            if (strcmp(film[j].judul, film[minIndex].judul) < 0)        //jika nilai j lebih kecil dari min Indeks maka..
            {
                minIndex = j;                                           //masukkan nilai j ke dalam minIndex
            }
            strcpy(temp, film[i].judul);                                //proses menukar, nilai judul dimasukkan ke variabel temp
            strcpy(film[i].judul, film[minIndex].judul);                //nilai judul diisi min indeks
            strcpy(film[minIndex].judul, temp);                         //nilai min indeks diisi judul (dari temp)
        }           
    } 
}

//PROSES SELECTION DESCENDING
void select_desc(int n, lalala film[])
{
    for (i = 0; i < (n - 1); i++)                                       //perulangan dengan nilai n - 1
    {
        minIndex = i;                                                   //nilai minIndek = i
        for ( j = i + 1; j < n; j++)                                    //perulangan untuk j 
        {       
            if (strcmp(film[j].judul, film[minIndex].judul) > 0)        //jika nilai j lebih kecil dari min Indeks maka..  
            {
                minIndex = j;                                           //masukkan nilai j ke dalam minIndex
            }
            strcpy(temp, film[i].judul);                                //proses menukar, nilai judul dimasukkan ke variabel temp
            strcpy(film[i].judul, film[minIndex].judul);                //nilai judul diisi min indeks
            strcpy(film[minIndex].judul, temp);                         //nilai min indeks diisi judul (dari temp)
        }          
    } 
}

//PROSES PRINT (masih salah)
void print(int n, lalala film[])
{
    printf("Daftar Film Terurut:\n");                                 //menampilkan teks ke layar
    int panjang;                                                      //deklarasi panjang untuk menampung seberapa panjang total string keseluruhan
    for (i = 0; i < n; i++)                                           //perulangan
    {
        panjang = strlen(film[i].judul) + strlen(film[i].genre) + strlen(film[i].rating) + 4;      //penghitungan nilai panjang
    }

    for (i = 0; i < panjang; i++)                                     //perulangan
    {
        printf("=");                                                  //menampilkan = ke layar
    }
    printf("\n");                                                     //newline

    int panjang_awal[n];                                              //deklarasi panjang awal
    for ( i = 0; i < n; i++)                                    
    {
        panjang_awal[i] = 0;                                    

        if (strlen(film[i].judul) >= panjang_awal[i])     
        {
            panjang_awal[i] = strlen(film[i].judul);       
        }
    }
    
    for (i = 0; i < n; i++)
    {
        printf("%s %s %s\n", film[i].judul, film[i].genre, film[i].rating);
        for (j = 0; j < panjang_awal[j] - strlen(film[i].judul); j++)
        {
            printf(" ");
        }
        printf("  \n");  
    }

    for (i = 0; i < panjang; i++)
    {
        printf("=");
    }
    printf("\n");
}


//MOHON MAAF TEH DIJADIKAN KOMENTAR KARENA MASIH ERROR
/* 
void insert2_asc(int n, lalala film[])
{
    for ( i = 1; i < n; i++)
    {
        key1 = film[i].rating;
        j = i - 1;

        while ((j >= 0) && (key1 < film[j].rating))
        {
            film[j + 1].rating = film[j].rating;
            j--;
        }
        film[j + 1].rating = key1;
    }
}

void insert2_desc(int n, lalala film[])
{
    for ( i = 1; i < n; i++)
    {
        key1 = film[i].rating;
        j = i - 1;

        while ((j >= 0) && (key1 > film[j].rating))
        {
            film[j + 1].rating = film[j].rating;
            j--;
        }
        film[j + 1].rating = key1;
    }
}

void select2_asc(int n, lalala film[])
{
    for (i = 0; i < (n - 1); i++)
                {
                    minIndex = i;
                    for ( j = i + 1; j < n; j++)
                    {
                        if (film[j].rating < film[minIndex].rating)
                        {
                            minIndex = j;
                        }
                        temp1 = film[i].rating;
                        film[i].rating = film[minIndex].rating;
                        film[minIndex].rating = temp1;
                    } 
                }
}
void select2_desc(int n, lalala film[])
{
    for (i = 0; i < (n - 1); i++)
                {
                    minIndex = i;
                    for ( j = i + 1; j < n; j++)
                    {
                        if (film[j].rating > film[minIndex].rating)
                        {
                            minIndex = j;
                        }
                        temp1 = film[i].rating;
                        film[i].rating = film[minIndex].rating;
                        film[minIndex].rating = temp1;
                    } 
                }
}
*/