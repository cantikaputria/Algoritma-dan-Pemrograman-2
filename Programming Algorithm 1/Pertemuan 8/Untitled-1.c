#include <stdio.h>
int main()
{
    int n, a[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int temp;
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Nilai Maksimum Kedua : %d\n", a[1]);
    printf("Nilai Minimum Kedua : %d\n", a[n - 2]);
    return 0;
}