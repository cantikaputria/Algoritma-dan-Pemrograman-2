#include <stdio.h>

int main () {
	int a, b, c;
	int d, e, f;

	scanf("%d %d %d", &a, &b, &c);
	scanf("%d %d %d", &d, &e, &f);

	int x=0, y=0, z=0, p=0, q=0, r=0;

	if (a >= 1000) {
		x = 1;
	} else {
		x = 0;
	}

	if (b >= 1000) {
		y = 1;
	} else {
		y = 0;
	}

	if (c >= 1000) {
		z = 1;
	} else {
		z = 0;
	}

	if (d >= 1000) {
		p = 1;
	} else {
		p = 0;
	}

	if (e >= 1000) {
		q = 1;
	} else {
		q = 0;
	}

	if (f >= 1000) {
		r = 1;
	} else {
		r = 0;
	}

    int hasil = x + y + z + p + q + r;

	if (hasil >= 3) {
		printf("ribuan 3 atau lebih\n");
	} else {
		printf("tidak valid\n");
	} 

	return 0;
}