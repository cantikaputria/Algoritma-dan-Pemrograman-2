/* Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
Tugas Praktikum 5 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti 
yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>
#include <string.h>

int main ()
{
    char string[50];
    scanf("%s", &string);
    
    //mengubah tanda seru sebagai batas
    if (string[50] == '!')
    {
        string[50] == '\0';
    }
   
   //membagi dua string
   char depan[50];
   char belakang[50];
   int panjang;
   
   int i = 0;
   while (depan[i] != '!')
   {
      string[i] = depan[i];
   }

   panjang = (strlen(string) - strlen(depan) - 1);

   printf("%s", string);
   printf("%s", depan);
   printf("%d", panjang);


   /*
   i = 0;
   while (i = strlen(string) + 1)

   
   //menghilangkan huruf
   int i, j, n;
   n = strlen(string);
   for (i = 0; i < n; i++)
   {
        if (string[i] == belakang)
        {
            for (j=i; j < i + n; j++)
            {
                string[j] = string[j + 1];
            }
            n--;
            i--;
        }   
   }
*/

    return 0;
}