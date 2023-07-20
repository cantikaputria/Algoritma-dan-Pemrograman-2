#include <stdio.h>
int main () {
	float bilangan;
	int depan;
	int belakang;

	printf("Masukkan bilangan float\n");
	scanf("%f", &bilangan);

	depan = bilangan;
	belakang = (bilangan - depan) * 100;

	printf("bilangan depan adalah %d\n", depan);
	printf("Bilangan belakang adalah %d\n", belakang);

	return 0;
}