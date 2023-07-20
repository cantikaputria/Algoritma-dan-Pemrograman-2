/* 
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
    Tugas Praktikum 10 dalam mata kuliah Algoritma dan Pemrograman 2
    untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

//DEKLARASI LIBRARY
#include "header.h"

//PROSEDUR MENYALAKAN MESIN DAN MEMULAI PROSES PEMBACAAN
void start(char str[])
{
    indeks = 0;                                                                    //inisialisasi indeks = 0
    panjangkata = 0;                                                               //inisialisasi panjnag kata = 0

    //jika karakternya spasi atau titik koma maka indeksnya terus maju
    while ((str[indeks] == ';') || (str[indeks] == ' '))
    {
        indeks++;                                                                  //increment nilai indeks
    }

    //jika karakternya selain titik koma dan EOP
    while ((str[indeks] != ';') && (eop(str) == 0))
    {
        ckata[panjangkata] = str[indeks];                                          //kata dimasukkan ke variabel global
        indeks++;                                                                  //increment nilai indeks 
        panjangkata++;                                                             //increment panjang kata
    }

    //inisialisasi
    ckata[panjangkata] = '\0';                                                     //inisialisasi indeks terakhir kata menjadi null
}

//PROSEDUR UNTUK MEMBERSIHKAN CKATA
void reset()
{
    panjangkata = 0;                                                               //inisialisasi panjang kata
    ckata[panjangkata] = '\0';                                                     //inisialisasi indeks panjang terakhir menjadi null
}

//FUNGSI END OF PROCESS SEBAGAI AKHIR KALIMAT
int eop(char str[])
{
    if (str[indeks] == '.')                                                        //jika bertemu karakter . maka akhir kalimat
    {
        return 1;                                                                  //kembalikan nilai 1
    }
    else                                                                           //jika tidak maka
    {
        return 0;                                                                  //kembalikan nilai 0
    }
}

//FUNGSI MEMAJUKAN MESIN KATA
void inc(char str[])
{
    panjangkata = 0;                                                               //inisialisasi panjang kata

    //jika karakternya spasi atau titik koma maka indeksnya terus maju
    while ((str[indeks] == ';') || (str[indeks] == ' '))
    {
        indeks++;                                                                  //increment nilai indeks
    }   

    //jika karakternya selain titik koma dan EOP
    while ((str[indeks] != ';') && (eop(str) == 0))
    {
        ckata[panjangkata] = str[indeks];                                          //kata dimasukkan ke variabel global
        indeks++;                                                                  //increment nilai indeks
        panjangkata++;                                                             //increment panjang kata
    }

    ckata[panjangkata] = '\0';                                                     //inisialisasi indeks terakhir kata menjadi null
}

//FUNGSI UNTUK MENDAPATKAN KATA SAAT INI
char *getckata()
{
    return ckata;                                                                  //mengembalikan kata saat ini
}

//PROSEDUR SORTING ASCENDING
void bubble(int n, kata blabla[])                                         
{
    //DEKLARASI VARIABEL                            
    char tempstr[50];                                                              //deklarasi variabel Sementara penampung string kata
    int swap;                                                                      //deklarasi indeks untuk perpindahan
    int i, j;                                                                      //variabel iterasi

    //PROSES
    do                                                                             //lakukan
    {
        swap = 0;                                                                  //nilai swap di set = 0

        for ( i = 0; i < (n - 1); i++)                                             //perulangan
        {
            if(strcmp(blabla[i].kata, blabla[i+1].kata) > 0)                       //jika kata ke indeks lebih besar dari kata ke indeks + 1 (setelah indeks)
            {
                //tukar string
                strcpy(tempstr, blabla[i].kata);                                  //copykan string i kata ke variabel tempstr
                strcpy(blabla[i].kata, blabla[i + 1].kata);                       //memasukkan indeks dengan indeks i + 1
                strcpy(blabla[i + 1].kata, tempstr);                              //string dari temp dimasukkan ke indeks i + 1



                swap = 1;                                                         //jika proses selesai, nilai swap = 1
            }
        }
        
    } while (swap == 1);                                                          //ketika swap = 1 maka program berhenti
}