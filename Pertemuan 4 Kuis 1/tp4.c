/* Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
Soal Praktikum 2 dalam mata kuliah Algoritma dan Pemrograman 2
untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>
#include <string.h>

typedef struct
{
    char judul[50];
    char genre[50];
    char rating[2]; 
} lalala;

int main ()
{
    //DEKLARASI VARIABEL
    int n, i, j, minIndex;
    scanf("%d", &n);
    
    lalala film[n];

    char key[100];
    char temp[100];
    
    char patokan[100];
    char metode[100];
    char urutan[100];

    //MASUKAN USER
    for (i = 0; i < n; i++)
    {
        scanf("%s %s %s", &film[i].judul, &film[i].genre, &film[i].rating);
    }

    scanf("%s %s %s", &patokan, &metode, &urutan);

    //JIKA PATOKAN BERDASARKAN JUDUL
    if(strcmp(patokan, "judul") == 0)
    {
        //JIKA METODENYA INSERTION
        if (strcmp(metode, "insertion") == 0)
        {
            //JIKA URUTANNYA ASCENDING
            if (strcmp(urutan, "asc") == 0)
            {
                for ( i = 1; i < n; i++)
                {
                    strcpy(key, film[i].judul);
                    j = i - 1;

                    while ((j >= 0) && (strcmp(key, film[j].judul) < 0))
                    {
                        strcpy(film[j + 1].judul, film[j].judul);
                        j--;
                    }
                    strcpy(film[j + 1].judul, key);
                }
            }

            //JIKA URUTANNYA DESCENDING
            else if(strcmp(urutan, "desc") == 0)
            {
                for ( i = 1; i < n; i++)
                {
                    strcpy(key, film[i].judul);
                    j = i - 1;

                    while ((j >= 0) && (strcmp(key, film[j].judul) > 0))
                    {
                        strcpy(film[j + 1].judul, film[j].judul);
                        j--;
                    }
                    strcpy(film[j + 1].judul, key);
                }
            }
        }

        //JIKA METODENYA SELECTION
        else if (strcmp(metode, "selection") == 0)
        {
            //JIKA URUTANNYA ASCENDING
            if(strcmp(urutan, "asc") == 0)
            {
                for (i = 0; i < (n - 1); i++)
                {
                    minIndex = i;
                    for ( j = i + 1; j < n; j++)
                    {
                        if (strcmp(film[j].judul, film[minIndex].judul) < 0)
                        {
                            minIndex = j;
                        }
                        strcpy(temp, film[i].judul);
                        strcpy(film[i].judul, film[minIndex].judul);
                        strcpy(film[minIndex].judul, temp);
                    } 
                    
                } 
            }

            //JIKA URUTANNYA DESCENDING (belum jalan)
            else if(strcmp(urutan, "desc") == 0)
            {
                for (i = 0; i < (n - 1); i++)
                {
                    minIndex = i;
                    for ( j = i + 1; j < n; j++)
                    {
                        if (strcmp(film[j].judul, film[minIndex].judul) > 0)
                        {
                            minIndex = j;
                        }
                        strcpy(temp, film[i].judul);
                        strcpy(film[i].judul, film[minIndex].judul);
                        strcpy(film[minIndex].judul, temp);
                    } 
                    
                } 
            }
        }
    }
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

            //JIKA URUTANNYA DESCENDING
            else if(strcmp(urutan, "desc") == 0)
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
        }

        //JIKA METODENYA SELECTION
        else if (strcmp(metode, "selection") == 0)
        {
            //JIKA URUTANNYA ASCENDING
            if(strcmp(urutan, "asc") == 0)
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

            //JIKA URUTANNYA DESCENDING (belum jalan)
            else if(strcmp(urutan, "desc") == 0)
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
        }
    } */

    printf("Daftar Film Terurut:\n");
    int panjang;
    for (i = 0; i < n; i++)
    {
        panjang = strlen(film[i].judul) + strlen(film[i].genre) + strlen(film[i].rating) + 4;
    }

    for (i = 0; i < panjang; i++)
    {
        printf("=");
    }
    printf("\n");

    int panjang_awal[n];                                        
    for ( i = 0; i < n; i++)                                    
    {
        panjang_awal[i] = 0;                                    
    }
    
    for ( i = 0; i < n; i++)                                    
    {
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
        printf("  ");  
    }

    return 0;
}