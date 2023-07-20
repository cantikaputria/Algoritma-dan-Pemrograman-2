/* Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
Tugas Praktikum 8 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti 
yang telah dispesifikasikan. Aamiin.
*/

//library
#include <stdio.h>
#include <string.h>

//codingan utama
int main ()
{ 
    char str[50];               //deklarasi string inputan
    int n;                      //deklarasi variabel array
    char strpisah[n][50];       //deklarasi variabel yang akan menghapus string inputan
    int i, j, k;                //deklarasi penanda
    
    //meminta masukan user
    scanf("%s", &str[n]);
    
    //memisahkan inputan setelah '\' 
    i = 0;                               
    while (i < strlen(str))  
    {
      if (str[i] == 92)
      {
        strpisah[n][i] == str[i];          
        i++;    
      }                       
    }
    



   return 0;
}