/* Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
Tugas Praktikum 5 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti 
yang telah dispesifikasikan. Aamiin.
*/

//deklarasi library
#include <stdio.h>

int main ()
{
   int n, m, i;          //deklarasi variabel untuk kartu techi, clara, dan interator

   scanf("%d", &n);      //meminta masukan user untuk kartu techi
   char techi[n];        //deklarasi array techi

   for (i = 0; i < n; i++)        //for untuk meminta masukan indeks array techi dari user
   {
       scanf(" %c", &techi[i]);   //meminta masukan indeks array dari user sejumlah n
   }

   scanf("%d", &m);      //meminta masukan user untuk karu clara
   char clara[m];        //deklarasi array clara
   
   for (i = 0; i < m; i++)         //for untuk meminta masukan indeks array clara dari user
   {
       scanf(" %c", &clara[i]);    //
   }
   
  //ini buat n
   for (i = 0; i < n; i++) 
   {
    techi[n] = techi[i] - 64;
   }
   
   //ini buat m
   for (i = 0; i < m; i++)  
   {
    clara[m] = clara[i] - 64;
   }

   char a, b;
   if ((techi[i] == 1) || (techi[i] == 2) || (techi[i] == 3) || (techi[i] == 4) || (techi[i] == 5) || 
   (techi[i] == 6) || (techi[i] == 7) || (techi[i] == 8) || (techi[i] == 9))
   {
       a = 0;
   }
   else
   {
       a = 1;
   }
  printf ("%c", a);
   if ((clara[i] == 1) || (clara[i] == 2) || (clara[i] == 3) || (clara[i] == 4) || (clara[i] == 5) || 
   (clara[i] == 6) || (clara[i] == 7) || (clara[i] == 8) || (clara[i] == 9))
   {
       b = 0;
   }
   else
   {
       b = 1;
   }
    printf ("%c", b);


   // ini buat syarat
   
   if ((a != b) && (n == m) && (techi[i] == clara[i]))
   {
       printf("Nilai kartu mereka cocok,\nCarla menyukai balik Techi.");
   }
   else if ((a != b) && (n != m) && (techi[i] != clara[i]))
   {
       printf("Nilai kartu mereka tidak cocok,\nCarla tidak menyukai Techi.");
   }
   else if (a == b)
   {
       printf("Kartu mereka sejenis,\nternyata mereka bersaudara!");
   }
   
    return 0;
}