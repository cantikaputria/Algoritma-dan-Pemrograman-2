#include <stdio.h>

//CONTOH REKURSIF 1
/* void tulis (int n)
{
    int counter;
    counter = n;

    if (counter > 0)
    {
        printf("proses rekursif dengan nilai counter: %d\n", counter);
        counter = counter - 1;
        tulis (counter);
    }
}

int main ()
{
    tulis (10);
    return 0;
} */

//FAKTORIAL LOOPING
/* int faktorial (int n)
{
    int i, hasil = 1;
    for (i = 2; i <= n; i++)
    {
        hasil = hasil * i;
    }
    return hasil;
}

int main ()
{
    int hasil;
    hasil = faktorial(3);
    printf("hasil faktorial: %d\n", hasil);
} */

//FAKTORIAL REKURSIF
/* int faktorial (int n)
{
    printf("n = %d\n", n);
    if ((n == 0) || (n == 1))
    {
        return 1;
    }
    else
    {
        return (n * faktorial (n - 1));
    }
}

int main ()
{
    int hasil = faktorial(3);
    printf("hasil faktorial: %d\n", hasil);
    return 0;
} */

//PENJUMLAHAN REKURSIF
/* int sum (int n)  
{
    printf("n = %d\n", n);
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return (n + sum (n-1));
    }
}

int main ()
{
    int hasil = sum(4);
    printf("hasil sum: %d\n", hasil);
    return 0;
} */

//FAKTOR PERSEKUTUAN TERBESAR REKURSIF
/* int cariFPB (int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        int temp = a % b;
        return cariFPB (b, temp);
    }
}

int main ()
{
    int hasil = cariFPB(18, 12);
    printf("hasil FPB: %d\n", hasil);
    return 0;
} */

//PANGKAT REKURSIF
/* int power (int x, int y)
{
    if (y == 0)
    {
        return 1;
    }
    else
    {
        int hasil = x*power(x, y-1);
        return hasil;
    }
}

int main ()
{
    int hasil = power(2, 3);
    printf("hasil pangkat: %d\n", hasil);
    return 0;
} */

//FIBONACI BOTTOM UP REKURSIF
/*void fib (int* arr, int n, int i)
{
    if (i == 0)
    {
        arr[i] = 0;
        fib(arr, n, i+1);
    }
    else if (i == 1)
    {
        arr[1] = 1;
        fib (arr, n, 1+1);
    }
    else
    {
        if  (i < n)
        {
            arr[i] = arr[i-1] + arr[i-2];
            fib(arr, n, i+1);
        }
    }
}

int main ()
{
    int n;
    printf("masukkan bilangan fibonaci: ");
    scanf("%d", &n);
    int arr[n];

    fib(arr, n, 0);
    int i = 0;
    
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
} */

//FIBONACI TOP DOWN REKURSIF
/* int fib2(int* arr, int n)
{
    if (n < 2)
    {
        arr[n] = n;
        return n;
    }
    else
    {
        arr[n] = fib2(arr, n-1) + fib2(arr, n-2);
        return arr[n];
    }
}

int main ()
{
    int n;
    printf("masukkan bilangan fibonaci: ");
    scanf("%d", &n);
    int arr[n];

    fib2(arr, n);
    int i = 0;
    
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
} */