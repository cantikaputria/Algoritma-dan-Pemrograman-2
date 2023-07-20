#include <stdio.h>
int main () {
	int jantan;
	int betina;
	int kecil;
	int wj;
	int wb;
	int wk;

	scanf("%d", &jantan);
	scanf("%d", &betina);
	scanf("%d", &kecil);
	scanf("%d", &wj);
	scanf("%d", &wb);
	scanf("%d", &wk);

	int hasil = (jantan * wj) + (betina * wb) + (kecil * wk);

	int detik = 00;
	int menit = hasil;
	int jam = menit / 60;
	menit = menit % 60;

	printf("0%d:%d:%d0\n", jam, menit, detik );

}