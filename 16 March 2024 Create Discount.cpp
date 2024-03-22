#include <iostream>
#include <cstring>
//#include <cmath>


using namespace std;

int main() {
	
	// Tugas untuk menghitung diskon apabila membeli dengan harga 1000000 atau lebih dapat 10% jika kurang mendapat diskon 5%
	int hargaBarang, jumlahBarang;
	
	cout << " Masukkan Harga Barang : ";
	cin >> hargaBarang;
	
	cout << " Masukkan Jumlah Barang : ";
	cin >> jumlahBarang;
	
	int totalHarga = hargaBarang*jumlahBarang;
	
	
	cout << " Total Pembelian : " << totalHarga << endl;
	int afterDisc1 = totalHarga*0.1;
	int afterDisc2 = totalHarga*0.05;
	cout << "---------------------------------------\n";
	if (totalHarga >= 1000000) {
		
		
			cout << " Anda mendapat diskon sebesar 10% atau : " << afterDisc1<< endl;
			cout << " Total pembayaran : " << totalHarga-afterDisc1<< endl;
		
	} else {
			cout << " Anda mendapat diskon sebesar 5% atau : " << afterDisc2<< endl;
			cout << " Total pembayaran : " << totalHarga-afterDisc2<< endl;
	}
		
			cout << "\n";
			cout << "Created by: Mochamad One Sopyan";
}


