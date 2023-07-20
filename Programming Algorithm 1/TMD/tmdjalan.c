/*
    Saya Cantika Putri Arbiliansyah mengerjakan evaluasi
    Tugas Masa Depan dalam mata kuliah Algoritma dan Pemrograman 1
    untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

//deklarasi library yang digunakan
#include <stdio.h>
#include <string.h>

int main ()                             //fungsi utama yang akan dijalankan
{
    int n;                             //deklarasi variabel yang akan digunakan
    char str[50];                       //variabel untuk menyimpan string yang akan dienkripsi dari masukan user

    scanf("%s", &str);                  //meminta masukan user untuk isi string yang akan dienkripsi

    int panjang = strlen(str);          //deklarasi variabel penyimpan panjang string yang akan dienkripsi
    int ascii[panjang];                 //deklarasi array integer sebagai penyimpan kode ascii
    int satuan, puluhan, ratusan;       //deklarasi penampung nilai satuan, puluhan, dan ratusan dari ascii
    int baris,kolom, i;

    scanf("%d", &n);                    //meminta masukan user untuk nilai ketebalan
    
    //PROSEDUR UNTUK CETAK HURUF
    void hurufkiri (int n)                                  //prosedur untuk pola angka dengan huruf di sebelah kiri
    {
        for (kolom = 1; kolom <= n; kolom++)                //ketika kolom = 1 dan kurang dari sama dengan n maka....
        {
            printf("B");                                    //menampilkan huruf B ke layar
        }

        for (kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");                                    //menampilkan spasi ke layar
        }                                                   //dst berlanjut hingga akhir dengan proses yang sama

        for (kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
    }

    void huruftengah (int n)                               //prosedur untuk pola angka dengan huruf di sebelah tengah
    {
        for (kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }

        for (kolom = 1; kolom <= n; kolom++)
        {
            printf("B");
        }

        for (kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
    }

    void hurufkanan (int n)                                //prosedur untuk pola angka dengan huruf di sebelah kanan
    {
        for (kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }

        for (kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }

        for (kolom = 1; kolom <= n; kolom++)
        {
            printf("B");
        }
    }

    void hurufkanankiri (int n)                          //prosedur untuk pola angka dengan huruf di sebelah kanan dan kiri
    {
        for (kolom = 1; kolom <= n; kolom++)
        {
            printf("B");
        }

        for (kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }

        for (kolom = 1; kolom <= n; kolom++)
        {
            printf("B");
        }
    }

    void hurufkirikiri (int n)                             //prosedur untuk pola angka dengan huruf di sebelah kiri dan kiri
    {
        for (kolom = 1; kolom <= n; kolom++)
        {
            printf("B");
        }

        for (kolom = 1; kolom <= n; kolom++)
        {
            printf("B");
        }

        for (kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
    }

    void hurufi (int n)                                   //prosedur untuk pola angka dengan huruf di sebelah kanan sejajar
    {
        for (kolom = 1; kolom <= n; kolom++)
        {
            printf("B");
        }
    }

    //PROSEDUR UNTUK CETAK SPASI
    void spasiangka (int n)                               //prosedur untuk pola spasi antar angka ascii
    {
       for (kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }

        for (kolom = 1; kolom <= n; kolom++)
        {
            printf(" ");
        }
    }

    void spasihuruf (int n)                              //prosedur untuk pola spasi antar huruf (kelipatan 2)
    {
       for (kolom = 1; kolom <= n * 2; kolom++)
        {
            printf(" ");
        }

        for (kolom = 1; kolom <= n * 2; kolom++)
        {
            printf(" ");
        }
    }

    //konversi string ke ascii
    for (i = 0; i < panjang; i++)
    {   
        ascii[i] = str[i];
        ratusan = ascii[i] / 100;
        puluhan = (ascii[i] - ratusan * 100) / 10;
        satuan  = (ascii[i] - ratusan * 100 - puluhan * 10);

    //BARIS 1
    for (baris = 1; baris <= n; baris++)
    {
        if ((ratusan == 2) || (ratusan == 3) || 
        (ratusan == 5) || (ratusan == 6) || (ratusan == 8) || (ratusan == 9))
        {
            huruftengah(n);
            spasiangka(n);
        }

        else if(ratusan == 1)
        {
            hurufi(n);
            spasiangka(n);
        }

        else if(ratusan == 4)
        {
            hurufkanankiri(n);
            spasiangka(n);
        }

        else if(ratusan == 7)
        {
            hurufkirikiri(n);
            spasiangka(n);
        }

        if ((puluhan == 0) || (puluhan == 2) || (puluhan == 3) || 
        (puluhan == 5) || (puluhan == 6) || (puluhan == 8) || (puluhan == 9))
        {
            huruftengah(n);
            spasiangka(n);
        }

        else if(puluhan == 1)
        {
            hurufi(n);
            spasiangka(n);
        }

        else if(puluhan == 4)
        {
            hurufkanankiri(n);
            spasiangka(n);
        }

        else if(puluhan == 7)
        {
            hurufkirikiri(n);
            spasiangka(n);
        }

        if ((satuan == 0) || (satuan == 2) || (satuan == 3) || 
        (satuan == 5) || (satuan == 6) || (satuan == 8) || (satuan == 9))
        {
            huruftengah(n);
            spasihuruf(n);
        }

        else if(satuan == 1)
        {
            hurufi(n);
            spasihuruf(n);
        }

        else if(satuan == 4)
        {
            hurufkanankiri(n);
            spasihuruf(n);
        }

        else if(satuan == 7)
        {
            hurufkirikiri(n);
            spasihuruf(n);
        }
        printf("\n");
    }
    
    //BARIS 2
    for (baris = 1; baris <= n; baris++)
    {
        if ((ratusan == 8) || (ratusan == 9) || (ratusan == 4))
        {
            hurufkanankiri(n);
            spasiangka(n);
        }

        else if ((ratusan == 2) || (ratusan == 3) || (ratusan == 7))
        {
            hurufkanan(n);
            spasiangka(n);
        }

        else if ((ratusan == 5) || (ratusan == 6))
        {
            hurufkiri(n);
            spasiangka(n);
        }

        else if (ratusan = 1)
        {
            hurufi(n);
            spasiangka(n);
        }

        if ((puluhan == 0) || (puluhan == 8) || (puluhan == 9) || (puluhan == 4))
        {
            hurufkanankiri(n);
            spasiangka(n);
        }

        else if ((puluhan == 2) || (puluhan == 3) || (puluhan == 7))
        {
            hurufkanan(n);
            spasiangka(n);
        }

        else if ((puluhan == 5) || (puluhan == 6))
        {
            hurufkiri(n);
            spasiangka(n);
        }

        else if (puluhan = 1)
        {
            hurufi(n);
            spasiangka(n);
        }

        if ((satuan == 0) || (satuan == 8) || (satuan == 9) || (satuan == 4))
        {
            hurufkanankiri(n);
            spasihuruf(n);
        }

        else if ((satuan == 2) || (satuan == 3) || (satuan == 7))
        {
            hurufkanan(n);
            spasihuruf(n);
        }

        else if ((satuan == 5) || (satuan == 6))
        {
            hurufkiri(n);
            spasihuruf(n);
        }

        else if (satuan = 1)
        {
            hurufi(n);
            spasihuruf(n);
        }
         printf("\n");
    }
    
    //BARIS 3
    for (baris = 1; baris <= n; baris++)
    {
        if ((ratusan == 2) || (ratusan == 3) || (ratusan == 4) || (ratusan == 5) ||
        (ratusan == 6) || (ratusan == 8) || (ratusan == 9))
        {
            huruftengah(n);
            spasiangka(n);
        }

        else if (ratusan == 7)
        {
            hurufkanan(n);
            spasiangka(n);
        }

        else if (ratusan = 1)
        {
            hurufi(n);
            spasiangka(n);
        }

        if ((puluhan == 2) || (puluhan == 3) || (puluhan == 4) || (puluhan == 5) ||
        (puluhan == 6) || (puluhan == 8) || (puluhan == 9))
        {
            huruftengah(n);
            spasiangka(n);
        }

        else if (puluhan == 0)
        {
            hurufkanankiri(n);
            spasiangka(n);
        }

        else if (puluhan == 7)
        {
            hurufkanan(n);
            spasiangka(n);
        }

        else if (puluhan = 1)
        {
            hurufi(n);
            spasiangka(n);
        }

        if ((satuan == 2) || (satuan == 3) || (satuan == 4) || (satuan == 5) ||
        (satuan == 6) || (satuan == 8) || (satuan == 9))
        {
            huruftengah(n);
            spasihuruf(n);
        }

        else if ( satuan == 0)
        {
            hurufkanankiri(n);
            spasihuruf(n);
        }

        else if (satuan == 7)
        {
            hurufkanan(n);
            spasihuruf(n);
        }

        else if (satuan = 1)
        {
            hurufi(n);
            spasihuruf(n);
        }
        printf("\n");
    }

    //BARIS 4
    for (baris = 1; baris <= n; baris++)
    {
        if (( ratusan == 6) || ( ratusan == 8))
        {
            hurufkanankiri(n);
            spasiangka(n);
        }

        else if (( ratusan == 3) || ( ratusan == 4) || (ratusan == 5) ||
        (ratusan == 7) || (ratusan == 9))
        {
            hurufkanan(n);
            spasiangka(n);
        }

        else if ( ratusan == 2)
        {
            hurufkiri(n);
            spasiangka(n);
        }

        else if (ratusan = 1)
        {
            hurufi(n);
            spasiangka(n);
        }

        if ((puluhan == 0) || ( puluhan == 6) || (puluhan == 8))
        {
            hurufkanankiri(n);
            spasiangka(n);
        }

        else if ((puluhan == 3) || (puluhan == 4) || (puluhan == 5) ||
        (puluhan == 7) || ( puluhan== 9))
        {
            hurufkanan(n);
            spasiangka(n);
        }

        else if ( puluhan == 2)
        {
            hurufkiri(n);
            spasiangka(n);
        }

        else if (puluhan = 1)
        {
            hurufi(n);
            spasiangka(n);
        }

        if ((satuan == 0) || (satuan == 6) || (satuan == 8))
        {
            hurufkanankiri(n);
            spasihuruf(n);
        }

        else if ((satuan == 3) || (satuan == 4) || (satuan == 5) ||
        (satuan == 7) || (satuan == 9))
        {
            hurufkanan(n);
            spasihuruf(n);
        }

        else if (satuan == 2)
        {
            hurufkiri(n);
            spasihuruf(n);
        }

        else if (satuan = 1)
        {
            hurufi(n);
            spasihuruf(n);
        }
        printf("\n");
    }

    //BARIS 5
    for (baris = 1; baris <= n; baris++)
    {
        if ((ratusan == 2) || (ratusan == 3) || (ratusan == 5) ||
        (ratusan == 6) || (ratusan == 8) || (ratusan == 9))
        {
            huruftengah(n);
            spasiangka(n);
        }
        
         if ((ratusan == 4) || (ratusan == 7))
        {
            hurufkanan(n);
            spasiangka(n);
        }

        else if (ratusan = 1)
        {
            hurufi(n);
            spasiangka(n);
        }

         if ((puluhan == 0) || (puluhan  == 2) || (puluhan  == 3) || (puluhan == 5) ||
        (puluhan == 6) || (puluhan == 8) || (puluhan == 9))
        {
            huruftengah(n);
            spasiangka(n);
        }
        
         if ((puluhan == 4) || (puluhan == 7))
        {
            hurufkanan(n);
            spasiangka(n);
        }

        else if (puluhan = 1)
        {
            hurufi(n);
            spasiangka(n);
        }

         if (( satuan == 0) || (satuan == 2) || (satuan == 3) || (satuan == 5) ||
        (satuan == 6) || (satuan == 8) || (satuan == 9))
        {
            huruftengah(n);
            spasihuruf(n);
        }
        
         if ((satuan == 4) || (satuan == 7))
        {
            hurufkanan(n);
            spasihuruf(n);
        }

        else if (satuan = 1)
        {
            hurufi(n);
            spasihuruf(n);
        }
        printf("\n");
    }
    }

    return 0;                            
}