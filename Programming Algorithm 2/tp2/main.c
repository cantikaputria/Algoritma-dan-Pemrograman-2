/* Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
Soal Praktikum 2 dalam mata kuliah Algoritma dan Pemrograman 2
untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
yang telah dispesifikasikan. Aamiin.
*/

//LIBRARY
#include "header.h"

int main ()
{
    //MEMINTA INPUTAN USER UNTUK NILAI BARIS DAN KOLOM
    scanf("%d %d", &n, &m);

    //PEMANGGILAN TYPEDEF STRUCT
    basket tim[n][m];                                     //deklarasi array dua dimensi untuk matriks utama
    basket temp;                                          //deklarasi variabel untuk menampung pertukaran sementara
    
    //MEMINTA INPUTAN USER
    for ( i = 0; i < n; i++)                              //proses perulangan berdasrkan baris
    {
        for ( j = 0; j < m; j++)                          //proses peruangan berdasarkan kolom
        {
            scanf("%s %d %d", tim[i][j].nama, &tim[i][j].attack, &tim[i][j].defence);   //meminta inputan user untuk nama tin, nilai attack, dan nilai defence
            tim[i][j].rata_rata = (float)(tim[i][j].attack + tim[i][j].defence) / 2;    //proses perhitungan rata-rata nilai attack dan defence
        }
    }
    
    //PEMANGGILAN PROSEDUR
    berhenti();                                           //prosedur untuk proses input dan berhenti ketika string = stop
    spasi_print1(n, m, tim);                              //prosedur untuk proses perapihan matriks dan menampilkan matriks awal ke layar
    tukar(n, m, temp, tim);                               //prosedur untuk proses penukaran
    spasi_print2(n, m, tim);                              //prosedur untuk proses perapihan matriks dan menampilkan matriks akhir ke layar
    
    return 0;                                             //mengembalikan nilai ke 0
}