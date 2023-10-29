#include <iostream>
using namespace std;

int main()
{
    int Luas; //luas yang akan dihitung
    int Bidang; //jenis bidang yang akan dihitung luasnya

    cout<< " Persegi : 1 \n Persegi Panjang : 2 \n Segitiga : 3"<<endl; //memasukan jenis bidang yang akan dihitung luas nya
    cout<< "Masukan Bidang : ";
    cin>>Bidang;

    switch(Bidang){ //rumus yang akan keluar sesuai dengan bidang yang dipilih
    case 1:
    int Sisi;
    cout<< "Masukan sisi dari persegi : "; //memasukan panjang sisi persegi
    cin>>Sisi;
    Luas = Sisi*Sisi; //rumus persegi
    break;

    case 2:
        int Panjang,Lebar;
        cout<< "Masukan panjang Persegi panjang : "; //memasukan panjang persegi panjang
        cin>>Panjang;
        cout<< "Masukan lebar Persegi Panjang : "; //memasukan lebar persegi panjang
        cin>>Lebar;
        Luas = Panjang*Lebar; //rumus persegi panjang
        break;

    case 3:
        int Alas,Tinggi;
        cout<< "Masukan Alas segitiga : "; //memasukan alas segitiga
        cin>>Alas;
        cout<< "Masukan Tinggi segitiga : "; //memasukan tinggi segitiga
        Luas = 0.5*Alas*Tinggi; //rumus segitiga
        break;

    default :
        cout<< "Anda salah memasukan format!"; //jika memasukan variabel bidang yang salah
        break;}

        cout<< "Luas nya adalah :"<<Luas<<endl; //hasil luas bidang yang telah dipilih
}
