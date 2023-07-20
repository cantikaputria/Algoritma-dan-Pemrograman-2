/* Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
soal Evaluasi 1 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanN.ya maka saya tidak melakukan kecurangan seperti 
yang telah dispesifikasikan. Aamiin.
*/

//library
#include <stdio.h>

int main ()
{
   int m, n, i, j;               //deklarasi variabel m sebagai jumlah huruf, n sebagai ukuran pola, i sebagai baris, dan j sebagai kolom
   scanf("%d", &m);              //meminta masukan user untuk jumlah huruf
 
   char arr[m];                  //deklarasi array untuk isi indeks
   for(i = 0; i < m; i++)
    {
        scanf(" %c", &arr[m]);    //meminta masukan user untuk isi indeks array
    }

    scanf("%d", &n);             //meminta masukan user untuk ukuran pola

    for (i = n - 1; i <= n; i++)
    {
        for (j = (n /10) + 1; j >= i; j--) 
        {   
           printf(" ");   
        }

        for (j = 1; j <= i; j++)
        {   
            printf("%c", arr[i]);
        }

        for (j = 1; j <= i; j++) 
        {   
           printf(" ");
        }

        for (j = 1; j <= i; j++)
        {   
            printf("%c", arr[i]);
        }

        for (j = 2 + (n /2 ); j >= i; j--) 
        {   
           printf(" ");   
        }
        printf("\n");
    } 
   
   for (i = 1; i <= n; i++)
   {
       for (j = 1; j <= i; j++)
       {
           printf("%c", arr[i]);
       }

       for (j = 1; j <= i; j++)
       {
           printf(" ");
       }

       for (j = 1; j <= i; j++)
       {
           printf("%c", arr[i]);
       }
       printf("\n");
   }

   for (i = 1; i <= n; i++)
   {
       for (j = (n * 2) + 1; j <= i; j++)
       {
           printf("%c", arr[i]);
       }
       printf("\n");
   }
  /*
  malam kang teh, kode program saya memang sangat absurd dan tidak jelas jalannya kemana.
  evaluasi malam ini menyadarkan saya bahwa saya masih harus banyak belajar lebih
  dalam lagi mengenai array dan for terutama dengan berbagai bentuk pengimpelentasiannya.
  pemahaman konsep mengenai soal dengan tipe berbeda pun harus terus diasah sejalan dengan logika.
  semoga kedepannya saya dapat memperbaiki dan meminimalisir stuck dalam pengerjaan soal.
  terima kasih banyak kang teh.
  */

    return 0;
}