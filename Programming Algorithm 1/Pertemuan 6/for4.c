#include <stdio.h>

int main () 
{
  int i, n, hasil = 1;
  scanf("%d", &n);
  for (i=n; i>0; i--)
  {
    hasil *= i;
  }
  printf("Hasil dari %d! adalah %d", n, hasil);

  return 0;
}