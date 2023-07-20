/* Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
Tugas Praktikum 1 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti 
yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>

int main () {
	char ca, cb, cc, cd;   //deklarasi variabel untuk menampung empat karakter huruf
	int x, y;              //deklarasi variabel untuk menampung dua angka yang diteriakkan avengers

    //meminta masukan user
	scanf("%c %c %c %c", &ca, &cb, &cc, &cd);    //meminta user memasukkan empat huruf
	scanf("%d %d", &x, &y);                      //meminta user memasukkan dua angka yang diteriakkan

    //membuat empat kotak integer sebagai penanda
	int a=0, b=0, c=0, d=0;

	//memeriksa huruf pertama apakah termasuk vokal atau konsonan
	if  ((ca == 'A') || (ca == 'I')
		|| (ca == 'U') || (ca == 'E') || (ca == 'O'))
	{ 
		a = 1; 
	} else { 
		a = 0; 
	}

    //memeriksa huruf kedua apakah termasuk vokal atau konsonan
	if  ((cb != 'A') && (cb != 'I')
		&& (cb != 'U') && (cb != 'E') && (cb != 'O'))
	{ 
		b = 0; 
	} else { 
		b = 1; 
	}

    //memeriksa huruf ketiga apakah termasuk vokal atau konsonan
	if  ((cc == 'A') || (cc == 'I')
		|| (cc == 'U') || (cc == 'E') || (cc == 'O'))
	{ 
		c = 1; 
	} else { 
		c = 0; 
	}

    //memeriksa huruf keempat apakah termasuk vokal atau konsonan
	if  ((cd != 'A') && (cd != 'I')
		&& (cd != 'U') && (cd != 'E') && (cd != 'O'))
	{ 
		d = 0;
	} else { 
		d = 1;
	}
    
    //membuat variabel untuk acuan pemeriksaan syarat
	int hasil = a + b + c + d;
	
	//memeriksa terpenuhi atau tidaknya syarat pertama
	if (hasil == 2) {
	   if ((x + y) %2 == 0) {
		printf("Riddle Stone Acquired! Everybody comes home\n");
	    } else {
           printf("You are unworthy, for you cannot riddle me\n");
        }
    }
	
	//memeriksa terpenuhi atau tidaknya syarat kedua
    else if (hasil >= 3) {
    	if ((x + y) %2 != 0) {
    		printf("Riddle Stone Acquired! Everybody comes home\n");
    	} else {
            printf("You are unworthy, for you cannot riddle me\n");
    	}
    }

    //memeriksa terpenuhi atau tidaknya syarat ketiga
    else if (hasil <= 1) {
    	if ((x + y) >= 14) {
    		printf("Riddle Stone Acquired! Everybody comes home\n");
    	} else {
            printf("You are unworthy, for you cannot riddle me\n");
    	}
    }

    //keluaran jika semua syarat tidak terpenuhi
    else {
    	printf("You are unworthy, for you cannot riddle me\n");
    }

	return 0;
}