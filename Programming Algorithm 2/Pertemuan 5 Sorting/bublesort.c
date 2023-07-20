#include <stdio.h>

//BUBLE SORT
int main ()
{
    int tabInt[5] = {34, 67, 33, 28, 98};
    int i, temp, tukar;
    
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n", tabInt[i]);
    }

    do
    {
        tukar = 0;
        for ( i = 0; i < (5-1); i++)
        {
            if (tabInt[i] > tabInt[i+1])
            {
                temp = tabInt[i];
                tabInt[i] = tabInt[i+1];
                tabInt[i+1] = temp;
                tukar = 1; 
            }
        }
        
    } while (tukar == 1);

    printf("Setelah diurutkan:\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n", tabInt[i]);
    }

    return 0;
}

//QUICK SORT
// void quickSort(int l, int r)
// {
//     int i, j, temp;
//     i = l; j = r;

//     do
//     {
//         while((tabInt[i]  < tabInt[r]) && (i <= j))
//         {
//             i = i + 1;
//         }

//         while((tabInt[i]  > tabInt[r]) && (i <= j))
//         {
//             j = j - 1;
//         }

//          if (i < j)
//         {
//             temp = tabInt[i];
//             tabInt[i] = tabInt[j];
//             tabInt[j] = temp;
//             i = i + j;
//             j = j - 1;
//         }
//     } while (i < j);

//     tulis();

//     if ( l < j)
//     {
//         quicksort(l, j);
//     }
//     if ( i < r)
//     {
//         quicksort(i, r);
//     }
// }

// int tabInt[10] = {34, 67, 23, 28, 98, 15, 89, 67};

// void tulis(){
//     int i;
//     for ( i = 0; i < 10; i++)
//     {
//         printf("%d\n", tabInt[i]);
//     }   
// }

// int main ()
// {
//     tulis();
//     quicksort(0, 9);
//     return 0;
// }