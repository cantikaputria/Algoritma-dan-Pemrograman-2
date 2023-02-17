#include <stdio.h>
#include <string.h>

//SEQUENTIAL
/* void searching(int arr[], int n, int search)
{
    int i = 0;
    int ketemu = 0;

    while ((i < n) && (ketemu == 0))
    {
        if(arr[i] = search)
        {
            ketemu = 1;
        }
        else
        {
            i++;
        }
    }

    if(ketemu == 1)
    {
        printf("Angka %d ditemukan di index ke: %d\n", search, i-1);
    }
    else
    {
        printf("Angka yang dicari tidak ditemukan\n");
    }
}

int main()
{
    int n = 0;
    int search = 0;

    printf("Jumlah data:\n");
    scanf("%d", &n);

    int arr[n], i = 0;
    printf("Masukkan data:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Data yang dicari:\n");
    scanf("%d", &search);

    searching(arr, n, search);

    return 0;
} */

//BINARY
int binsearch(int arr[], int n, int search)
{
    int i = 0, k = 0, ketemu = 0;

    while((i <= n) && (ketemu == 0))
    {
        printf("%d\n", i); 
        k = (int)(i + n) / 2;

        if(arr[k] == search)
        {
            ketemu = 1;
        }
        else
        {
            if (arr[k] == search)
            {
                n = k - 1;
            }
            else
            {
                i = k + 1;
            }
        }
    }

    return ketemu;
}

int main()
{
    int n = 0;
    int search = 0;

    printf("Jumlah data:\n");
    scanf("%d", &n);

    int arr[n], i = 0;
    printf("Masukkan data:\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Data yang dicari:\n");
    scanf("%d", &search);

    if(binsearch(arr, n, search))
    {
        printf("Data ditemukan\n");
    }
    else
    {
        printf("Data tidak ditemukan\n");
    }

    return 0;
} 