
//dibuat oleh Citra Andini

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout << setprecision(10);
	char nama[20];
	float jumlhterjual,komisi,sisa,total_komisi;
	cout << "KOMISI PEGAWAI PT. Murah Hati" << endl;
	cout << "-------------------------" << endl;
    for(int i = 1; i <= 10; i++){
	cout << "Nama = ";
	cin >> nama;
	cout << "Jumlah Terjual = ";
	cin >> jumlhterjual;
	
	if(jumlhterjual == 500000){
		komisi = jumlhterjual * 0.1;
		sisa = 0;
	}
	 else if(jumlhterjual > 500000){
		komisi = jumlhterjual * 0.1;
		sisa = (jumlhterjual - 500000) * 0.15;
	} else {
		sisa = 0;
	}
total_komisi = komisi + sisa;

cout << "Komisi: "<< komisi << endl;
cout << "sisa:" << sisa << endl;
cout << "Total Komisi: " << total_komisi << endl;
cout << endl;
}
}
