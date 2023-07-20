/* Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
kuis 1 nomor 1 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti 
yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>
#include <math.h>

int main () {
	int a, b, c;   //deklarasi variabel untuk memasukkan panjang sisi segitiga pertama
    int d, e, f;   //deklarasi variabel untuk memasukkan panjang sisi segitiga kedua
    
    //meminta masukan user
    scanf("%d %d %d", &a, &b, &c);  //meminta user memasukkan panjang sisi segitiga pertama
    scanf("%d %d %d", &d, &e, &f);  //meminta user memasukkan panjang sisi segitiga kedua

    //mencari tinggi segitiga
    int ta = sqrt ((b * b) - (a / 2) * (a / 2)); //mencari tinggi segitiga pertama
    int tb = sqrt ((e * e) - (d / 2) * (d / 2)); //mencari tinggi segitiga kedua

    //deklarasi variabel untuk mengecek luas
    int luasa = ( c * ta ) / 2;  //deklarasi variabel pengecek luas segitiga pertama
    int luasb = ( f * tb ) / 2;  //deklarasi variabel pengecek luas segitiga kedua
    int luasc = ( b * a ) / 2;   //deklarasi variabel pengecek luas segitiga siku siku
    int luasd = ( e * d ) / 2;   //deklarasi variabel pengecek luas segitiga siku siku

    //memeriksa bentuk segitiga
    if ((a == b) && (b == c) && (a == c))     //memeriksa apakah segitiga pertama termasuk segitiga sama sisi
    { if ((d == e) && (e == f) && (d == f))   //memeriksa apakah segitiga kedua mempunyai jenis yang sama
    	{ printf("segitiga sama sisi\n");
           if ( luasa > luasb)                //menghitung selisih jika luas segitiga pertama lebih besar
           { int selisih = luasa - luasb;     
    	      printf("segitiga pertama\n");   
    	      printf("selisih %d\n", selisih); //menampilkan jumlah selisih
           }  else 
           {  int selisih = luasb - luasa;    //menghitung selisih jika luas segitiga kedua lebih besar
    	      printf("segitiga kedua\n");
    	      printf("selisih %d\n", selisih); //menampilkan jumlah selisih
           }
        }
    } 

    else if ((a == b) || (b == c) || (a == c))  //memeriksa apakah segitiga pertama termasuk segitiga sama kaki
    { if ((d == e) || (d == f) || (f == e))     //memeriksa apakah segitiga kedua mempunyai jenis yang sama
      { printf("segitiga sama kaki\n");
    	   if ( luasa > luasb)                  //menghitung selisih jika luas segitiga pertama lebih besar
    	   { int selisih = luasa - luasb;
    	     printf("segitiga pertama\n");
    	     printf("selisih %d\n", selisih);   //menampilkan jumlah selisih
           } else 
           { int selisih = luasb - luasa;       //menghitung selisih jika luas segitiga kedua lebih besar
    	     printf("segitiga kedua\n");
    	     printf("selisih %d\n", selisih);   //menampilkan jumlah selisih
           }
      } 
	}

    else if ((c*c == a*a + b*b) || (a*a == b*b + c*c) //memeriksa apakah segitiga pertama termasuk segitiga siku-siku
    	|| ( b*b == a * a + c * c)) 
    { if ((f*f == d*d + e*e) || (d*d == e*e + f*f) //memeriksa apakah segitiga kedua mempunyai jenis yang sama
    	|| ( e*e == d * d + f * f)) 
      { printf("segitiga siku-siku\n");
           if ( luasc > luasd) 
          { int selisih = luasc - luasd;       //menghitung selisih jika luas segitiga pertama lebih besar
    	   printf("segitiga pertama\n");
    	   printf("selisih %d\n", selisih);    //menampilkan jumlah selisih
          } else 
          { int selisih = luasd - luasc;       //menghitung selisih jika luas segitiga kedua lebih besar
    	    printf("segitiga kedua\n");
    	    printf("selisih %d\n", selisih);   //menampilkan jumlah selisih
          }
        } 
    }

    else {
    	printf("tidak sama\n");  //tampilan jika tidak memenuhi persyaratan
    }
    
	return 0;
}