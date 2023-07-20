#include <stdio.h>

//INSERTION MODUL
/* void printArray(int n, int array[])
{
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
} */

/* int main ()
{
    int i, j, key;
    int array[8] = {6, 3, 4 ,7, 2, 5, 8, 1};

    printf("Array sebelum sorting:\n");
    printArray(8, array);

    for ( i = 1; i < 8; i++)
    {
        key = array[i];
        j = i - 1;

        while ((j >= 0) && (key < array[j]))
        {
            array[j+1] = array[j];
            j--;
        }

        array[j+1] = key;
    }

    printf("Array setelah sorting:\n");
    printArray(8, array);
    
    return 0;
} */

//SELECTION
void printArray(int n, int array[])
{
    int i;
    for ( i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main ()
{
    int i, j, temp, minIndex;
    int array[8] = {6, 3, 4, 7, 2, 5, 8, 1};

    printf("Array sebelum sorting:\n");
    printArray(8, array);

    for ( i = 0; i < (8 - 1); i++)
    {
        minIndex = i;

       for ( j = i + 1; j < 8; j++)
       {
           if (array[minIndex] > array[j])
           {
               minIndex = j;
           }
       }

       temp = array[i];
       array[i] = array[minIndex];
       array[minIndex] = temp;
    }

    printf("\nArray setelah sorting:\n");
    printArray(8, array);
    
    return 0;
}