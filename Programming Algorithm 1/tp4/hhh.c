/* Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
Tugas Praktikum 4 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti 
yang telah dispesifikasikan. Aamiin.
*/


//library
#include <stdio.h>

//deklarasi variabel
int main ()     
{
    char c;                        //deklarasi variabel c untuk karakter
    int n, baris, kolom;           //deklarasi variabel n untuk masukan user, baris, dan kolom
    int a = -2, b = -1;            //dekleasai variabel untuk penanda
 
    //meminta masukan user untuk karakter dan integer
    scanf("%c %d", &c, &n);

    //membagi gambar menjadi beberapa bagian

    //bagian tanduk dibagi menjadi 4 bagian yaitu, spasi, angka, spasi panjang, dan angka
    for (baris = 1; baris <= n; baris++)                       //for untuk tanduk alien
    {   
        for (kolom = 1; kolom <= baris; kolom++)               //membuat spasi sebelum tanduk
        { 
          printf(" ");
        }
        
        if ((c == 'a') || (c == 'i') || (c == 'u') ||         //menentukan angka yg akan ditampilkan jika genap
        (c == 'e') || (c == 'o'))
        {
            a = a + 2;                               //membuat batasan untuk a
            
            for (kolom = 0; kolom < baris; kolom++)   //membuat for untuk menampilkan a
            {
                if ( a == 10)
                {
                    a = 0;
                }

                printf("%d", a);             //menampilkan angka a
            }

        }

        else                              //menentukan angka yg akan ditampilkan jika ganjil
        {
            b = b + 2;                    //membuat batasan

            for (kolom = 0; kolom < baris; kolom++)
            {
                if ( b == 11)
                {
                    b = 1;
                }

                printf("%d", b);     //menampilkan angka ganjil
            }
        }


        for (kolom = (n * 10) - (4 + n) + 3; kolom >= baris * 4; kolom--)
        { 
            printf(" ");
        }

        
        if ((c == 'a') || (c == 'i') || (c == 'u') ||
        (c == 'e') || (c == 'o'))
        {
            
            for (kolom = 0; kolom < baris; kolom++)
            {
                if ( a == 10)
                {
                    a = 0;
                }

                printf("%d", a);
            }

        }

        else
        {

            for (kolom = 0; kolom < baris; kolom++)
            {
                if ( b == 11)
                {
                    b = 1;
                }

                printf("%d", b);
            }
        }

        printf("\n");
    }
    
    //bagian penghubung antara tanduk dan mata
    for (baris = 1; baris <= 1; baris++)
    {
        for (kolom = n - baris; kolom >= 1; kolom--)
        {
          printf(" ");
        }

        if ((c == 'a') || (c == 'i') || (c == 'u') ||
        (c == 'e') || (c == 'o'))
        {
            a = a + 2;
            for (kolom = 1; kolom <= (n * 9) - (n - 1) * 2; kolom++)
            {
                if ( a == 10)
                {
                    a = 0;
                }
                printf("%d", a);
            }
        }

        else
        {
            b = b + 2;
            for (kolom = 1; kolom <= (n * 9) - (n - 1) * 2; kolom++)
            {
                if ( b == 11)
                {
                    b = 1;
                }

                printf("%d", b);
            }
        } printf("\n");
    }

   //bagian yang membentuk mata yang tebagi dalam beberapa wilayah yaitu spasi, angka, spasi, angka, spasi, dan angka
    for (baris = 1; baris <= n - 2; baris++)
    {
        for (kolom = n - baris; kolom >= n - 2; kolom--)
        {
          printf(" ");
        }
        
        if ((c == 'a') || (c == 'i') || (c == 'u') ||
        (c == 'e') || (c == 'o'))
        {
            a = a + 2;
            for (kolom = 1; kolom <= baris + 1; kolom++)
            {
                if ( a == 10)
                {
                    a = 0;
                }
                printf("%d", a);
            }
        }

        else
        {
            b = b + 2;
            for (kolom = 1; kolom <= baris + 1; kolom++)
            {
                if ( b == 11)
                {
                    b = 1;
                }

                printf("%d", b);
            }
        } 

        for (kolom = 0; kolom <= 3; kolom++)
        {
           printf(" ");
        }

        if (baris == n - 2)
        { if ((c == 'a') || (c == 'i') || (c == 'u') ||
             (c == 'e') || (c == 'o'))
          {
            for (kolom = 1; kolom <= n * 2; kolom++)
            {
                if ( a == 10)
                {
                    a = 0;
                }
                printf("%d", a);
            }  
            for (kolom = 0; kolom <= n - 4; kolom++)
               {
                  printf(" ");
               }
          }

           else
          {
            for (kolom = 1; kolom <= n * 2; kolom++)
            {
                if ( b == 11)
                {
                    b = 1;
                }

                printf("%d", b);
            }
         }

         for (kolom = 0; kolom <= n - 2; kolom++)
          {
            printf(" ");
          }


         if ((c == 'a') || (c == 'i') || (c == 'u') ||
             (c == 'e') || (c == 'o'))
          {
            for (kolom = 1; kolom <= n * 2; kolom++)
            {
                if ( a == 10)
                {
                    a = 0;
                }
                printf("%d", a);
            }  for (kolom = 0; kolom < n - 4; kolom++)
               {
                  printf(" ");
               }
          }

           else
          {
            for (kolom = 1; kolom <= n * 2; kolom++)
            {
                if ( b == 11)
                {
                    b = 1;
                }

                printf("%d", b);
            }
        }

        }

        else
        {
            if ((c == 'a') || (c == 'i') || (c == 'u') ||
         (c == 'e') || (c == 'o'))
          {
            for (kolom = 1; kolom <= n * 5; kolom++)
            {
                if ( a == 10)
                {
                    a = 0;
                }
                printf("%d", a);
            }
        }

           else
          {
            for (kolom = 1; kolom <= n * 2; kolom++)
            {
                if ( b == 11)
                {
                    b = 1;
                }

                printf("%d", b);
            }
           }
        } 

        for (kolom = 0; kolom < n; kolom++)
        {
           printf(" ");
        }
        

        if ((c == 'a') || (c == 'i') || (c == 'u') ||
        (c == 'e') || (c == 'o'))
        {
            for (kolom = 1; kolom <= baris + 1; kolom++)
            {
                if ( a == 10)
                {
                    a = 0;
                }
                printf("%d", a);
            }
        }

        else
        {
            for (kolom = 1; kolom <= baris + 1; kolom++)
            {
                if ( b == 11)
                {
                    b = 1;
                }

                printf("%d", b);
            }
        } printf("\n");
    }
    
  //bagian penghubung antara mata dan kaki
    for (baris = 1; baris <= 1; baris++)
    {

        if ((c == 'a') || (c == 'i') || (c == 'u') ||
        (c == 'e') || (c == 'o'))
        {
            a = a + 2;
            for (kolom = 1; kolom <= (n * 9); kolom++)
            {
                if ( a == 10)
                {
                    a = 0;
                }
                printf("%d", a);
            }
        }

        else
        {
            b = b + 2;
            for (kolom = 1; kolom <= (n * 9); kolom++)
            {
                if ( b == 11)
                {
                    b = 1;
                }

                printf("%d", b);
            }
        } printf("\n");
    }
   
   //pondasi untuk bagian kaki yang terbagi menjadi spasi, angka, spasi, angka, spasi, angka, spasi, angka
    for ( baris = 1; baris <= n; baris++)
    {
       for (kolom = 0; kolom <= n - 1; kolom++)
       {
        printf(" ");
       }

       if ((c == 'a') || (c == 'i') || (c == 'u') ||
        (c == 'e') || (c == 'o'))
        {
            a = a + 2;
            for (kolom = 1; kolom <= n; kolom++)
            {
                if ( a == 10)
                {
                    a = 0;
                }
                printf("%d", a);
            }
        }

        else
        {
            b = b + 2;
            for (kolom = 1; kolom <= n; kolom++)
            {
                if ( b == 11)
                {
                    b = 1;
                }

                printf("%d", b);
            }
        } 

        for (kolom = 0; kolom <= n - 1; kolom++)
        {
          printf(" ");
        }

        if ((c == 'a') || (c == 'i') || (c == 'u') ||
        (c == 'e') || (c == 'o'))
        {
            for (kolom = 1; kolom <= n; kolom++)
            {
                if ( a == 10)
                {
                    a = 0;
                }
                printf("%d", a);
            }
        }

        else
        {
            for (kolom = 1; kolom <= n; kolom++)
            {
                if ( b == 11)
                {
                    b = 1;
                }

                printf("%d", b);
            }
        } 

        for (kolom = 0; kolom <= n - 1; kolom++)
       {
        printf(" ");
       }

       if ((c == 'a') || (c == 'i') || (c == 'u') ||
        (c == 'e') || (c == 'o'))
        {
            for (kolom = 1; kolom <= n; kolom++)
            {
                if ( a == 10)
                {
                    a = 0;
                }
                printf("%d", a);
            }
        }

        else
        {
            for (kolom = 1; kolom <= n; kolom++)
            {
                if ( b == 11)
                {
                    b = 1;
                }

                printf("%d", b);
            }
        } 

        for (kolom = 0; kolom <= n - 1; kolom++)
       {
        printf(" ");
       }

       if ((c == 'a') || (c == 'i') || (c == 'u') ||
        (c == 'e') || (c == 'o'))
        {
            for (kolom = 1; kolom <= n; kolom++)
            {
                if ( a == 10)
                {
                    a = 0;
                }
                printf("%d", a);
            }
        }

        else
        {
            for (kolom = 1; kolom <= n; kolom++)
            {
                if ( b == 11)
                {
                    b = 1;
                }

                printf("%d", b);
            }
        } 
        printf("\n");
    }

   return 0;
}   