#include <stdio.h>

int main ()
{
    int tabInt [5];
    int penghitung;

    for (penghitung=0; penghitung < 5; penghitung++)
    {
        tabInt [penghitung] = penghitung;
    }

    for (penghitung = 0; penghitung < 5; penghitung++)
    {
        printf("%d", tabInt[penghitung]);
    }

    return 0;
}