/* 
    Saya Cantika Putri Arbiliansyah dengan NIM [2103727] mengerjakan 
    Tugas Praktikum 8 dalam mata kuliah Algoritma dan Pemrograman 2
    untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti 
    yang telah dispesifikasikan. Aamiin.
*/

//DEKLARASI LIBRARY
#include "header.h"

//FUNGSI MEMBACA LIST FILM
int readList(FILE *film, list x[])
{
    int i = 0;                                                                                  //deklarasi indeks i = 0
    fscanf(film, "%s %s %s %s", x[i].judul, x[i].sutradara, x[i].genre, x[i].bioskop);          //membaca data dari file

    if (strcmp(x[i].judul, "####") == 0)                                                        //jika data.judul isinya = #### maka ...
    { 
        printf("File kosong!\n");                                                               //tampilkan teks ke laya                 
        film = fopen("listfilm.dat", "r");                                                      //buka file list film.data dan read lagi                                                                     
        fscanf(film, "%s %s %s %s", x[i].judul, x[i].sutradara, x[i].genre, x[i].bioskop);      //membaca data dari file
    }

    while (strcmp(x[i].judul, "####") != 0)                                                     //ketika judulnya tidak sama dengan data dumy
    {
        i++;                                                                                    //maka lakukan iterasi
        fscanf(film, "%s %s %s %s", x[i].judul, x[i].sutradara, x[i].genre, x[i].bioskop);      //membaca data dari file
    }
    return i;                                                                                   //mengembalikan nilai i pada fungsi
}

//FUNGSI MEMBACA KODE
int readKode(FILE *file, kode x[], char namaFile[])
{
    int i = 0;                                                                                  //inisialisasi
    fscanf(file, "%s %s", x[i].kode, x[i].nama);                                                //proses membaca data dari File

    if (strcmp(x[i].kode, "####") == 0)                                                         //jika datanya == data dummy maka
    {
        printf("Data Kosong!");                                                                 //file tersebut kosong

        file = fopen(namaFile, "r");                                                            //buka file lagi dan lakukan hal yang sama
        fscanf(file, "%s %s", x[i].kode, x[i].nama);
    }

    while (strcmp(x[i].kode, "####") != 0)                                                      //ketika kode tidak sama dengan data dummy
    {
        i++;                                                                                    //lakukan iterasi
        fscanf(file, "%s %s", x[i].kode, x[i].nama);                                            //lalu lakukan pembacaan data file
    }
    return i;                                                                                   //mengembalikan nilai i ke fungsi
}

//FUNGSI MENAMPILKAN DATA SESUAI KODE
int cocok(char cari[], kode data[], int n)
{
    int i = 0;                                                                                  //inisialisasi
    while (strcmp(cari, data[i].kode) != 0)                                                     //ketika data yang dicari tidak sesuai maka                                   
    {       
        i++;                                                                                    //lakukan iterasi untuk mengecek ke baris selanjutnya
    }
    return i;                                                                                   //mengembalikan nilai i ke fungsi
}

//FUNGSI MENCARI STRING TERPANJANG
int maximal(int idx, int n)
{
    panjangmax[idx] = panjang[idx][0];                                                         //inisialisasi panjang maksimal
    for (int i = 0; i < n; i++)                                                                //looping
    {
        if (panjangmax[idx] < panjang[idx][i])                                                 //jika panjang string ke i lebih besar dari panjang maksimal
        {                          
            panjangmax[idx] = panjang[idx][i];                                                 //panjang maksimal diset pada indeks tersebut
        }
    }
    return panjangmax[idx];                                                                    //mengembalikan nilai panjang maksimal ke fungsi
}

//PROSEDUR MENCETAK BATASAN TIAP KOLOM
void batas(int n)
{
    printf("+");                                                                                //menampilkan + sebagai awalan dan seterusnya
    for (int j = 0; j < 2 + n; j++)                                                             //looping
    {              
        printf("-");                                                                            //menampilkan - sesuai panjnag tersisa
    }
}

