/* 
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
    Soal UTS dalam mata kuliah Algoritma dan Pemrograman 2
    untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

//LIBRARY
#include "header.h"

int main ()
{
    //DEKLARASI VARIABEL
    int n1, n2, n3;                                                //variabel penampung jumlah minyak per supplier
    char metode[50];                                               //variabel penampung metode yang akan digunakan
    int sup[1];                                                    //variabel penanda supplier ke berapa

    //MASUKAN USER
    scanf("%s", &metode);                                          //meminta metode apa yang akan digunakan dari user

    //SUPPLIER 1
    scanf("%d", &n1);                                              //meminta jumlah minyak yang tersedia
    minyak tipe1[n1];                                              //deklarasi typedef struct untuk supplier 1
    input(tipe1, n1);                                              //pemanggilan prosedur

    //SUPPLIER 2
    scanf("%d", &n2);                                              //meminta jumlah minyak yang tersedia
    minyak tipe2[n2];                                              //deklarasi typedef struct untuk supplier 2
    input(tipe2, n2);                                              //pemanggilan prosedur

    //SUPPLIER 3
    scanf("%d", &n3);                                              //meminta jumlah minyak yang tersedia
    minyak tipe3[n3];                                              //deklarasi typedef struct untuk supplier 2
    input(tipe3, n3);                                              //pemanggilan prosedur

    //SYARAT
    if (strcmp(metode, "is") == 0)                                 //jika metodenya is artinya insertion short
    {
        insertion(tipe1, n1);                                      //pemanggilan prosedur supplier 1
        insertion(tipe2, n2);                                      //pemanggilan prosedur supplier 2
        insertion(tipe3, n3);                                      //pemanggilan prosedur supplier 3
    }
    else if (strcmp(metode, "ss") == 0)                            //jika metodenya ss artinya selection short
    {
        selection(tipe1, n1);                                      //pemanggilan prosedur supplier 1
        selection(tipe2, n2);                                      //pemanggilan prosedur supplier 2
        selection(tipe3, n3);                                      //pemanggilan prosedur supplier 3
    }
    else if (strcmp(metode, "bs") == 0)                            //jika metodenya bs artinya bubble short
    {
        bubble(tipe1, n1);                                         //pemanggilan prosedur supplier 1
        bubble(tipe2, n2);                                         //pemanggilan prosedur supplier 2
        bubble(tipe3, n3);                                         //pemanggilan prosedur supplier 3
    }
    else if (strcmp(metode, "qs") == 0)                            //jika metodenya qs artinya quick short
    {
        quick(tipe1, 0, n1 - 1);                                   //pemanggilan prosedur supplier 1
        quick(tipe2, 0, n2 - 1);                                   //pemanggilan prosedur supplier 2
        quick(tipe3, 0, n3 - 1);                                   //pemanggilan prosedur supplier 3
    }

    //OUTPUT
    printf("Per Supplier:\n");                                     //menampilkan teks ke layar

    //SUPPLIER 1
    printf("Supplier 1:\n");                                       //menampilkan teks ke layar
    print(tipe1, n1);                                              //pemanggilan prosedur untuk menampilkan hasil sorting supplier 1
    printf("\n");                                                  //menampilkan new line (enter)

    //SUPPLIER 2
    printf("Supplier 2:\n");                                       //menampilkan teks ke layar
    print(tipe2, n2);                                              //pemanggilan prosedur untuk menampilkan hasil sorting supplier 22
    printf("\n");                                                  //menampilkan new line (enter)

    //SUPPLIER 3
    printf("Supplier 3:\n");                                       //menampilkan teks ke layar
    print(tipe3, n3);                                              //pemanggilan prosedur untuk menampilkan hasil sorting supplier 22
    printf("\n");                                                  //menampilkan new line (enter)

    //STRUCT
    minyak temp[n1 + n2], akhir[n1 + n2 + n3];                     //deklarasi struct untuk penyatuan supplier 1 dan 2, lalu supplier 1, 2, dan 3

    //PEMANGGILAN PROSEDUR
    mergetab(tipe1, n1, tipe2, n2, temp);                          //prosedur menggabungkan supplier 1 dan supplier 2
    mergetab(temp, n1 + n2, tipe3, n3, akhir);                     //prosedur menggabungkan hasil penggabungan tadi dan supplier 3

    //MENAMPILKAN KE LYAR
    printf("Semua:\n");                                            //menampilkan teks ke layar
    for (i = 0; i < n1 + n2 + n3; i++)                             //perulangan dengan total seluruh n
    {
        printf("%s %d %d %d - ", akhir[i].merk, akhir[i].kalori, akhir[i].lemak, akhir[i].harga);           //menampilkan nama merk, kalori, lemak, dan harga minyak
        if ((akhir[i].harga % (akhir[i].lemak + akhir[i].kalori)) == 0)                                     //jika mod perhitungan = 0, maka
        {
            printf("%.0lf", akhir[i].hitung);                                                               //tampilkan tanpa koma
        }
        else                                                                                                //jika tidak artinya ada sisa pembagian, maka
        {
            printf("%.2lf", akhir[i].hitung);                                                               //tampilkan angka dengan 2 digit di belakang koma
        }
        printf(" Supplier %d\n", sup[i]);                                                                   //menampikan supplier sesuai struct minyak
    }

    return 0;                                                                                               //kembali ke 0
}                                                                       