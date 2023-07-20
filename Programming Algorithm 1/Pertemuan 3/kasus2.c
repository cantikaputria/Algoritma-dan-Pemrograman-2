#include <stdio.h>
int main () {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);

	if((a == b) && (b == c) && (a ==c )) {
		printf("segitiga sama sisi\n");
	}

	if ((a == b) || (b == c) || (a == c)) {
		printf("segitiga sama kaki\n");
	}
    
    if ((c*c == a*a + b*b) || (a*a == b*b + c*c ) 
    	|| ( b*b == a * a + c * c)) {
    	printf("segitiga siku-siku\n");
    }
}