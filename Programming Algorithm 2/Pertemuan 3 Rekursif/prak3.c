#include <stdio.h>

//NOMOR 1
void abjad(int i)
{
    printf("%c\n", i);

    if (i > 'a')
    {
        abjad(i - 1);
    }
}

int main ()
{
    abjad('z');

    return 0;
}