//PROSEDUR MENCETAK NAMA YANG MENJADI JUDUL KOLOM
void namaKolom(int a, int b, int c, int d)
{   
    //NAMA KOLOM
    char nama1[] = "Judul_Film";                                                               //kolom pertama adalah judul film
    char nama2[] = "Sutradara";                                                                //kolom kedua adalah sutradara
    char nama3[] = "Genre";                                                                    //kolom ketiga adalah genre
    char nama4[] = "Bioskop";                                                                  //kolom keempat adalah bioskop
    
    printf("| ");                                                                              //menampilkan garis pembatas

    for (int i = 0; i < (a - strlen(nama1)) / 2; i++)                                          //looping untuk mencari panjang string lalu menampilkan spasi pada kanan kiri string
    {
        printf(" ");                                                                           //menampilkan spasi
    }
    printf("%s", nama1);                                                                       //menampilkan teks ke layar

    for (int i = (a - strlen(nama1)) / 2; i < (a - strlen(nama1)); i++)                        //looping untuk mengisi yang kososng dengan sisa spasi
    {
        printf(" ");                                                                           //menampilkan spasi ke layar
    }

    printf(" | ");                                                                             //menampilkan garis batas ke layar

    for (int i = 0; i < (b - strlen(nama2)) / 2; i++)                                          //looping dengan proses yg sama seperti diatas
    {
        printf(" ");                                                                           //menampilkan spasi
    }   

    printf("%s", nama2);                                                                       //menampilkan teks ke layar
    
    for (int i = (b - strlen(nama2)) / 2; i < (b - strlen(nama2)); i++)                        //looping untuk yang sama diatas
    {   
        printf(" ");                                                                           //menampilkan spasi
    }

    printf(" | ");                                                                             //menampilkan garis batas ke layar

    for (int i = 0; i < (c - strlen(nama3)) / 2; i++)                                          //looping
    {
        printf(" ");                                                                           //menampilkan spasi
    }

    printf("%s", nama3);                                                                       //menampilkan

    for (int i = (c - strlen(nama3)) / 2; i < (c - strlen(nama3)); i++)                        //looping
    {
        printf(" ");                                                                           //menampilkan spasi
    }

    printf(" | ");                                                                             //menampilkan garis batas ke layar

    for (int i = 0; i < (d - strlen(nama4)) / 2; i++)                                          //looping
    {
        printf(" ");                                                                           //menampilkan spasi
    }

    printf("%s", nama4);                                                                       //menampilan teks ke layar

    for (int i = (d - strlen(nama4)) / 2; i < (d - strlen(nama4)); i++)                        //looping
    {       
        printf(" ");                                                                           //menampilkna spasi le laar
    }
    printf(" |\n");                                                                            //menampilkan garis batas ke layar
}

//PROSEDUR MENAMPILKAN KELUARAN
void print(list x[], int n)
{
    //INISIALISASI STRING TERPANJANG DALAM SETIAP KOLOM
    int satu = maximal(0, n);
    int dua = maximal(1, n);
    int tiga = maximal(2, n);
    int empat = maximal(3, n);
    
    //KONDISI
    if (empat < 7)                                                                          //jika string terpanjang kolom terakhir kurang dari 7
    {
        empat = 7;                                                                          //maka string terpanjang akan sama dengan panjang judul
    }

    //MENCETAK BATASAN TIAP KOLOM
    batas(satu);                                                                            //pemanggilan prosedur pencetak kolom satu
    batas(dua);                                                                             //pemanggilan prosedur pencetak kolom dua
    batas(tiga);                                                                            //pemanggilan prosedur pencetak kolom tiga
    batas(empat);                                                                           //pemanggilan prosedur pencetak kolom empat
    printf("+\n");                                                                          //menampilkan batas atas untuk baris judul kolom
    namaKolom(satu, dua, tiga, empat);                                                      //pemanggilan prosedur cetak judul kolom
    batas(satu);                                                                            //pemanggilan prosedur pencetak kolom satu
    batas(dua);                                                                             //pemanggilan prosedur pencetak kolom dua
    batas(tiga);                                                                            //pemanggilan prosedur pencetak kolom tiga
    batas(empat);                                                                           //pemanggilan prosedur pencetak kolom empat
    printf("+\n");                                                                          //menampilkan batasbawah untuk baris judul kolom

    //MENAMPILKAN ISI DATA KE LAYAR
    for (int i = 0; i < n; i++)                                                             //looping
    {   
        //JUDUL FILM          
        printf("| %s", x[i].judul);                                                         //menampilkan judul film ke layar dan batasnya

        if (strlen(x[i].judul) < satu)                                                      //jika panjangnya lebih kecil dari batas satu
        { 
            for (int j = strlen(x[i].judul); j < satu; j++)                                 //looping
            {                
                printf(" ");                                                                //menampilkan spasi ke layar
            }               
        }

        //SUTRADARA
        printf(" | %s", x[i].sutradara);                                                    //menampilkan nama sutradara ke layar dan batasnya

        if (strlen(x[i].sutradara) < dua)                                                   //jika nilainya lebih kecil dari batas dua
        { 
            for (int j = strlen(x[i].sutradara); j < dua; j++)                              //looping
            {                
                printf(" ");                                                                //menampilkan spasi ke layar
            }                
        }

        //GENRE
        printf(" | %s", x[i].genre);                                                        //menampilkan genre ke layar dan batasnya

        if (strlen(x[i].genre) < tiga)                                                      //jika panjangnya lebih kecil dari batas tiga
        { //--------------------------)
            for (int j = strlen(x[i].genre); j < tiga; j++)                                 //looping
            {                
                printf(" ");                                                                //menampilkan spasi ke layar
            }                
        }

        //BIOSKOP
        printf(" | %s", x[i].bioskop);                                                      //menampilkan bioskop ke layar dan batasnya

        if (strlen(x[i].bioskop) < empat)                                                   //jika panjangnya lebih kecil dari batas empat
        { 
            for (int j = strlen(x[i].bioskop); j < empat; j++)                              //menampilkan spasi ke layar
            {                   
                printf(" ");                                                                //menampilkan spasi ke layar
            }                
        }
        printf(" |\n");                                                                     //menampilkan batas ke layar

        //PMANGGILAN PROSEDUR FUNGSI
        batas(satu);
        batas(dua);
        batas(tiga);
        batas(empat);

        printf("+\n");                                                                      //menampilkan batas bawah pada setiap data
    }
}

