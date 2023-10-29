#include <iostream>
  using namespace std;

 int main ()
 {
     int A;

     cout << "Masukan Nlai Mu: "; //input nilai mahasiswa
     cin >>A;

     if (A >100) { //memeriksa nilai apakah lebih dari 100
     cout << "Lu Dewa Nilai Lebih Dari 100?" <<endl;
     }
     else if (A >=90) { //memeriksa nilai apakah sama/lebih dari 90
        cout << "Selamat Anda Mendapatkan Nilai A!" <<endl;
     }
     else if (A >=80) { //memeriksa nilai apakah sama / lebih dari 80
        cout << "Selamat Anda Menadapatkan Nilai B!";
     }
     else if (A >= 70) { //memeriksa nilai apakah sama / lebih dari 70
        cout << "Selamat Anda Mendapatkan Nilai C!";
     }
     else if (A >=60) { //memeriksa nilai apakah lebih / sama dengan 60
        cout << "Selamat Anda Mendapatkan Nilai D!";
     }else if (A <60) { //memeriksa nilai apakah kurang dari 60
     cout<< "Selamat Anda Mendapatkan Nilai E!";}
     return 0;
     }
