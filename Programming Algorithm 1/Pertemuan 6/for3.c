#include <stdio.h>

int main ()
{
    int nilai, i, hasil;
    hasil = 0;
    printf("masukkan nilai angka berapa yg akan diulang:\n");
    scanf("%d", &nilai);
    
    for (i = 1; i <= nilai; i++)
    {
    hasil = hasil + i;
    }
    printf("%d\n", hasil);

    return 0;
}