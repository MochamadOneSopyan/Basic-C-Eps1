#include <iostream>
#include <cstring> // Library untuk fungsi-fungsi pustaka string

using namespace std;

int main() {
    // Inisialisasi string
    char nama1[30] = "Mochamad ";
    char nama2[30] = "One Sopyan";
    char nama3[30] = "UNPAM TI";
    
    string z = "````````````````````````````````````````````````````";

	cout << "Nama1 :" << nama1<< endl;
	cout << "Nama2 :" << nama2 << endl;
	cout << "Nama3 :" << nama3 << endl;
	cout<< z << endl;
    // Menggunakan fungsi strcpy() untuk menyalin string
    cout << "nama3 sebelum menyalin nama 1 yaitu: "<< nama3 << endl;
    strcpy(nama3, nama1);
    
    cout << "nama3 setelah menyalin dari nama1: " << nama3 << endl;

    // Menggunakan fungsi strcat() untuk menggabungkan string
    strcat(nama1, nama2);
    cout << "nama1 setelah digabungkan dengan nama2: " << nama1 << endl;

    // Menggunakan fungsi strchr() untuk mencari karakter pertama yang cocok dalam string/ Mencari karakter 'o' pertama dalam string nama1
    // tanda 'o' ini bermaksud huruf yg dicari
    char *ptr = strchr(nama1, 'M');
    cout << "Karakter pertama 'M' dalam nama1 yaitu: " << *ptr << endl;

    // Menggunakan fungsi strcmp() untuk membandingkan dua string
    int result = strcmp(nama1, nama2);
    if (result == 0)
        cout << "nama1 dan nama2 jumlah hurufnya sama" << endl;
    else if (result < 0)
        cout << "nama1 lebih sedikit hurufnya dari nama2" << endl;
    else
        cout << "nama1 lebih banyak hurufnya dari nama2" << endl;

    // Menggunakan fungsi strlen() untuk menghitung panjang string
    cout << "Panjang nama1: " << strlen(nama1) << endl;
    cout << "Panjang nama2: " << strlen(nama2) << endl;

    return 0;
}

