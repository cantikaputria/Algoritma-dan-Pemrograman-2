#include <stdio.h>

typedef struct 
{
    int nim, usia;
    char kelas;
} datamhs;

/*
int main ()
{
    int i;
    datamhs depilkom[2];

    depilkom[0].nim = 2103727;
    depilkom[0].kelas = 'A';
    depilkom[0].usia = 17;

    depilkom[1].nim = 210009;
    depilkom[1].kelas = 'B';
    depilkom[1].usia = 19;

    for (i = 0; i < 2; i++)
    {
        printf("No. Absen : %d\n", i+1);
        printf("Nim       : %d\n", depilkom[i].nim);
        printf("Kelas     : %c\n", depilkom[i].kelas);
        printf("Usia      : %d\n\n", depilkom[i].usia);
    }

    return 0;
}
*/

int main ()
{
    int i, n;
    scanf("%d", &n);

    datamhs depilkom[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d %c %d", &depilkom[i].nim, &depilkom[i].kelas, &depilkom[i].usia);
    }
   
    for (i = 0; i < n; i++)
    {
        printf("No. Absen : %d\n", i+1);
        printf("Nim       : %d\n", depilkom[i].nim);
        printf("Kelas     : %c\n", depilkom[i].kelas);
        printf("Usia      : %d\n\n", depilkom[i].usia);
    }

    return 0;
}