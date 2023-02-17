/* 
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
    Evaluasi 2 dalam mata kuliah Algoritma dan Pemrograman 2
    untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

//MENYALAKAN MESIN
void start(char str[])
{
    indeks = 0;                                                                                         //inisialisasi indeks = 0
    panjangkata = 0;                                                                                    //inisialisasi panjnag kata = 0

    while ((str[indeks] == ' '))                                                                        //jika karakternya spasi atau titik koma maka indeksnya terus maju
    {   
        indeks++;                                                                                       //increment nilai indeks
    }

    while ((str[indeks] != ' ') && (eop(str) == 0))                                                     //jika karakternya selain titik koma dan EOP
    {
        ckata[panjangkata] = str[indeks];                                                               //kata dimasukkan ke variabel global
        indeks++;                                                                                       //increment nilai indeks 
        panjangkata++;                                                                                  //increment panjang kata
    }   

    //inisialisasi
    ckata[panjangkata] = '\0';                                                                          //inisialisasi indeks terakhir kata menjadi null
}

//FUNGSI END OF PROCESS SEBAGAI AKHIR KALIMAT
int eop(char str[])
{
    if (str[indeks] == ';')                                                                             //jika bertemu karakter ; maka akhir kalimat
    {
        return 1;                                                                                       //kembalikan nilai 1
    }
    else                                                                                                //jika tidak maka
    {
        return 0;                                                                                       //kembalikan nilai 0
    }
}

//FUNGSI MEMAJUKAN MESIN KATA
void inc(char str[])
{
    panjangkata = 0;                                                                                    //inisialisasi panjang kata

    //jika karakternya spasi atau titik koma maka indeksnya terus maju
    while ((str[indeks] == ' '))
    {
        indeks++;                                                                                       //increment nilai indeks
    }   

    //jika karakternya selain titik koma dan EOP
    while ((str[indeks] != ' ') && (eop(str) == 0))
    {
        ckata[panjangkata] = str[indeks];                                                               //kata dimasukkan ke variabel global
        indeks++;                                                                                       //increment nilai indeks
        panjangkata++;                                                                                  //increment panjang kata
    }

    ckata[panjangkata] = '\0';                                                                          //inisialisasi indeks terakhir kata menjadi null
}

//FUNGSI UNTUK MENDAPATKAN KATA SAAT INI
char *getckata()
{
    return ckata;                                                                                       //mengembalikan kata saat ini
}

//PROSEDUR INSERT DATA PADA STRUCT
void insertData(char pita[], toko (*barang))
{
    int count = 0;
    while (eop(pita) == 0)
    {
        inc(pita);  
        if (count == 0)
        {
            strcpy((*barang).nama, getckata());
        }
        else if (count == 1) 
        {
            strcpy((*barang).harga, getckata());
            count++;
        }     
    }
    strcpy((*barang).status, getckata()); 
}

//MENCARI PANJANG MAX STRING
int maximal(int idx, int n)
{
    panjangmax[idx] = panjang[idx][0];                                   //inisialisasi panjang maksimal
    for (int i = 0; i < n; i++)                                          //looping
    {
        if (panjangmax[idx] < panjang[idx][i])                           //jika panjang string ke i lebih besar dari panjang maksimal
        {                          
            panjangmax[idx] = panjang[idx][i];                           //panjang maksimal diset pada indeks tersebut
        }
    }                                                                        
    return panjangmax[idx];                                              //mengembalikan nilai panjang maksimal ke fungsi
}

//MENAMPILKAN BATAS TABEL
void batas()
{
    for (int i = 0; i < strlen("barang") + strlen("harga") + strlen("status"); i++)
    {
        printf("=");
    } 
    printf("\n");
}