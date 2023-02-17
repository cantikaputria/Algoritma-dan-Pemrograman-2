#include "header.h"

int main()
{
    char pita[50];
    char temp;
    
    int n = 0;
    scanf("%49[^\n]s", &pita);

    start(pita);

    while(EOP() == 0)
    {
        printf("%c\n", getcc());
        temp = getcc();
        inc(pita);
        if(EOP() == 0)
        {
            if((temp == 's') && (getcc() == 'e'))
            {
                n++;
            }
        }
    }

    printf("\njumlah suku kata: %d\n", n);

    return 0;
}