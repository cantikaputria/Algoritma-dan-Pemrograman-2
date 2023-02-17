#include <stdio.h>
#include <string.h>

void sorting(char str[][50], int kiri, int kanan)
{
    int i, j;
    char pivot[50];
    char temp[50];

    i = kiri;
    j = kanan;

    do
    {
        while((strcmp(str[i], pivot) > 0) && (i <= j))
        {
            i++;
        }

        while((strcmp(str[i], pivot) < 0) && (i <= j))
        {
            j--;
        }
        if (i < j)
        {
            strcpy(temp, str[i]);
            strcpy(str[i], str[j]);
            strcpy(str[j], temp);
        }
    } while (i < j);
    
}

void merge()
{
    //masih bingung pas string
    int i = 0; j = 0; k = 0, l = 0;

    while ((i < indeksA) && (j < m))
}


int main ()
{
    int i, j;
    int indeks;

    //tabel 1
    scanf("%d", &indeks[0];
    char str1[indeks[1][20]];
    for (i = 0; i < n; i++)
    {
        scanf("%s", &str1[i]);
    }
    sorting();      //belum selesai

    //tabel2
    scanf("%d", &indeks[1]);
    char str2[indeks[0]+indeks[1][20]];
    for (i = 0; i < m; i++)
    {
        scanf("%c", &str2[i]);
    }
    sorting();      //belum selesai

    //tabel 3
    scanf("%d", &indeks[2]);
    char str3[x];
    for (i = 0; i < x; i++)
    {
        scanf("%c", &str3[i]);
    }
     sorting();      //belum selesai

    //merge
    char strfinal[indeks[0] + indeks[1] + indeks[2]]
    merge();

    //printf
    printf("============\n")
    {
        for ( i = 0; i < indeks[0] + indeks[1] + indeks[2]; i++ )
        {
            printf("%s\n", strfinal);
        }
        
    }


    return 0;
}