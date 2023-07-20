#include <stdio.h>

typedef struct 
{
	int nim;
	int nilai;
} mahasiswa;

int main () {
	mahasiswa m1;
	mahasiswa m2;
	mahasiswa m3;

	printf("masukkan nim mahasiswa 1\n");
	scanf("%d", &m1.nim);

	printf("masukkan nim mahasiswa 2\n");
	scanf("%d", &m2.nim);
	
	printf("masukkan nim mahasiswa 3\n");
	scanf("%d", &m3.nim);

    terbesar = m1.nim;
    if(terbesar <= m1.nim)

    terbesar = m2.nim;
    if (terbesar <= m2.nim)

    terbesar = m3.nim;
    if (terbesar <= m3.nim)

    printf("maka nim yang terbesar adalah: %d\n", terbesar);
    return 0;
}
