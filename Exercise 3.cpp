#include <iostream>
#include <cmath>
using namespace std;

int main () {
	
	//please find the square root below
	//81, 64 and 36
	
//	cout<< sqrt(81) <<"\n";
//	cout<< sqrt(64) << endl;
//	cout<< sqrt(36);
//-----------------------------------------
//    cout << "Masukkan Angka Pertama: ";
//    cin >> x;
//    cout << "Masukkan Angka Kedua: ";
//    cin >> y;
    
    double x = 9;
    double y = -3.8;
    string z = "-------------------------------------------";
    string a = "Tugas Algoritme dan Pemrograman 1";
    string b = "Mochamad One Sopyan";
    
    cout << a << endl;
    cout << b << endl;
    cout << z << endl;
    cout<< "\n"; 
    // Menggunakan fungsi sqrt() untuk menghitung akar kuadrat//square root
    cout << "Akar kuadrat dari " << x << " adalah: " << sqrt(x) << endl;
    cout << z << endl;

    // Menggunakan fungsi pow() untuk menghitung pangkat
    cout << "3 pangkat 4 adalah: " << pow(3, 4) << endl;
    cout << z << endl;

    // Menggunakan fungsi abs() untuk menghitung nilai absolut // ABS() = Fungsi ini akan mengubah bilangan menjadi absolute, artinya ABS() akan menghapus atau merubah bilangan negatif menjadi positif
    cout << "Nilai absolut dari " << y << " adalah: " << abs(y) << endl;
    cout << z << endl;

    // Menggunakan fungsi fmod() untuk menghitung sisa pembagian
    cout << "Sisa pembagian " << x << " dibagi 4 adalah: " << fmod(x, 4) << endl;
    cout << z << endl;

    // Menggunakan fungsi ceil() untuk membulatkan ke atas// Fungsi CEILING membulatkan angka ke atas ke kelipatan bilangan bulat terdekat dari signifikansi yang ditentukan
    cout << "Nilai " << y << " dibulatkan ke atas adalah: " << ceil(y) << endl;
    cout << z << endl;

    // Menggunakan fungsi floor() untuk membulatkan ke bawah
    cout << "Nilai " << y << " dibulatkan ke bawah adalah: " << floor(y) << endl;
    cout << z << endl;

    // Menggunakan fungsi sin() untuk menghitung sinus
    cout << "Sinus dari 45 derajat adalah: " << sin(45) << endl;
    cout << z << endl;

    return 0;

}

