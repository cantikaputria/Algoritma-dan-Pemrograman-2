#include "header.h"

/* MENAMPILKAN ISI KATA
int main ()
{
    char pita[300];
    printf("masukkan kalimat pada pita\n");
    scanf("%299[^\n]s", &pita);

    STARTKATA(pita);
    printf("%s\n", GETCKATA());

    while(EOPKATA(pita) == 0)
    {
        INCKATA(pita);
        printf("%s\n", GETCKATA());
    }

    return 0;
} */

//MENGHITUNG BANYAK KATA DALAM PITA
int main ()
{
    char pita[300];
    int jkata = 0;
    printf("masukkan kalimat pada pita\n");
    scanf("%299[^\n]s", &pita);

    STARTKATA(pita);
    while(EOPKATA(pita) == 0)
    {
        jkata++;
        INCKATA(pita);
    }

    if(GETPANJANGKATA() > 0)
    {
        jkata++;
    }

    printf("%d\n", jkata);
    return 0;
}