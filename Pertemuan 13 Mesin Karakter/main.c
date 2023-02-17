#include "mesinkarakter.h"

int main()
{
    char pita[50];
    printf("Masukkan kalimat pada pita:\n");
    scanf("%49[^\n]s", &pita);

    start(pita);
    printf("%c\n", getcc());

    while(EOP() == 0)
    {
        inc(pita);
        printf("%c\n", getcc());
    }
    return 0;
}