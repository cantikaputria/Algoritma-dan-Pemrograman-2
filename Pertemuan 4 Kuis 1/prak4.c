#include <stdio.h>
#include <string.h>

int main ()
{
    int n, i, j;
    scanf("%d", &n);

    char str[n][50];
    for (i = 0; i < n; i++)
    {
        scanf("%s", &str[i]);        
    }
    
    char cari[100];
    scanf("%s", &cari);

    char key[100];
    char temp[100];

    if(strcmp(cari, "insertion") == 0)
    {
        for ( i = 0; i < n; i++)
        {
            strcpy(key, str[i]);
            j = i - 1;

            while ((j >= 0) && (strcmp(key, str[j]) < 0))
            {
                strcpy(str[j + 1], str[j]);
                j--;
            }
            strcpy(str[j + 1], key);
        }
    }

    //baru selesai yang insertion

    printf("Hasil sorting:\n");
    for (i = 0; i < n; i++)
    {
        printf("%s\n", str[i]);
    }
    
    return 0;
}