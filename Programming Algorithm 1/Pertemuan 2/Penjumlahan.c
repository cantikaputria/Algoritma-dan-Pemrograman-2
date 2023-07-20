#include <stdio.h>
int main()
{   int bilSatu; //variabel untuk menampung bilangan pertama
	int bilDua; //variabel untuk menampung bilangan kedua
	//meminta masukan user
	printf("%s Silahkan masukkan bilangan pertama:\n");
	scanf("%d", &bilSatu);
    printf("Silahkan masukkan bilangan kedua:\n");
	scanf("%d", &bilDua);
	//menyiapkan hasil
	int hasil = bilSatu + bilDua;
	//menampilkan hasil ke layar
	printf("Hasil penjumlahan adalah %d\n", hasil);
	return 0;
}