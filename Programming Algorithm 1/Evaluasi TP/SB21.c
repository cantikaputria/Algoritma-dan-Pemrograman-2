/* Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
Tugas Praktikum 6 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanN.ya maka saya tidak melakukan kecurangan seperti 
yang telah dispesifikasikan. Aamiin.
*/

//deklarasi library
#include <stdio.h>

int main ()
{
    int x;
    char a;

    typedef struct 
    {
        char code, nama;
        int biner;
    } array;
    
    int i, n;
    scanf("&d", &n);

    array barang[n];
    for (i = 0; i < n; i++)
    {
        scanf(" %c %c %d", &barang[i].code, &barang[i].nama, &barang[i].biner);
    }

    for (i = 0; i < n; i++)
    {
        scanf(" %c %d", &a, &x);
    }


    return 0;
}