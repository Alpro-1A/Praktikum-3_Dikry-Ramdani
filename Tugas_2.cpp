#include <iostream>
using namespace std;

int main()
{
    int A,B,C;

    cout<< "Masukan Angka Pertama : ";
    cin>> A;
    cout<< "Masukan Angka Kedua : ";
    cin>> B;
    cout<< "Masukan Angka Ketiga : ";
    cin>> C; //memasukan angka untuk di tampilkan mana yanag terbesar

    int besar = A; //A menjadi yang terbesar
    if (B>besar){ //B menjadi yang terbesar jika lebih besar dari A
    besar=B;
    }if (C>besar){ //C menjadi yang terbesar jika lebih besar dari B
    besar=C;
    }
    cout << "Angka Terbesar : " << besar<<endl; //output menunjukan angka yang terbesar

    return 0;
}