//PROSEDUR SEARCHING
void binSearch(char id_cari[], kode file[], int n)
{   
    int i = 0, k = 0, ketemu = 0;                                                           //inisialisasi

    while ((i <= n) && (ketemu == 0))                                                       //syarat while ketika indeks kurag dari sama dengan n dan ketemu = 0
    {
        k = (int)((i + n) / 2);                                                             //maka cari nilai tengahnya
        if (strcmp(id_cari, file[k].kode) == 0)                                             //jika id yang dicari sesuai dengan kode
        {   
            ketemu = 1;                                                                     //tandai ketemu = 1
        }
        else                                                                                //jika tidak
        {
            if(strcmp(id_cari, file[k].kode) < 0)                                           //jika id yg dicari lebih kecil dari indeks file code
            {
                n = k - 1;                                                                  //maka cari di indeks sebelah kiri
            }
            else                                                                            //jika tidak
            {
                i = k + 1;                                                                  //maka cari di sebelah kanan
            }
        }
    }

    //KONDISI
    if(ketemu == 1)                                                                         //jika ketemu = 1 maka
    {
        printf("Hasil: %s\n", file[k].nama);                                                //tampilkan hasil ke layar
    }
    else                                                                                    //jika tidak maka
    {
        printf("Hasil: data tidak ditemukan\n");                                            //tampilkan teks ke layar
    }   
}
 
void tambahListFilm(list data[])
{
    FILE *dfilm;                        
    dfilm = fopen("listfilm.dat", "r");

    int i = 0, a = 0;

    fscanf(dfilm, "%s %s %s %s", data[a].judul, data[a].sutradara, data[a].genre, data[a].bioskop);

    while (strcmp(data[a].judul, "####") != 0)
    { 
        a++;
        fscanf(dfilm, "%s %s %s %s", data[a].judul, data[a].sutradara, data[a].genre, data[a].bioskop);
    }
    
    scanf("%s %s %s %s", data[a].judul, data[a].sutradara, data[a].genre, data[a].bioskop);

    while (strcmp(data[a].judul, "####") != 0)
    { 
        a++;
        scanf("%s %s %s %s", data[a].judul, data[a].sutradara, data[a].genre, data[a].bioskop);
    }
    fclose(dfilm);     

    dfilm = fopen("listfilm.dat", "w"); 
    for (i = 0; i < a; i++)
    {
        fprintf(dfilm, "%s %s %s %s\n", data[i].judul, data[i].sutradara, data[i].genre, data[i].bioskop);
    }
    
    fprintf(dfilm, "%s %s %s %s\n", "####", "####", "####", "####");
    fclose(dfilm);
}

void tambahListKode(kode data[], char nama_file[])
{
    FILE *filekode;                                 
    filekode = fopen(nama_file, "r");               

    int n = readKode(filekode, data, nama_file); 
    fclose(filekode);         
                        
    writeFileKode(filekode, data, n, nama_file);     
    fclose(filekode);                              
}

void writeFileKode(FILE *file, kode data[], int n, char nama_file[])
{
    scanf("%s %s", data[n].kode, data[n].nama); 
    while (strcmp(data[n].kode, "####") != 0)
    { 
        n++;
        scanf("%s %s", data[n].kode, data[n].nama); 
    }

    fclose(file);                
    file = fopen(nama_file, "w"); 

    for (int i = 0; i < n; i++)
    {
        fprintf(file, "%s %s\n", data[i].kode, data[i].nama); 
    }

    fprintf(file, "%s %s\n", "####", "####"); 
    fclose(file);                             
} 