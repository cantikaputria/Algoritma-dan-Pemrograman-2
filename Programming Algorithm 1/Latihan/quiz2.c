/* Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
Soal Kuis 2 Nomor 2 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti 
yang telah dispesifikasikan. Aamiin.
*/

//library
#include <stdio.h>
#include <string.h>

int main ()
{
    int i = 0;
    int j, n;
    scanf("%d", &n);

    char arrstr[n][200];
    for (i = 0; i < n; i++)
    {
        scanf("%s", arrstr[i]);
    }

    for ( i = 0; i < n; i++)
    {
        for (j = strlen(arrstr[i]) - 1; j >= 0; j--)
        {
            if (strlen(arrstr[i]) <= strlen(arrstr[n]))
            {
                printf("\n");
                printf("%c", arrstr[i][j]);
            }
            else
            {
                 printf("%c", arrstr[i][j]);
            }
            printf("\n");
        }
    }


  return 0;
}