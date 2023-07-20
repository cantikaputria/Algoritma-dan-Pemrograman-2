/*
Saya Muhammad Fikri Kafilli NIM [2107264]
mengerjakan soal kuis 1 dalam mata kuliah Algoritma dan Pemrograman 1 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin
*/

#include<stdio.h>
#include<math.h>

int main(){
    //Deklarasi integer untuk sisi segitiga
    int a, b, c, x, y, z;

    //deklarasi jenis segiitiga pertama
    int siku1 = 0, sisi1 = 0, kaki1 = 0; 
    //deklarasi jenis segitiga kedua
    int siku2 = 0, sisi2 = 0, kaki2 = 0;

    //deklarasi sisi miring, tinggi, dan alas dari segitiga pertama
    int miring1, tinggi1, alas1;
    ////deklarasi sisi miring, tinggi, dan alas dari segitiga pertama
    int miring2, tinggi2, alas2;

    //deklarasi luas segitiga pertama
    int luas1;
    //deklarasi luas segitiga kedua
    int luas2;

    //meminta user memasukkan panjang sisi-sisi segitiga pertama
    scanf("%d %d %d", &a, &b, &c);
    //meminta user memasukkan panjang sisi-sisi segitiga kedua
    scanf("%d %d %d", &x, &y, &z);


    //menentukan apakah segitiga pertama adalah segitiga siku-siku dan menentukan bagiannya
    if((a > b) && (a > c)){
        miring1 = a;
        tinggi1 = b;
        alas1 = c;
        siku1 = 1;
    }else if((b > a) && (b > c)){
        miring1 = b;
        tinggi1 = a;
        alas1 = c;
        siku1 = 1;
    }else if((c > a) && (c > b)){
        miring1 = c;
        tinggi1 = a;
        alas1 = b;
        siku1 = 1;

    }
    //menentukan apakah segitiga kedua adalah segitiga siku-siku dan menentukan bagiannya
    if((x > y) && (x > z)){
        miring2 = x;
        tinggi2 = y;
        alas2 = z;
        siku2 = 1;
    }else if((y > x) && (y > z)){
        miring2 = y;
        tinggi2 = x;
        alas2 = z;
        siku2 = 1;
    }else if((z > x) && (z > y)){
        miring2 = z;
        tinggi2 = x;
        alas2 = y;
        siku2 = 1;

    }

    //menentukan apakah segitiga pertama adalah sama sisi 
    if(a == b && a == c && c == b){
        miring1 = a;
        tinggi1 = b;        
        alas1 = c;
        sisi1 = 1;
    }
    //menentukan apakah segitiga kedua adalah sama sisi 
    if(x == y && x == z && y == z){
       miring2 = x;
        tinggi2 = y;
        alas2 = z;
        sisi2 = 1;
    }

    //menentukan apakah segitiga pertama adalah sama kaki dan menentukan bagiannya
    if(a == b && b != c && a != c){
        miring1 = a;
        tinggi1 = b;        
        alas1 = c;
        kaki1 = 1;
    }else if(a == c && b != a && b != c){
        miring1 = a;
        tinggi1 = c;
        alas1 = b;
        kaki1 = 1;
    }else if(b == c && a != b && a != c){
        miring1 = b;
        tinggi1 = c;
        alas1 = a; 
        kaki1 = 1;
    }

    //menentukan apakah segitiga kedua adalah sama kaki dan menentukan bagiannya
    if((x == y) && (y != z) && (x != z)){
        miring2 = x;
        tinggi2 = y;
        alas2 = z;
        kaki2 = 1;
    }else if((x == z) && (y != x) && (y != z)){
        miring2 = x;
        tinggi2 = z;
        alas2 = y;
        kaki2 = 1;
    }else if((y == z) && (x != y) && (x != z)){
        miring2 = y;
        tinggi2 = z;
        alas2 = x; 
        kaki2 = 1;
    }


    //Jika kedua segitiga adalah siku-siku
    if(siku1 == 1 && siku2 == 1){
        printf("segitiga siku-siku\n");

        //menghitung luas segitiga pertama
        luas1 = (alas1 * tinggi1) / 2;
         //menghitung luas segitiga kedua
        luas2 = (alas2 * tinggi2) / 2;

        //jika segitiga pertama lebih besar dari segitiga kedua
        if(luas1 > luas2){
            printf("segitiga pertama\n");

            //menghitung selisih dan keluarannya
            luas1 -= luas2;
            printf("selisih %d\n", luas1);

        //jika segitiga kedua lebih besar dari segitiga pertama    
        }else if(luas2 > luas1){
            printf("segitiga kedua\n");

            //menghitung selisih dan keluarannya
            luas2 -= luas1;
            printf("selisih %d\n", luas2);
        }

    //jika kedua segitiga adalah sama sisi
    }else if(sisi1 == 1 && sisi2 == 1){
        printf("segitiga sama sisi\n");

        //deklarasi tinggi segitiga sama sisi
        int ts1, ts2;
        //menghitung luas segitiga pertama
        ts1 = sqrt((alas1*alas1) - ((alas1/2)*(alas1/2)));
        luas1 = (ts1 * alas1) / 2;
        //menghitung luas segitiga kedua
        ts2 = sqrt((alas2*alas2) - ((alas2/2)*(alas2/2)));
        luas2 = (ts2 * alas2) /2;

        //jika segitiga pertama lebih besar dari segitiga kedua
        if(luas1 > luas2){
            printf("segitiga pertama\n");

            //menghitung selisih dan keluarannya
            luas1 -= luas2;
            printf("selisih %d\n", luas1);

        //jika segitiga kedua lebih besar dari segitiga pertama    
        }else if(luas2 > luas1){
            printf("segitiga kedua\n");

            //menghitung selisih dan keluarannya
            luas2 -= luas1;
            printf("selisih %d\n", luas2);
        }


    //jika kedua segitiga adalah sama kaki
    }else if(kaki1 == 1 && kaki2 == 1){
        printf("segitiga sama kaki\n");

        //deklarasi tinggi segitiga pertama
        int ts1, ts2;
        //menghitung luas segitiga pertama
        ts1 = sqrt((miring1*miring1) - ((alas1/2)*(alas1/2)));
        luas1 = (ts1 * alas1) / 2;
        //menghitung luas segitiga kedua
        ts2 = sqrt((miring2*miring2) - ((alas2/2)*(alas2/2)));
        luas2 = (ts2 * alas2) /2;

        //jika segitiga pertama lebih besar dari segitiga kedua
        if(luas1 > luas2){
            printf("segitiga pertama\n");

            //menghitung selisih dan keluarannya
            luas1 -= luas2;
            printf("selisih %d\n", luas1);

        //jika segitiga kedua lebih besar dari segitiga pertama    
        }else if(luas2 > luas1){
            printf("segitiga kedua\n");

            //menghitung selisih dan keluarannya
            luas2 -= luas1;
            printf("selisih %d\n", luas2);
        }

    //keluaran jika kedua segitiga tidak sama
    }else{
        printf("tidak sama\n");
    }



    return 0;
}