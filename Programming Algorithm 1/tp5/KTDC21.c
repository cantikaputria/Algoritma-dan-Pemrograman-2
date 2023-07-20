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
   char carla[m];        //deklarasi array clara
   
   for (i = 0; i < m; i++)         //for untuk meminta masukan indeks array clara dari user
   {
       scanf(" %c", &carla[i]);    //meminta masukan indeks array dari user sejumlah m
   }

   char arr[n];                  //deklarasi array p sebagai penanda
   for (i = 0; i < n; i++)
   { 
       switch (techi[i])         //switch untuk mencocokan huruf dan angka
       {
           case 'A':             //jika case = A maka arr[i] = 1 dst
           arr[i] = 1;
           break;
           case 'B' :
           arr[i] = 2;
           break;
           case 'C' :
           arr[i] = 3;
           break;
           case 'D' :
           arr[i] = 4;
           break;
           case 'E' :
           arr[i] = 5;
           break;
           case 'F' :
           arr[i] = 6;
           break;
           case 'G' :
           arr[i] = 7;
           break;
           case 'H' :
           arr[i] = 8;
           break;
           case 'I' :
           arr[i] = 9;
           break;
           case 1:
           arr[i] = 'A';
           break;
           case 2 :
           arr[i] = 'B';
           break;
           case 3 :
           arr[i] = 'C';
           break;
           case 4 :
           arr[i] = 'D';
           break;
           case 5 :
           arr[i] = 'E';
           break;
           case 6 :
           arr[i] = 'F';
           break;
           case 7 :
           arr[i] = 'G';
           break;
           case 8 :
           arr[i] = 'H';
           break;
           case 9 :
           arr[i] = 'I';
           break;
        }
   }
   
   char arrr[m];                 //deklarasi array q sebagai penanda
   for (i = 0; i < m; i++)
   {
       switch (carla[i])         //switch untuk menyocokkan huruf dan angka
       {
           case 'A':             //jika case = A maka bernilai 1, dst
           arrr[i] = 1;
           break;
           case 'B' :
           arrr[i] = 2;
           break;
           case 'C' :
           arrr[i] = 3;
           break;
           case 'D' :
           arrr[i] = 4;
           break;
           case 'E' :
           arrr[i] = 5;
           break;
           case 'F' :
           arrr[i] = 6;
           break;
           case 'G' :
           arrr[i] = 7;
           break;
           case 'H' :
           arrr[i] = 8;
           break;
           case 'I' :
           arrr[i] = 9;
           break;
           case 1 :
           arrr[i] = 'A';
           break;
           case 2 :
           arrr[i] = 'B';
           break;
           case 3 :
           arrr[i] = 'C';
           break;
           case 4 :
           arrr[i] = 'D';
           break;
           case 5 :
           arrr[i] = 'E';
           break;
           case 6 :
           arrr[i] = 'F';
           break;
           case 7 :
           arrr[i] = 'G';
           break;
           case 8 :
           arrr[i] = 'H';
           break;
           case 9 :
           arrr[i] = 'I';
           break;
        }
   }

  //menentukan jenis
  int a = 0;               //deklarasi variabel a sebagai penanda
  for (i = 0; i < n; i++)
  {
  if ((techi[i] == 'A') || (techi[i] == 'B') || (techi[i] == 'C') || (techi[i] == 'D') || (techi[i] == 'E') || //jika techi[i] = huruf
   (techi[i] == 'F') || (techi[i] == 'G') || (techi[i] == 'H') || (techi[i] == 'I'))
   {
       a = 0; //maka a = 0
   }
   else       //jika tidak berarti dia angka
   {
       a = 1; //maka a = 1
   }
  }
  
  //menentukan jenis
  int b = 0;              //deklarasi variabel b sebagai penanda
  for (i = 0; i < m; i++)
  {
   if ((carla[i] == 'A') || (carla[i] == 'B') || (carla[i] == 'C') || (carla[i] == 'D') || (carla[i] == 'E') || //jika carla[i] = huruf
   (carla[i] == 'F') || (carla[i] == 'G') || (carla[i] == 'H') || (carla[i] == 'I'))
   {
       b = 0;    //maka b = 0
   }
   else          //jika tidak maka dia angka
   {
       b = 1;    //maka b = 1
   }
  }

   //syarat kasus
   if ((a != b) && (n == m) && (techi[i] == carla[i]))    //jika jenisnya berbeda, jumlah sama, dan huruf angkanya cocok
   {   
       for (i = 0; i < n-1; i++)
       {
           printf("%c %c ", techi[i], carla[i]);         //menampilkan output selang seling ke layar
       }
       printf("%c %c", techi[i], carla[i]);              //menampilkan output paling terakhir ke layar agartidak ada spasi
       printf("\nNilai kartu mereka cocok,\n");          //jika syarat terpenuhi maka tampilkan kalimat tersebut
       printf("Carla menyukai balik Techi.\n");          //jika syarat terpenuhi maka tampilkan kalimat tersebut
   }
   else if ((a != b) && ((n != m) || (n == m)) && (techi[i] != carla[i])) //jika jenisnya beda, jumlahnya bisa beda atau sama, dan huruf angkanya tidak cocok
   {   
        for (i = 0; i < m-1; i++)                             
       {
           printf("%c %c ", techi[i], carla[i]);           //menampilkan output selang seling ke layar
       }
       printf("%c %c", techi[i], carla[i]);
       printf("\nNilai kartu mereka tidak cocok,\n");     //jika syarat terpenuhi maka tampilkan kalimat tersebut
       printf("Carla tidak menyukai Techi.");             //jika syarat terpenuhi maka tampilkan kalimat tersebut
   }
   else if (a == b)                                       //jika jenisnya sama, maka
   {
       printf("Kartu mereka sejenis,\n");                  //jika syarat terpenuhi maka tampilkan kalimat tersebut
       printf("ternyata mereka bersaudara!");              //jika syarat terpenuhi maka tampilkan kalimat tersebut
   }
   
    return 0;
}