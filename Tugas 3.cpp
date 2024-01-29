/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main ()
{
    string NamaPembeli;
    int Kode;
    int Jumlah;
    int Total = 0;
 
    int A = 100000;
    int B = 200000;
    int C = 300000;
    
    int Potongan;
    
    string Tiket;
          
     cout << " SELAMAT DATANG DI TIKET.COM" << endl << endl;
          
          
    cout << " Tiket Pemesanan Kereta Api "<< endl;
    cout << " ( KODE = 1 ) EKONOMI = Rp 100.000" << endl;
    cout << " ( KODE = 2 ) BISNIS = Rp 200.000" << endl;
    cout << " ( KODE = 3 ) EKSEKUTIF = Rp 300.000" << endl << endl;
    
    cout << "   Nama Pembeli = ";
    cin >> NamaPembeli;
    cout << endl;
    
    cout << "   Masukan Kode Kereta = ";
    cin >> Kode;
    cout << endl;
    
    cout << "   Masukan Jumlah Tiket = ";
    cin>> Jumlah;
    cout << endl;
    

    
    switch(Kode){
        case 1 :
        Tiket = "EKONOMI";
        Total += A * Jumlah;
        break;
        
        case 2 :
        Tiket =  "BISNIS";
        Total += B * Jumlah;
        break;
        
        case 3 :
        Tiket = "EKSEKUTIF";
        Total += C * Jumlah;
        break;
    }
    
    cout << "pesanan atas nama " << NamaPembeli << " Anda Memesan " <<  Jumlah  <<  " Tiket "  <<  Tiket  <<  " Total Harga Rp "   <<  Total  << endl << endl;
    
    if (Total >= 500000){
        Potongan = Total * 90 / 100;
        cout << "Selamat, Anda mendapatkan diskon kereta sebesar 10%, anda hanya perlu membayar tiket kereta api sebesar Rp "<<Potongan;
    }
    else if (Total >= 300000){
        Potongan = Total * 95 /  100;
        cout << "Selamat, Anda mendapatkan diskon kereta sebesar 5%, anda hanya perlu membayar tiket kereta api sebesar Rp "<<Potongan;
    }
    else if (Total >= 200000){
        Potongan =  Total * 98 / 100;
        cout << "Selamat, Anda mendapatkan diskon kereta sebesar 2%, anda hanya perlu membayar tiket kereta api sebesar Rp "<< Potongan;
    }
    
    return 0;
}
 

 
