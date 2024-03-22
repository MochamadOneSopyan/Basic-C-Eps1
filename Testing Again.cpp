#include <iostream>
#include <cstring> // Library untuk fungsi-fungsi pustaka string

using namespace std;

int main() {
    // Inisialisasi string
    char nama1[30] = "Mochamad";
    char nama2[30] = "One Sopyan";
    char nama3[30];

    // Menggunakan fungsi strcpy() untuk menyalin string
    strcpy(nama3, nama1);
    cout << "nama3 setelah disalin dari nama1: " << nama3 << endl;

    // Menggunakan fungsi strcat() untuk menggabungkan string
    strcat(nama1, nama2);
    cout << "nama1 setelah digabungkan dengan nama2: " << nama1 << endl;

    // Menggunakan fungsi strchr() untuk mencari karakter pertama yang cocok dalam string
    char *ptr = strchr(nama1, 'W');
    cout << "Karakter pertama 'W' dalam nama1: " << *ptr << endl;

    // Menggunakan fungsi strcmp() untuk membandingkan dua string
    int result = strcmp(nama1, nama2);
    if (result == 0)
        cout << "nama1 dan nama2 identik" << endl;
    else if (result < 0)
        cout << "nama1 lebih kecil dari nama2" << endl;
    else
        cout << "nama1 lebih besar dari nama2" << endl;

    // Menggunakan fungsi strlen() untuk menghitung panjang string
    cout << "Panjang nama1: " << strlen(nama1) << endl;
    cout << "Panjang nama2: " << strlen(nama2) << endl;

    return 0;
}
	
