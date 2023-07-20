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
        jx += ikatantitik[i].x;
        jy += ikatantitik[i].y;
    }

    printf("%d %d", jx, jy);

    return 0;
}