#include <stdio.h>

typedef struct 
{
 int x, y;
} titik;

int main ()
{
    int n, i, jx = 0, jy = 0;

    scanf("%d", &n);

    titik ikatantitik[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &ikatantitik[i].x);
        scanf("%d", &ikatantitik[i].y);
    }

    for (i = 0; i < n; i++)
    {
        if ((ikatantitik[i].x % 2 == 1) && (ikatantitik[i].x % 2 < ikatantitik[i].y))
        {
            printf("%d %d\n", ikatantitik[i].x, ikatantitik[i].y);
        }
    }

    return 0;
}