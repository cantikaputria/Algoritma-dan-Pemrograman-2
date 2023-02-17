/* 
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
    Tugas Masa Depan dalam mata kuliah Algoritma dan Pemrograman 2
    untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

//LIBRARY
#include "header.h"

//MEMBACA FILE BUKU
int readBuku(FILE *buku, book x[])
{
    int i = 0;                                                                                          //inisialisasi indeks i = 0
    fscanf(buku, "%s %s %s %s", x[i].kd_buku, x[i].judul, x[i].penulis, x[i].penerbit);                 //membaca data dari file

    if (strcmp(x[i].kd_buku, "####") == 0)                                                              //jika kode buku isinya = #### maka merupakan end file
    { 
        printf("File kosong!\n");                                                                       //tampilkan teks ke layar               
        buku = fopen("buku.dat", "r");                                                                  //buka file list file dan read lagi                                                                     
        fscanf(buku, "%s %s %s %s", x[i].kd_buku, x[i].judul, x[i].penulis, x[i].penerbit);             //membaca data dari file
    }

    while (strcmp(x[i].kd_buku, "####") != 0)                                                           //ketika kode buku tidak sama maka bukan end file
    {
        i++;                                                                                            //maka lakukan iterasi
        fscanf(buku, "%s %s %s %s", x[i].kd_buku, x[i].judul, x[i].penulis, x[i].penerbit);             //membaca data dari file
    }
    return i;                                                                                           //mengembalikan nilai i pada fungsi
}

//MEMBACA FILE PENULIS
int readKode(FILE *penulis, author x[])
{
    int i = 0;                                                                                          //inisialisasi
    fscanf(penulis, "%s %s", x[i].kode, x[i].nama);                                                     //proses membaca data dari File

    if (strcmp(x[i].kode, "####") == 0)                                                                 //jika datanya == data dummy maka
    {
        printf("Data Kosong!");                                                                         //file tersebut kosong

        penulis = fopen("penulis.dat", "r");                                                            //buka file lagi dan lakukan hal yang sama
        fscanf(penulis, "%s %s", x[i].kode, x[i].nama);                                                 //membaca data fdari file
    }

    while (strcmp(x[i].kode, "####") != 0)                                                              //ketika kode tidak sama dengan data dummy
    {
        i++;                                                                                            //lakukan iterasi
        fscanf(penulis, "%s %s", x[i].kode, x[i].nama);                                                 //lalu lakukan pembacaan data file
    }
    return i;                                                                                           //mengembalikan nilai i
}

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
    return ckata;                                                                  //mengembalikan kata saat ini
}

//MENGECEK KELENGKAPAN DATA BUKU
int cekBuku(char str[], book (*temp), int key)
{
    if (key == 1)                                                                  //jika key nya = 1, maka
    {
        inc(str);                                                                  //lakukan increment untuk membaca query selanjutnya
    }
    
    if(eop(str) == 1)                                                              //jika merupakan EOP
    {
        return 1;                                                                  //maka kembalikan nilai 1
    }
    strcpy((*temp).kd_buku, getckata());                                           //masukkan kata saat ini ke variabel temp kode buku

    inc(str);                                                                      //maju satu kata
    if(eop(str) == 1)                                                              //jika merupakan EOP
    {
        return 1;                                                                  //maka kembalikan nilai 1
    }
    strcpy((*temp).judul, getckata());                                             //masukkan kata saat ini ke variabel temp judul

    inc(str);                                                                      //maju satu kata
    if(eop(str) == 1)                                                              //jika merupakan EOP
    {
        return 1;                                                                  //maka kembalikan nilai 1
    }
    strcpy((*temp).penulis, getckata());                                           //masukkan kata saat ini ke variabel temp penulis

    inc(str);                                                                      //maju satu kata
    strcpy((*temp).penerbit, getckata());                                          //masukkan kata saat ini ke variabel temp penerbit

    return 0;                                                                      //kembalikan nilai 0
}

//MENGECEK KELENGKAPAN DATA PENULIS
int cekPenulis(char str[], author (*temp), int key)
{
    if (key == 1)                                                                  //jika key nya = 1, maka
    {
        inc(str);                                                                  //jika merupakan EOP
    }
    
    if(eop(str) == 1)                                                              //jika merupakan EOP
    {
        return 1;                                                                  //maka kembalikan nilai 1
    }
    strcpy((*temp).kode, getckata());                                              //masukkan kata saat ini ke variabel temp kode penulis

    inc(str);                                                                      //maju satu kata
    strcpy((*temp).nama, getckata());                                              //masukkan kata saat ini ke variabel temp nama penulis

    return 0;                                                                      //kembalikan nilai 0
}

//MENULIS DATA KE FILE BUKU
void writeBuku(FILE *buku, int n, book datBuku[])
{
    buku = fopen("tbuku.dat", "w");                                                //membuka file buku

    n = 0;                                                                         //inisialisasi
    while(strcmp(datBuku[n].kd_buku, "####") != 0)                                 //ketika kode bukunya bukan EOP
    {
        fprintf(buku, "%s %s %s %s\n", datBuku[n].kd_buku, datBuku[n].judul, datBuku[n].penulis, datBuku[n].penerbit); //lakukan penulisan data pada file ke struct
        n++;                                                                       //increment
    }

    fprintf(buku, "#### #### #### ####\n");                                        //menuliskan EOP pada buku
    fclose(buku);                                                                  //menutup file buku
}

//INSERT DATA KE FILE BUKU
void insertBuku(book datBuku[], book tempB, book tutupB, FILE *buku, int n)
{
    int i = 0;                                                                      //inisialisasi
    while(strcmp(datBuku[i].kd_buku, "####") != 0)                                  //ketika kode buku bukan EOP
    {
        i++;                                                                        //increment
    }
    datBuku[i] = tempB;                                                             //masukkan data buku indeks i ke variabel temp
    datBuku[i+1] = tutupB;                                                          //masukkan data buku selanjutnya ke variabel temp penutup

    writeBuku(buku, n, datBuku);                                                    //pemanggilan prosedur menulis file
}

//MENULIS DATA KE FILE PENULIS
void writePen(FILE *penulis, int n, author datPen[])
{
    penulis = fopen("tpenulis.dat", "w"); 
    n = 0;                                                                          //inisialisasi
    while(strcmp(datPen[n].kode, "####") != 0)                                      //jika data bukan merupakan EOP
    {
        fprintf(penulis, "%s %s\n", datPen[n].kode, datPen[n].nama);                //lakukan penulisan data pada struct
        n++;                                                                        //increment
    }

    fprintf(penulis, "#### ####\n");                                                //menuliskan EOP pada penulis
    fclose(penulis);                                                                //menutup file penulis
}

//INSERT DATA KE FILE BUKU
void insertPen(author datPen[], author tempA, author tutupA, FILE *penulis, int n)
{
    int i = 0;                                                                      //inisialisasi
    while(strcmp(datPen[i].kode, "####") != 0)                                      //ketika kode penulis bukan EOP
    {
        i++;                                                                        //increment
    }
    datPen[i] = tempA;                                                              //masukkan data penulis indeks i ke variabel temp
    datPen[i+1] = tutupA;                                                           //masukkan data penulis selanjutnya ke variabel temp penutup

    penulis = fopen("tpenulis.dat", "w");                                           //membuka file penulis
    writePen(penulis, n, datPen);                                                   //melakukan pemanggilan prosedur proses penulisan
}

//MEMASUKKAN DATA BUKU DENGAN CEK KELENGKAPAN
void insertFixBuku(char pita[], book datBuku[], book tempB, book tutupB, FILE *buku, int n, int m)
{
    if(cekBuku(pita, &tempB, m) == 1)                                   //jika prosedur cek buku menampilkan nilai 1
    {
        printf("Data tidak lengkap!\n");                                //maka datanya tidak lengkap
    }
    else                                                                //jika tidak maka datanya lengkap
    {       
        insertBuku(datBuku, tempB, tutupB, buku, n);                    //lalu lakukan prosedur insert data buku
    }
}

//MEMASUKKAN DATA PENULIS DENGAN CEK KELENGKAPAN
void insertFixPen(char pita[], author datPen[], author tempA, author tutupA, FILE *penulis, int n, int m)
{
    if(cekPenulis(pita, &tempA, m) == 1)                                            //jika prosedur cek penulis menampilkan nilai 1
    {
        printf("Data tidak lengkap!\n");                                            //maka datanya tidak lengkap
    }
    else                                                                            //jika tidak maka datanya lengkap
    {
        insertPen(datPen, tempA, tutupA, penulis, n);                               //lalu lakukan prosedur insert data penulis
    }
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

//MENAMPILKAN BATAS DALAM TABEL
void batas(int n1, int n2)
{
    if(n1 < n2)
    {
        printf("+");                                                    //menampilkan + sebagai awalan dan seterusnya
        for (int j = 0; j < 2 + n2; j++)                                //looping
        {              
            printf("-");                                                //menampilkan - dengan jumlah sesuai panjnag tersisa
        }
    }
    else                                                                //jika tidak maka
    {
        printf("+");                                                    //menampilkan + sebagai awalan dan seterusnya
        for (int j = 0; j < 2 + n1; j++)                                //looping
        {              
            printf("-");                                                //menampilkan - sesuai panjnag tersisa
        }
    }
}

//MENAMPILKAN NAMA KOLOM PADA TABEL
void namaKolom(int *a, int *b, int *c, int *d)
{   
    if(*a < strlen("Kode_Buku"))                                                    //jika panjang a lebih kecil dari panjang kode buku
    {
        *a = strlen("Kode_Buku");                                                   //panjang a adalah panjang string kode buku
        printf("| Kode_Buku |");                                                    //menampilkan nama kolom ke layar
    }

    for (int i = 0; i < (*b - strlen("Judul_Buku")) / 2; i++)                       //looping dengan proses yg sama seperti diatas
    {
        printf(" ");                                                                //menampilkan spasi
    }   

    printf(" Judul_Buku ");                                                         //menampilkan teks ke layar
    
    for (int i = (*b - strlen("Judul_Buku")) / 2; i < (*b - strlen("Judul_Buku")); i++)  //looping untuk yang sama diatas
    {   
        printf(" ");                                                                //menampilkan spasi
    }
                                                        
    if(*c < strlen("Penulis"))                                                      //jika panjang c lebih kecil dari panjang string penulis
    {   
        *c = strlen("Penulis");                                                     //lakukan proses yang sama seperti datas
        printf("| Penulis |");                                                      //menampilkan nama kolom ke layar
    }
   
    for (int i = 0; i < (*d - strlen("Penerbit")) / 2; i++)                         //looping
    {
        printf(" ");                                                                //menampilkan spasi
    }

    printf(" Penerbit");                                                            //menampilan teks ke layar

    for (int i = (*d - strlen("Penerbit")) / 2; i < (*d - strlen("Penerbit")); i++) //looping
    {       
        printf(" ");                                                                //menampilkna spasi le laar
    }
    printf(" |\n");                                                                 //menampilkan garis batas ke layar
}

//MENAMPILKAN DATA TABEL FILE BUKU
void printW(book x[], int n)
{
    int satu = maximal(0, n);                                                       //variabel penampung fungsi panjang maksimal kolom ke 1
    int dua = maximal(1, n);                                                        //variabel penampung fungsi panjang maksimal kolom ke 2
    int tiga = maximal(2, n);                                                       //variabel penampung fungsi panjang maksimal kolom ke 3
    int empat = maximal(3, n);                                                      //variabel penampung fungsi panjang maksimal kolom ke 4

    //KONDISI
    if (empat < 7)                                                                  //jika string terpanjang kolom terakhir kurang dari 7
    {
        empat = 7;                                                                  //maka string terpanjang akan sama dengan panjang judul
    }

    //MENCETAK BATASAN TIAP KOLOM
    batas(satu, strlen("Kode_Buku"));                                               //pemanggilan prosedur pencetak kolom satu
    batas(dua, strlen("Judul_Buku"));                                               //pemanggilan prosedur pencetak kolom dua
    batas(tiga, strlen("Penulis"));                                                 //pemanggilan prosedur pencetak kolom tiga
    batas(empat, strlen("Penerbit"));                                               //pemanggilan prosedur pencetak kolom empat
    printf("+\n");                                                                  //menampilkan batas atas untuk baris judul kolom
    namaKolom(&satu, &dua, &tiga, &empat);                                          //pemanggilan prosedur cetak judul kolom
    batas(satu, strlen("Kode_Buku"));                                               //pemanggilan prosedur pencetak kolom satu
    batas(dua, strlen("Judul_Buku"));                                               //pemanggilan prosedur pencetak kolom dua
    batas(tiga, strlen("Penulis"));                                                 //pemanggilan prosedur pencetak kolom tiga
    batas(empat, strlen("Penerbit"));                                               //pemanggilan prosedur pencetak kolom empat
    printf("+\n");                                                                  //menampilkan batasbawah untuk baris judul kolom

    //MENAMPILKAN ISI DATA KE LAYAR
    for (int i = 0; i < n; i++)                                                     //looping
    {   
        //KODE BUKU         
        printf("| %s", x[i].kd_buku);                                               //menampilkan kode buku ke  ke layar dan batasnya

        if (strlen(x[i].kd_buku) < satu)                                            //jika panjang kode buku lebih kecil dari batas kolom satu
        { 
            for (int j = strlen(x[i].kd_buku); j < satu; j++)                       //looping sepanjang string terpanjang
            {                
                printf(" ");                                                        //menampilkan spasi ke layar
            }               
        }

        //JUDUL BUKU
        printf(" | %s", x[i].judul);                                                //menampilkan judul buku ke layar dan batasnya

        if (strlen(x[i].judul) < dua)                                               //jika nilainya lebih kecil dari batas dua
        { 
            for (int j = strlen(x[i].judul); j < dua; j++)                          //looping sepanjang string terpanjang
            {                
                printf(" ");                                                         //menampilkan spasi ke layar
            }                
        }

        //PENULIS
        printf(" | %s", x[i].penulis);                                                //menampilkan penulis ke layar dan batasnya

        if (strlen(x[i].penulis) < tiga)                                              //jika panjangnya lebih kecil dari batas tiga
        { //--------------------------)
            for (int j = strlen(x[i].penulis); j < tiga; j++)                         //looping sepanjang string terpanjang
            {                
                printf(" ");                                                          //menampilkan spasi ke layar
            }                
        }

        //PENERBIT
        printf(" | %s", x[i].penerbit);                                               //menampilkan penerbit ke layar dan batasnya

        if (strlen(x[i].penerbit) < empat)                                            //jika panjangnya lebih kecil dari batas empat
        { 
            for (int j = strlen(x[i].penerbit); j < empat; j++)                       //looping sepanjang string terpanjang
            {                   
                printf(" ");                                                          //menampilkan spasi ke layar
            }                
        }
        printf(" |\n");                                                               //menampilkan batas ke layar

        //PEMANGGILAN FUNGSI
        batas(satu, strlen("Kode_Buku"));                                             //menampilkan batas tiap baris
        batas(dua, strlen("Judul_Buku"));                                             //menampilkan batas tiap baris
        batas(tiga, strlen("Penulis"));                                               //menampilkan batas tiap baris 
        batas(empat, strlen("Penerbit"));                                             //menampilkan batas tiap baris

        printf("+\n");                                                                //menampilkan batas bawah pada setiap data
    }
}

//MENAMPILKAN NAMA KOLOM PADA TABEL
void namaKolom2(int *a, int *b)
{
    if(*a < strlen("Kode_Penulis"))                                                   //jika a lebih kecil dari panjang string kode penulis
    {
        *a = strlen("Kode_Penulis");                                                  //panjang a adalah panjang string kode penulis
        printf("| Kode_Penulis |");                                                   //menampilkan nama kolom ke layar
    }

    for (int i = 0; i < (*b - strlen("Nama_Penulis")) / 2; i++)                       //looping dengan proses yg sama seperti diatas
    {
        printf(" ");                                                                  //menampilkan spasi
    }   

    printf("Nama_Penulis");                                                           //menampilkan teks nama kolom ke layar
    
    for (int i = (*b - strlen(" Nama_Penulis ")) / 2; i < (*b - strlen("Nama_Penulis")); i++)          //looping dengan proses yang sama diatas
    {   
        printf(" ");                                                                   //menampilkan spasi
    }

    printf(" |\n");                                                                    //menampilkan tutup kolom paling kanan
}

//MENAMPILKAN DATA TABEL FILE PENULIS
void printA(author x[], int n)
{
    int satu = maximal(0, n);                                                          //variabel penampung fungsi panjang maksimal kolom ke 1
    int dua = maximal(1, n);                                                           //variabel penampung fungsi panjang maksimal kolom ke 2

    //KONDISI
    if (dua < 7)                                                                       //jika string terpanjang kolom terakhir kurang dari 7
    {
        dua = 7;                                                                       //maka string terpanjang akan sama dengan panjang judul
    }

    //MENCETAK BATASAN TIAP KOLOM
    batas(satu, strlen("Kode_Penulis"));                                               //pemanggilan prosedur pencetak kolom satu
    batas(dua, strlen("Nama_Penulis"));                                                //pemanggilan prosedur pencetak kolom dua
    printf("+\n");                                                                     //menampilkan batas atas untuk baris judul kolom
    namaKolom2(&satu, &dua);                                                           //pemanggilan prosedur cetak judul kolom
    batas(satu, strlen("Kode_Penulis"));                                               //pemanggilan prosedur pencetak kolom satu
    batas(dua, strlen("Nama_Penulis"));                                                //pemanggilan prosedur pencetak kolom dua
    printf("+\n");                                                                     //menampilkan batasbawah untuk baris judul kolom

    //MENAMPILKAN ISI DATA KE LAYAR
    for (int i = 0; i < n; i++)                                                        //looping
    {   
        //KODE PENULIS         
        printf("| %s", x[i].kode);                                                     //menampilkan kode penulis ke layar dan batasnya

        if (strlen(x[i].kode) < satu)                                                  //jika panjangnya lebih kecil dari batas satu
        { 
            for (int j = strlen(x[i].kode); j < satu; j++)                             //looping sepanjang string terpanjang
            {                
                printf(" ");                                                           //menampilkan spasi ke layar
            }               
        }

        //NAMA PENULIS
        printf(" | %s", x[i].nama);                                                    //menampilkan nama judul ke layar dan batasnya

        if (strlen(x[i].nama) < dua)                                                   //jika nilainya lebih kecil dari batas dua
        { 
            for (int j = strlen(x[i].nama); j < dua; j++)                              //looping
            {                
                printf(" ");                                                           //menampilkan spasi ke layar
            }                
        }

        printf(" |\n");                                                                //menampilkan batas kolom kanan ke layar

        //PMANGGILAN PROSEDUR FUNGSI
        batas(satu, strlen("Kode_Penulis"));                                           //menampilkan batas tiap baris
        batas(dua, strlen("Nama_Penulis"));                                            //menampilkan batas tiap baris

        printf("+\n");                                                                 //menampilkan batas bawah pada setiap data
    }
}