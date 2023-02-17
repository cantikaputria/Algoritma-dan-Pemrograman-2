#include <stdio.h>

//INSERTION SHORT DARI KECIL KE BESAR
/* int main ()
{
    int tabInt[10] = {34, 67, 23, 28, 98, 15, 89, 67, 28, 18};
    int i, j, data_sisip;

    for ( i = 1; i < 10; i++)
    {
        data_sisip = tabInt[i];
        j = i - 1;
        while ((data_sisip < tabInt[j]) && (j >= 0))
        {
            tabInt[j+1] = tabInt[j];
            j = j - 1;
        }
        tabInt[j+1] = data_sisip; 
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", tabInt[i]);
    }
    
    return 0;
} */

//INSERTION SHORT DARI BESAR KE KECIL (belum)
/* int main ()
{
    int tabInt[10] = {34, 67, 23, 28, 98, 15, 89, 67, 28, 18};
    int i, j, data_sisip;

    for ( i = 1; i < 10; i++)
    {
        data_sisip = tabInt[i];
        j = i - 1;
        while ((data_sisip < tabInt[j]) && (j >= 0))
        {
            tabInt[j+1] = tabInt[j];
            j = j - 1;
        }
        tabInt[j+1] = data_sisip; 
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", tabInt[i]);
    }
    
    return 0;
} */

//SELECTION SHORT DARI KECIL KE BESAR
int main ()
{
    int tabInt[10] = {34, 67, 23, 28, 98, 15, 89, 67, 28, 18};
    int i, j, temp, minIndeks;

    for ( i = 0; i < (10 - 1); i++)
    {
        minIndeks = i;
        for ( j = i + 1; j < 10; j++)
        {
            if (tabInt[minIndeks] > tabInt[j])
            {
                minIndeks = j;
            }
        }
        temp = tabInt[i];
        tabInt[i] = tabInt[minIndeks];
        tabInt[minIndeks] = temp;
    }

    for ( i = 0; i < 10; i++)
    {
        printf("%d\n", tabInt[i]);
    }

    return 0;
}