/* Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
soal UTS 1 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti 
yang telah dispesifikasikan. Aamiin.
*/


#include <stdio.h>

int main()
{

    int n, i, x, y, m, j;
    int jumlah[100] = {0};

    scanf("%d", &n);
    char arr1[n];
    
    for (i = 0; i < n; i++)
    {
        scanf(" %c", &arr1[i]);
    }
   
    scanf("%d %d", &x, &y);
    
    scanf("%d", &m);
    char arr2[m];
   
    for (i = 0; i < m; i++)
    {
        scanf(" %c", &arr2[i]);
    }
    
    for (i = x; i <= y; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (arr1[i] == arr2[j])
            {
                jumlah[j]++;
            }
        }
    }
    
    for (i = 0; i < m; i++)
    {
        if (i == m - 1)
        {
            printf("%d", jumlah[i]);
        }
        else
        {
            printf("%d ", jumlah[i]);
        }
    }
    
    printf("\n");
    
   return 0;
}