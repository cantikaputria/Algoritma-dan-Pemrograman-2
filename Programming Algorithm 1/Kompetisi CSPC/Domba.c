#include <stdio.h>
int main () {
	int n; //variabel untuk menampung jumlah domba
	int m; //variabel untuk menampung jumlah anak
	int p; //variabel untuk menampung jumlah domba terjual
	int r; //variabel untuk menampung tahun yang diinginkan
	//masukan user
	scanf("%d", &n);
	scanf("%d", &m);
	scanf("%d", &p);
	scanf("%d", &r);
    //menyiapkan hasil
	if (r > 2) {
		int hasil = n + (m * m) * r - p;
		printf("%d\n", hasil);
	}

	if ( r <= 2) {
		int hasil = n + (m * m) * r;
		printf("%d\n", hasil);
	}
	return 0;
}