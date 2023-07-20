/* Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
Tugas Praktikum 8 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti 
yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>
#include <string.h>

int main ()
{
    int n, m;
    int i, j, k, akhir;
    char str[50];
    char kode[50];
    char perintah[50];
    char perintah1[50] = "maju";
    char perintah2[50] = "mundur";
    char pindah[50];

    scanf("%d %d", &n, &m);
    scanf("%s", &str);

    for (i = 0; i < n; i++)
    {
        scanf("%s", &kode);
    }
    
    scanf("%s", &perintah);

    if (perintah[i] == perintah1[i])
    {   
        int panjang[n];
        for (i = 0; i < n; i++)
        {   
            panjang[i] = 0;
            panjang[i] = strlen(str[i]);
            for (j = 0; j < panjang[i]; j++)
            {
                str[j] = str[j] += kode[j];
                if (str[j] < 97)
                {
                    str[22] == 122;
                }
                else
                
                (


                )
                
              
            }
            akhir = j + 1;
        }
    }

    return 0;
}