/* Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
soal UTS 1 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti 
yang telah dispesifikasikan. Aamiin.
*/

//deklarasi library
#include <stdio.h>

int main ()
{
    int i, j, n;                //deklarasi variabel baris, kolom, dan n masukan user
    
    scanf("%d", &n);            //meminta masukan user
    
    //membagi pola menjadi 5 wilayah

    //wilayah pertama paling atas
    for (i = 1; i <= n; i++)                  //for untuk baris pertama
    {
        for (j = (n * 6) - 1; j >= i; j--)    //for untuk kolom spasi
        {
            printf(" ");                      //menampilkan spasi ke layar
        }

        for (j = 1; j <= i; j++)              //for untuk kolom bintang
        {
            printf("*");                      //menampilkan bintang ke layar
        }
        printf("\n");                         //new line agar rapih
    }
    
    //wilayah kedua
    for (i = 1; i <= n; i++)                 //for untuk membuat baris
    {
        for (j = (n * 2) - 1; j >= i; j--)   //for untuk pola spasi pertama
        {
            printf(" ");                    //menampilkan spasi ke layar
        }

        for (j = 1; j <= i; j++)            //for untuk membuat pola bintang
        {
            printf("*");                    //menampilkan spasi ke layar
        }

        for (j = 0; j <= (n * 2) - 1; j++)   //for untuk membuat pola spasi
        {
            printf(" ");                     //menampilkan spasi ke layar
        }

        for (j = 0; j <= n - 1; j++)        //for untuk membuat pola bintang
        {
            printf("*");                    //menampilkan bintang ke layar
        }

        for (j = (n * 4) - 1; j >= i; j--)   //for untuk membuat pola spasi
        {
            printf(" ");                     //menampilkan spasi ke layar
        }  

        for (j = 1; j <= i; j++)           //for untuk membuat pola bintang
        {
            printf("*");                   //menampilkan bintang ke layar
        }

        for (j = (n * 2); j >= i; j--)    //for untuk membuat pola spasi
        {
            printf(" ");                  //menampilkan spasi ke layar
        }

        for (j = 1; j <= i * 2 - 1; j++)  //for untuk membuat pola bintang
        {
            printf("*");                  //menampilkan bintang ke layar
        }

        printf("\n");                    //new line agar rapih
    }
    
    //wlayah ketiga atau tengah
    for (i = 0; i < n; i++)              
    {
        for (j = 0; j <= n - 1; j++)      //for untuk membuat pola bintang
        {
            printf("*");                  //menampilkan bintang ke layar
        }

        for (j = 0; j <= (n * 2) - 1; j++)   //for untuk membuat pola spasi
        {
            printf(" ");                     //menampilkan spasi ke layar
        }

        for (j = 0; j <= (n * 3) - 1; j++)    //for untuk membuat pola bintang
        {
            printf("*");                      //menampilkan bintang ke layar
        }
    
        for (j = 0; j <= n - 1; j++)        //for untuk membuat pola spasi
        {
            printf(" ");                    //menampilkan spasi ke layar
        }

        for (j = 0; j <= n - 1; j++)        //for untuk membuat pola bintang
        {
            printf("*");                    //menampilkan bintang ke layar
        }

        for (j = 0; j <= (n * 2) - 1; j++)      //for untuk membuat pola spasi
        {
            printf(" ");                   //menampilkan spasi ke layar
        }

        for (j = 0; j <= ((n * 2) + 1) - 1; j++)     //for untuk membuat pola bintang
        { 
            printf("*");                             //menampilkan bintang ke layar
        } 
        printf("\n");                           //newline agar rapih
    } 
    

    //wilayah keempat
    for (i = 1; i <= n; i++)                   //for untuk membuat pola baris dan kolom
    {
        for (j = (1 - n) + 1; j <= i; j++)    //for untuk membuat pola spasi
        {
            printf(" ");                    //menampilkan spasi ke layar
        }

        for (j = n - i; j >= 0; j--)        //for untuk membuat pola bintang
        {
            printf("*");                    //menampilkan bintang ke layar
        }
      
        for (j = 0; j <= (n * 2) - 1; j++)   //for untuk membuat pola spasi
        {
            printf(" ");                     //menampilkan spasi ke layar
        }
   
        for (j = 0; j <= n - 1; j++)      //for untuk membuat pola bintang
        {
            printf("*");                  //menampilkan bintang ke layar
        }

        for (j = 1 - (n * 3) + 1; j <= i; j++)  //for untuk membuat pola spasi
        {
            printf(" ");                        //menampilkan spasi ke layar
        }

        for (j = n - i; j >= 0; j--)       //for untuk membuat pola bintang
        {
            printf("*");                    //menampilkan bintang ke layar
        }

        for (j = 1 - (n * 1); j <= i; j++)  //for untuk membuat pola spasi
        {
            printf(" ");                     //menampilkan spasi ke layar
        }

        for (j = (n * 2); j >= i * 2; j--)  //for untuk membuat pola bintang
        {
            printf("*");                    //menampilkan bintang ke layar
        }
        printf("\n");                       //new line agar rapi
    }
  
    //wilayah kelima
    for (i = 1; i <= n; i++)
    {
        for (j = 1 - (n * 5) + 1; j <= i; j++)  //for untuk membuat pola spasi
        {
            printf(" ");                       //menampilkan spasi ke layar
        }
        
        for (j = n - i; j >= 0; j--)      //for untuk membuat pola bintang
        {
            printf("*");                  //menampilkan bintang ke layar
        }
        printf("\n");                   //new line agar rapih
    }

   return 0;                            //kembali ke 0
}