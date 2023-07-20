#include <stdio.h>
#include <math.h>
int main() {
	int bil;
	float akar;
	int kuadrat;

	printf("Masukkan angka!\n");
	scanf("%d", bil);
	akar = sqrt (bil);
	kuadrat = bil * bil;

	printf("maka bilangan akar %0.2f\n", akar);

	printf("maka bilangan kuadrat %d\n", kuadrat);
	return 0;
}
