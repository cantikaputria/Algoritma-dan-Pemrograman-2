#include <stdio.h>

typedef struct
{
    int pembilang;
    int penyebut;
}pecahan;

void bubble(pecahan array[])
{
    int i, swap;
    do
    {
        swap = 0;
        for ( i = 0; i < n - 1; i++)
        {
            if(array[i].pembilang/array[i].penyebut) > ((array[i+1].pembilang/array[i+1].penyebut)
            {
                temp = array[i].pembilang;
                array[i].pembilang= array[i+1].pembilang;
                array[i+1].pembilang = temp;

                temp = array[i].penyebut;
                array[i].penyebut = array[i+1].penyebut;
                array[i+1].penyebut = temp;

                swap = 1;
            }
        }
    }while (swap == 1);
}


int main ()
{
    int n, i;
    scanf("%d", &n);
    pecahan array[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d %d", &array[i].pembilang, &array[i].penyebut);
    }

    char pilih;
    scanf("%d", &pilih);

    if (pilih == 'b')
    {
        bubble(array);
    }
    /*
    else{

    } */
   
    return 0;
}

//note : masih bingung teh kadang kalo udah ke soal