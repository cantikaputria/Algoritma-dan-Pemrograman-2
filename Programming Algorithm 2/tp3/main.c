/* Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
Soal Praktikum 3 dalam mata kuliah Algoritma dan Pemrograman 2
untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
yang telah dispesifikasikan. Aamiin.
*/

//LIBRARY
#include "header.h"

int main ()
{
    //DEKLARASI VARIABEL
    int n, a, b, x;                        //deklarasi variabel n untuk berapa yg dihitung, a dan b untuk jumlah virus jam ke 0 dan jam ke 1, x untuk jam yg di cek
    int i;                                 //deklarasi variabel iterasi

    scanf("%d", &n);                       //meminta masukan n dari user
    for (i = 0; i < n; i++)                //perulangan untuk berapa yg akan di hitung
    {
        scanf("%d %d %d", &a, &b, &x);     //meminta masukan nilai a, b, dan x dari user
        int hasil = jumlah_virus(x);       //pemanggilan fungsi
        printf("%d\n", hasil);             //menampilkan hasil ke layar
    }
    
    return 0;                              //mengembalikan nilai ke 0
}