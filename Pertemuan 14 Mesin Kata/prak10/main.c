#include "header.h"

int main()
{
    int i, n;
    char tape[128];
    student data[52];

    printf("Masukkan jumlah perintah : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf(" %127[^\n]s", &tape);
        modifydata(tape, &data[i]);
    }

    for (i = 0; i < n; i++)
    {
        printf("%d. %s %s %s\n", (i+1), data[i].nim, data[i].nama, data[i].nilai);
    }

    return 0;
}

