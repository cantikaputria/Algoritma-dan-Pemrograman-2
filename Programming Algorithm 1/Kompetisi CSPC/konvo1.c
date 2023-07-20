#include <stdio.h>

int main () {
	char ca, cb, cc, cd, ce, cf;

	scanf("%c %c %c %c %c %c", &ca, &cb, &cc, &cd, &ce, &cf);
    
    int a=0, b=0, c=0, d=0, e=0, f=0;

    if  ((ca == 'a') || (ca == 'i')
		|| (ca == 'u') || (ca == 'e') || (ca == 'o')) 
    { 
		a = 1; 
	} else { 
		a = 0; 
	}

    if  ((cb != 'a') && (cb != 'i')
		&& (cb != 'u') && (cb != 'e') && (cb != 'o'))
    { 
		b = 1; 
	} else { 
		b = 0; 
	}

    if  ((cc == 'a') || (cc == 'i')
		|| (cc == 'u') || (cc == 'e') || (cc == 'o'))
    { 
		c = 1; 
	} else { 
		c = 0; 
	}

	if  ((cd != 'a') && (cd != 'i')
		&& (cd != 'u') && (cd != 'e') && (cd != 'o'))
    { 
		d = 1; 
	} else { 
		d = 0; 
	}

	if  ((ce == 'a') || (ce == 'i')
		|| (ce == 'u') || (ce == 'e') || (ce == 'o'))
    { 
		e = 1; 
	} else { 
		e = 0; 
	}
    
    if  ((cf != 'a') && (cf != 'i')
		&& (cf != 'u') && (cf != 'e') && (cf != 'o'))
    { 
		f = 1; 
	} else { 
		f = 0; 
	}

	int hasil = a + b + c + d + e + f;

	if ( a == 1 ) {
       if (hasil == 6) {
       	printf("kombinasi valid\n");
       } else {
       	printf("kombinasi tidak valid\n");
       }
	}

	else if ( a == 0) {
         if (hasil == 0) {
		printf("kombinasi valid\n");
	} else {
		printf("kombinasi tidak valid\n");
	   }
	}

	else {
		printf("kombinasi tidak valid\n");
	}

	return 0;
}