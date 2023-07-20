#include <stdio.h>
int main () {
	int a = 0;
	scanf("%d", &a);

	if((a <= 9)){
		printf("satuan\n");
	}

	if((a >= 10) && (a <= 99)) {
		printf("puluhan\n");
	}

	if((a >= 100) && (a <= 999)) {
		printf("ratusan\n");
	}

	if((a >= 1000) && (a <= 9999)) {
		printf("ribuan\n");
	}

	return 0;
}