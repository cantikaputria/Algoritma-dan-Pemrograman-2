#include <stdio.h>
#include <math.h>

int main()
{
    int n, a, x = 0, r;

    scanf("%d", &n);
    float arr[100], b;
    for (int i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        a = arr[i];
        b = (arr[i] - a) * 100;
        
        r = round(b);
        if (a % r == 0)
        {
            x++;
        }
    }

    if (x >= 3)
    {
        printf("yes");
    }

    else
    {
        printf("no");
    }
    
    printf("\n");
    return 0;
}
