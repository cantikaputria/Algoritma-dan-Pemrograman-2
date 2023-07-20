#include <stdio.h>

int main ()
{
    int n;
    scanf("%d", &n);
    int i;
    int tabInt[n];

    for (i=0; i < n; i++)
    {
        scanf("%d", &tabInt[i]);
    }

    int jumlah = 0;
    for (i=0; i < n; i++)
    { if (tabInt[1] % 2 == 1)
        {
        jumlah++;
        }
    }
    printf("banyaknya elemen yang termasuk ganjil: %d \n", jumlah);
    
    return 0;
}