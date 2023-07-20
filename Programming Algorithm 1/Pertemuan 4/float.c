/* Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
kuis 1 nomor 2 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti 
yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>

int main () {
	double a, b, c, d;  //bismillah mau nyoba dulu bu
    int a1, a2;
    int z1, z2;
    int depan1, depan2;
    double belakang1, belakang2;
    double a1_value, a2_value;
    double z1_value, z2_value;

    scanf("%lf", &a);           
    scanf("%lf", &b);
    scanf("%lf", &c);
    scanf("%lf", &d);
    scanf("%i %i", &a1, &a2);
    scanf("%i %i", &z1, &z2);

    switch (a1) {
    case 1:
    a1_value = a; 
    break;
    case 2:
    a1_value = b;    
    break;
    case 3:
    a1_value = c;   
    break;
    default:
    a1_value = d;
    break;
            }

   switch (a2) {
    case 1:
    a2_value = a;  
    break;
    case 2:
    a2_value = b;    
    break;
    case 3:
    a2_value = c;
    break;
    default:
    a2_value = d;
    break;
              }

    switch (z1) {
    case 1:
    z1_value = a; 
    break;
    case 2:
    z1_value = b;   
    break;
    case 3:
    z1_value = c;
    break;
    default:
    z1_value = d;
    break;
                }

    switch (z2) {
    case 1:
    z2_value = a; 
    break;
    case 2:
    z2_value = b;   
    break;
    case 3:
    z2_value = c;
    break;
    default:
    z2_value = d;
    break;
               }

    depan1 = a1_value;               
    belakang1 = a1_value - depan1;   
    a1_value = depan1;              

    depan2 = a2_value;               
    belakang2 = a2_value - depan2;
    a2_value = depan2;

    a1_value += belakang2;           
    a2_value += belakang1;           

    depan1 = z1_value;              
    belakang1 = z1_value - depan1; 
    z1_value = depan1;

    depan2 = z2_value;
    belakang2 = z2_value - depan2;
    z2_value = depan2;

    z1_value += belakang2;          
    z2_value += belakang1;

    switch (a1) {
    case 1:
    a = a1_value;      
    break;
    case 2:
    b = a1_value;
    break;
    case 3:
    c = a1_value;
    break;
    default:
    d = a1_value;
    break;
                }

    switch (a2) {
    case 1:
    a = a2_value;
    break;
    case 2:
    b = a2_value;
    break;
    case 3:
    c = a2_value;
    break;
    default:
    d = a2_value;
    break;
                }

    switch (z1) {
    case 1:
    a = z1_value;
    break;
    case 2:
    b = z1_value;
    break;
    case 3:
    c = z1_value;
    break;
    default:
    d = z1_value;
    break;
               }

    switch (z2) {
    case 1:
    a = z2_value;
    break;
    case 2:
    b = z2_value;
    break;
    case 3:
    c = z2_value;
    break;
    default:
    d = z2_value;
    break;
                 }

    printf("%.2lf\n", a);     
    printf("%.2lf\n", b);      
    printf("%.2lf\n", c);
    printf("%.2lf\n", d);

    return 0;   
}