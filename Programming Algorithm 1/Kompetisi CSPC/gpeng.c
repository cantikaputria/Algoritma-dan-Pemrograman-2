#include <stdio.h>
#include <math.h>

int main () {
	int gehu;
	int bala;
	int pisang;
	int cireng;
	int hari;

	scanf("%d", &gehu);
	scanf("%d", &bala);
	scanf("%d", &pisang);
	scanf("%d", &cireng);
	scanf("%d", &hari);

	int hasil = (gehu * 100 + bala * 150 + pisang * 75 + cireng * 175) * hari;
	printf("%d\n", hasil);

	return 0;
}