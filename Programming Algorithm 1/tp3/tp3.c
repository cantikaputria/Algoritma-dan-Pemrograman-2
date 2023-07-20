/* Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
Tugas Praktikum 3 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti 
yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>
#include <math.h>

typedef struct 
{
  int r1, x1, y1;
  int r2, x2, y2;
} lingkaran;

int main ()
{
  int digit;
  char huruf;
  int persen;

  lingkaran l1;
  lingkaran l2;

  scanf("%d", &digit);
  scanf("%d %d %d", &l1.r1, &l1.x1, &l1.y1);
  scanf("%d %d %d", &l2.r2, &l2.x2, &l2.y2);
  scanf("%c", &huruf);
  scanf("%d", &persen);

  float luas1 = 3.14 * l1.r1 * l1.r1;
  float luas2 = 3.14 * l2.r2 * l2.r2;
  float totalluas = luas1 + luas2;
  float persenluas = totalluas * (persen / 100);

  float keliling1 = 2 * 3.14 * l1.r1;
  float keliling2 = 2 * 3.14 * l2.r2;
  float totalkel = keliling1 + keliling2;

  int jarak = sqrt ((l1.r1 * l1.r1) + ((l1.x1 - l2.x2) *  (l1.x1 - l2.x2)));

  typedef 

  switch (digit)
  { case'1':
    printf("ELuas AB: %.2f cm2\n", totalluas);
    break;

    case'2':
    printf("EKeliling AB: %.2f cm\n", totalkel);
    break;

    case '3':
    printf("Jarak AB: %d satuan\n", jarak);
    break;

    default:
    printf("Luas %d B: %d cm2", persen, persenluas);
  }

 return 0;
}



 printf ("hdjd %d\n", ratusan);
  printf ("hdjd %d\n", puluhan);
  printf ("hdjd %d\n", satuan);
