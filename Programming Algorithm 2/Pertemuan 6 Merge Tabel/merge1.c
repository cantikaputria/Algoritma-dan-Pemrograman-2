#include <stdio.h>

//MERGE TABEL TIDAK TERURUT
/* int main ()
{
    int tabel1[5];
    int tabel2[3];
    int tabel3[8];
    int penghitung;

    for(penghitung = 0; penghitung < 5; penghitung++)
    {
        printf("masukkan angka:\n");
        scanf("%d", &tabel1[penghitung]);
    }

     for(penghitung = 0; penghitung < 3; penghitung++)
    {
        printf("masukkan angka:\n");
        scanf("%d", &tabel2[penghitung]);
    }

     for(penghitung = 0; penghitung < 5; penghitung++)
    {
       
        tabel3[penghitung] = tabel1[penghitung];
    }

    for(penghitung = 5; penghitung < 8;  penghitung++)
    {
        tabel3[penghitung] = tabel2[penghitung - 5];
    }
    
    for(penghitung = 0; penghitung < 8; penghitung++)
    {
        printf("%d\n", tabel3[penghitung]);
    }

    return 0;
} */

//MERGE TABEL TERURUT
int main ()
{
    int tabel1[5];
    int tabel2[3];
    int tabel3[8];
    int penghitung;
    int penghitung1;
    int penghitung2;
    int penghitung3;

    for(penghitung = 0; penghitung < 5; penghitung++)
    {
        printf("masukkan angka:\n");
        scanf("%d", &tabel1[penghitung]);
    }

     for(penghitung = 0; penghitung < 3; penghitung++)
    {
        printf("masukkan angka:\n");
        scanf("%d", &tabel2[penghitung]);
    }

    penghitung1 = 0;
    penghitung2 = 0;
    penghitung3 = 0;

    while ((penghitung1 < 5) && (penghitung2 <3))
    {
        if (tabel1[penghitung1] < tabel2[penghitung2])
        {
            tabel3[penghitung3] = tabel1[penghitung1];
            penghitung1 = penghitung1 + 1;
            penghitung3 = penghitung3 + 1;
        }

        else if (tabel2[penghitung1] < tabel1[penghitung1])
        {
            tabel3[penghitung3] = tabel2[penghitung2];
            penghitung2 = penghitung2 + 1;
            penghitung3 = penghitung3 + 1;
        }

        else
        {
            tabel3[penghitung3] = tabel1[penghitung1];
            penghitung1 = penghitung1 + 1;
            penghitung3 = penghitung3 + 1;
            tabel3[penghitung3] = tabel2[penghitung2];
            penghitung2 = penghitung2 + 1;
            penghitung3 = penghitung3 + 1;
        }
    }

    if(penghitung1 < 5 )
    {
        for (penghitung = penghitung1; penghitung < 5; penghitung++)
        {
            tabel3[penghitung3] = tabel1[penghitung];
            penghitung3 = penghitung3 + 1;
        }
    }

     if(penghitung2 < 3 )
    {
        for (penghitung = penghitung2; penghitung < 3; penghitung++)
        {
            tabel3[penghitung3] = tabel2[penghitung];
            penghitung3 = penghitung3 + 1;
        }
    }

     for(penghitung = 0; penghitung < 8; penghitung++)
    {
        printf("%d\n", tabel3[penghitung]);
    }

    return 0;
}