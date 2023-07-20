/* Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
Tugas Praktikum 1 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti 
yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>
int main () {
	int x; //deklarasi variabel untuk menampung panjang dinding
	int y; //deklarasi variabel untuk menampung lebar dinding
	int z; //deklarasi variabel untuk menampung tinggi dinding
	//meminta masukan user untuk panjang, lebar, dan tinggi
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &z);
    //menyiapkan perhitungan luas
	int luas = 2 * ( x * y ) + 2 * ( x * z ) + 2 * ( y * z ) - 2 * ( x * y ) ;
    //menampilkan hasil ke layar
	printf("Luas ruang tamu : %d meter persegi\n", luas);
	//menyiapkan perhitungan waktu
	int detik = luas * 100;
	int menit = detik / 60;
	detik = detik % 60;
	int jam = menit / 60;
    menit = menit % 60;
    //menampilkan hasil ke layar
    printf("Waktu menunggu  : %d jam, %d menit, %d detik\n", jam, menit, detik);

	return 0;
}