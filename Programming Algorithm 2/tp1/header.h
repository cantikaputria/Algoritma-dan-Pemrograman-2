/* Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
Soal Praktikum 1 dalam mata kuliah Algoritma dan Pemrograman 2
untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>

//DEKLARASI VARIABEL
int i, j;                              //deklarasi variabel untuk baris dan kolom
int m, n;                              //deklarasi variabel untuk ukuran matriks dari inputan user

//DEKLARASI PROSEDUR
void input_matriks(int[][n]);         //prosedur untuk meminta user mengisi matriks
void input_kode(int a, char []);      //meminta kode yang akan ditransformasi
void kode_a(int a, int[][n], int[][n]);                                    //proses refleksi ke atas
void kode_b(int a, int[][n], int[][m], int[][n], int[][m]);                //proses transformasi kode B (rotasi ke kanan)
void kode_c(int a, int[][n], int[][m], int[][n], int[][m]);                //proses transformasi kode C (rotasi ke kiri)
void kode_d(int a, int[][n], int [][m]);                                   //proses transformasi kode D (transpose)