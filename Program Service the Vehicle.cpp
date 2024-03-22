#include <iostream>
#include <string>
#include <sstream>

using namespace std;

	int main () {
		string nl = "=====================================" ;
		cout << " Pemeriksaan sebelum berkendara \n";
		cout << nl << endl;
		
		cout << " Bagian-bagian yang diperiksa : \n";		
		cout << " Saluran Bahan Bakar (L3) \n Ketinggian Bahan Bakar \n Cara Kerja Gas Tangan (L3) \n Saringan Udara (L3) \n Pernapasan Bak Mesin \n Busi \n Jarak Renggang Klep (L3) " 
		"\n Oli Mesin \n Saringan Kasa Oli Mesin \n Putaran Stasioner Mesin (L3)\n Drive Belt (L3) \n" << endl;	
		
		
		string listKomp[] = {"Saluran Bahan Bakar (L3)","Ketinggian Bahan Bakar","Cara Kerja Gas Tangan (L3)","Saringan Udara (L3)","Pernapasan Bak Mesin","Busi" ,"Jarak Renggang Klep (L3)","Oli Mesin", 
		"Saringan Kasa Oli Mesin","Putaran Stasioner Mesin (L3)","Drive Belt (L3)"};
		
		string ket[] = {"[P]", "[G]", "[B]"};
		
		string noKen, naPem;
		int jarak, bulan, minJarak;
		
		cout << "Masukkan Nomor Kendaraan : ";
		getline (cin, noKen);
		cout << "Masukkan Nama Pemilik Kendaraan : ";
		getline (cin, naPem);
		cout << "Masukkan Kilometer Kendaraan (Input angka) : ";
		cin >> (jarak);
		cout << "Masukkan Pemakaian Berapa Bulan (Input angka) : ";
		cin >> (bulan);
		
		cout << nl << endl;
		
		cout << "Nomor Kendaraan Anda : " << noKen << endl;
		cout << "Nama Pemilik Kendaraan : " << naPem << endl;
		cout << "Kilometer Kendaraan : " << jarak << " KM" <<endl;
		cout << "Masa Pemakaian  : " << bulan << " Bulan" << endl;
		
		minJarak = jarak*bulan;
		
		cout << nl << endl;
		cout << "List yang harus diperbaiki" << endl;
		cout << nl << endl;
		
			if(minJarak < 2000){
				cout << "Tidak ada/AMAN" << endl;
			}
			else if(minJarak <= 3999) {
				cout << listKomp[7]<< " " << ket[1] << endl;
				cout << listKomp[9]<< " " << ket[0] << endl;
			
			}
			else if(minJarak <= 7999) {
				cout << listKomp[0]<< " " << ket[0] << endl;
				cout << listKomp[2]<< " " << ket[0] << endl;
				cout << listKomp[4]<< " " << ket[2] << endl;
				cout << listKomp[5]<< " " << ket[0] << endl;
				cout << listKomp[6]<< " " << ket[0] << endl;
				cout << listKomp[7]<< " " << ket[1] << endl;
				cout << listKomp[9]<< " " << ket[0] << endl;
				
			}
			else if (minJarak <= 11999) {
				cout << listKomp[0]<< " " << ket[1] << endl;
				cout << listKomp[2]<< " " << ket[0] << endl;
				cout << listKomp[4]<< " " << ket[1] << endl;
				cout << listKomp[5]<< " " << ket[0] << endl;
				cout << listKomp[6]<< " " << ket[1] << endl;
				cout << listKomp[7]<< " " << ket[0] << endl;
				cout << listKomp[9]<< " " << ket[1] << endl;
				cout << listKomp[10]<< " " << ket[1] << endl;
			}
			else if (minJarak <= 15999) {
				cout << listKomp[0]<< " " << ket[1] << endl;
				cout << listKomp[2]<< " " << ket[0] << endl;
				cout << listKomp[4]<< " " << ket[1] << endl;
				cout << listKomp[5]<< " " << ket[0] << endl;
				cout << listKomp[6]<< " " << ket[1] << endl;
				cout << listKomp[7]<< " " << ket[0] << endl;
				cout << listKomp[8]<< " " << ket[1] << endl;
				cout << listKomp[9]<< " " << ket[1] << endl;
			}
			else if (minJarak <= 19999) {
				cout << listKomp[0]<< " " << ket[1] << endl;
				cout << listKomp[2]<< " " << ket[0] << endl;
				cout << listKomp[3]<< " " << ket[1] << endl;
				cout << listKomp[4]<< " " << ket[0] << endl;
				cout << listKomp[5]<< " " << ket[1] << endl;
				cout << listKomp[6]<< " " << ket[0] << endl;
				cout << listKomp[7]<< " " << ket[1] << endl;
				cout << listKomp[9]<< " " << ket[1] << endl;
				cout << listKomp[10]<< " " << ket[1] << endl;
			}
			else if (minJarak <= 23999) {
				cout << listKomp[0]<< " " << ket[1] << endl;
				cout << listKomp[2]<< " " << ket[0] << endl;
				cout << listKomp[4]<< " " << ket[1] << endl;
				cout << listKomp[5]<< " " << ket[0] << endl;
				cout << listKomp[6]<< " " << ket[1] << endl;
				cout << listKomp[7]<< " " << ket[0] << endl;
				cout << listKomp[9]<< " " << ket[1] << endl;
			}
			else if (minJarak <= 27999) {
				cout << listKomp[0]<< " " << ket[1] << endl;
				cout << listKomp[2]<< " " << ket[0] << endl;
				cout << listKomp[4]<< " " << ket[1] << endl;
				cout << listKomp[5]<< " " << ket[0] << endl;
				cout << listKomp[6]<< " " << ket[1] << endl;
				cout << listKomp[7]<< " " << ket[0] << endl;
				cout << listKomp[8]<< " " << ket[1] << endl;
				cout << listKomp[9]<< " " << ket[0] << endl;
				cout << listKomp[10]<< " " << ket[1] << endl;
			}
			else if (minJarak <= 31999) {
				cout << listKomp[0]<< " " << ket[1] << endl;
				cout << listKomp[2]<< " " << ket[0] << endl;
				cout << listKomp[4]<< " " << ket[1] << endl;
				cout << listKomp[5]<< " " << ket[0] << endl;
				cout << listKomp[6]<< " " << ket[1] << endl;
				cout << listKomp[7]<< " " << ket[0] << endl;
				cout << listKomp[9]<< " " << ket[1] << endl;
			}
			else if (minJarak <= 35999) {
				cout << listKomp[0]<< " " << ket[1] << endl;
				cout << listKomp[2]<< " " << ket[0] << endl;
				cout << listKomp[3]<< " " << ket[1] << endl;
				cout << listKomp[4]<< " " << ket[0] << endl;
				cout << listKomp[5]<< " " << ket[1] << endl;
				cout << listKomp[6]<< " " << ket[0] << endl;
				cout << listKomp[7]<< " " << ket[1] << endl;
				cout << listKomp[9]<< " " << ket[0] << endl;
				cout << listKomp[10]<< " " << ket[1] << endl;
			}
			else if (minJarak <= 39999) {
				cout << listKomp[0]<< " " << ket[1] << endl;
				cout << listKomp[2]<< " " << ket[0] << endl;
				cout << listKomp[4]<< " " << ket[1] << endl;
				cout << listKomp[5]<< " " << ket[0] << endl;
				cout << listKomp[6]<< " " << ket[1] << endl;
				cout << listKomp[7]<< " " << ket[0] << endl;
				cout << listKomp[8]<< " " << ket[1] << endl;
				cout << listKomp[9]<< " " << ket[0] << endl;
			}
			else if (minJarak <= 43999) {
				cout << listKomp[0]<< " " << ket[1] << endl;
				cout << listKomp[2]<< " " << ket[0] << endl;
				cout << listKomp[4]<< " " << ket[1] << endl;
				cout << listKomp[5]<< " " << ket[0] << endl;
				cout << listKomp[6]<< " " << ket[1] << endl;
				cout << listKomp[7]<< " " << ket[0] << endl;
				cout << listKomp[9]<< " " << ket[1] << endl;
				cout << listKomp[10]<< " " << ket[0] << endl;
			}
			else if (minJarak <= 47999) {
				cout << listKomp[0]<< " " << ket[1] << endl;
				cout << listKomp[2]<< " " << ket[0] << endl;
				cout << listKomp[4]<< " " << ket[1] << endl;
				cout << listKomp[5]<< " " << ket[0] << endl;
				cout << listKomp[6]<< " " << ket[1] << endl;
				cout << listKomp[7]<< " " << ket[0] << endl;
				cout << listKomp[9]<< " " << ket[1] << endl;
			}
			else if (minJarak <= 52000) {
				cout << listKomp[0]<< " " << ket[1] << endl;
				cout << listKomp[2]<< " " << ket[0] << endl;
				cout << listKomp[3]<< " " << ket[1] << endl;
				cout << listKomp[4]<< " " << ket[0] << endl;
				cout << listKomp[5]<< " " << ket[1] << endl;
				cout << listKomp[6]<< " " << ket[0] << endl;
				cout << listKomp[7]<< " " << ket[1] << endl;
				cout << listKomp[8]<< " " << ket[1] << endl;
				cout << listKomp[9]<< " " << ket[0] << endl;
				cout << listKomp[10]<< " " << ket[1] << endl;
			}
			else{
				cout << "Bawa motor anda ke bengkel resmi";
			}
			
				
		
	}
