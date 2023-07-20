#include <stdio.h>
#include <math.h>
int main()
{ int alas;
  int tinggi;

  printf("Masukkan alas\n");
  scanf("%d", &alas);
  printf("Masukkan tinggi\n");
  scanf("%d", &tinggi);

  int hasil = alas * tinggi /2 ;

  printf("luasnya adalah %d\n", hasil);
	return 0;
}
