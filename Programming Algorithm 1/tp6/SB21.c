/* Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
Tugas Praktikum 6 dalam mata kuliah Algoritma dan Pemrograman 1
untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
yang telah dispesifikasikan. Aamiin.
*/

//deklarasi library
#include <stdio.h>

//membuat bungkusan array
typedef struct 
{
    char code, nama[100];                   //deklarasi variabel karakter untuk kode dan nama barang
    int biner[8];                           //deklarasi variabel untuk menampung biner
    int terjual;                            //deklarasi variabel penampung jumlah terjual
    int update;                             //deklarasi variabel penmpung stok update
    int hasil;                              //deklarasi variabel penampung hasil konversi biner ke desimal
} array;


int main ()
{
    int j;           //deklarasi variabel untuk inisiasi
    char a;          //deklarasi kode barang yang terjual
    
    int i, n;        //deklarasi indeks
    
    //meminta masukan user 
    scanf("%d", &n);          //meminta masukan user untuk jumlah jenis barang
    array barang[n];          //deklarasi tipe terstuktur untuk barang
    array terjual[n];         //deklarasi tipe terstuktur untuk stok terjual

    //meminta masukan user untuk kode, nama, dan biner
    for (i = 0; i < n; i++)
    {
        scanf(" %c", &barang[i].code);                  //meminta masukan user untuk kode barang

        a = 0;
        while (barang[i].nama[a - 1] != ';')
        {
            scanf(" %c", &barang[i].nama[a]);          //meminta masukan user untuk nama barang
            a++;
        }
        
        for (j = 0; j < 8; j++)
        {
            scanf("%d", &barang[i].biner[j]);         //meminta masukan user untuk kode biner
        }
    }
    
    //convert biner ke desimal
    int eksponen;                           //deklarasi variabel sebagai bentuk pangkat
    for (i = 0; i < n; i++)
    {
        eksponen = 1;                
        barang[i].hasil = 0;

        for (j = 7; j >= 0; j--)
        {
            barang[i].hasil += barang[i].biner[j] * eksponen;    //perhitungan hasil konversi dengan perulangan
            eksponen *= 2;                                       //penghitungan pangkat
        }
    }

    // menghitung stok update                          
    for (i = 0; i < n; i++)
    {                                                  
        if (barang[i].code == a)
        {
           barang[i].hasil = barang[i].hasil - barang[i].terjual;
        }
    }


    //meminta masukan user untuk stok terjual
    i = 0;
    scanf(" %c", &terjual[n].code);                //meminta masukan kode yang terjual
    while (terjual[i].code != '*')                 //syarat jika while tidak sama dengan bintang, jika = * artinya berhenti
    {   
        i++;
        scanf(" %c", &terjual[i].code);            //meminta masukan kode terjual
        if (terjual[i].code != '*')                //jika kode tidak sama dengan * maka :
        {
            scanf("%d", &terjual[i].terjual);      //meminta masukan jumlah yang terjual
        }                   
    }
    
    //output untuk stok barang awal
    printf("Stok Barang Awal\n");                 //menampilkan kalimat ke layar
    i = 0;                                        //indeks
    int x = 0;                                    //penanda = 0
    while ( i < n )
    {
        printf("- %c ", barang[i].code);          //menampilkan kode barang ke layar
        j = 0;
        while ((j < 100) && (x == 0))             //syarat
        {
            if (barang[i].nama[j] != ';')         //syarat
            {
                printf("%c", barang[i].nama[j]);  //menampilkan kode barang ke layar
            }
            else
            {
               x += 1;
            }
            j++;
        }
        printf(" %d\n", barang[i].hasil);        //menampilkan stok awal ke layar
        x = 0;                                   //notes : saya gatau kenapa hasilnya salah terus padahal pas di printf di konversinya udah bener
        i++;
    }

    //output untuk stok barang update
    printf("\nStok Barang Update\n");             //menampilkan teks ke layar
    i = 0;                                        //indeks
    while (i < n)
    {
        printf("- %c ", barang[i].code);          //menampilkan kode barang ke layar
        j = 0;                                    //indeks
         
        while ((j < 100) && (x == 0))
        {
            if (barang[i].nama[j] != ';')         //syarat
            {
                printf("%c", barang[i].nama[j]);  //menampilkan nama barang ke layar
            }
            else
            {
                x += 1;
            }
            j++;
        }
        printf(" %d\n", barang[i].update);       //menampilkan stok barang update ke layar
        x = 0;
        i++;
    }

    
    //kembali ke 0
    return 0;
}