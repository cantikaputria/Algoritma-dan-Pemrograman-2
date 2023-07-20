#include <stdio.h>
#include <string.h>

int main ()
{
    char str[5];
    scanf("%s", &str);
    int i;

    printf("%s\n", str);
    for (i=0; i < strlen(str); i++)
    {
        printf("%c\n", str[i]);
    }

    return 0;
}