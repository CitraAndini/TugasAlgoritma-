
//dibuat oleh Citra Andini

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout << setprecision(13);
	char nama[20];
	float jmlterjual,komisi,sisa,totalkomisi;
	cout << "KOMISI PEGAWAI PERUSAHAAN" << endl;
	cout << "-------------------------" << endl;
	cout << "Nama = ";
	gets(nama);
	cout << "Jumlah Terjual = ";
	cin >> jmlterjual;
	
	if(jmlterjual == 500000){
		komisi = jmlterjual * 0.1;
		sisa = 0;
	}
	 else if(jmlterjual > 500000){
		komisi = jmlterjual * 0.1;
		sisa = (jmlterjual - 500000) * 0.15;
	} else {
		sisa = 0;
	}
totalkomisi = komisi + sisa;

cout << "Komisi: "<< komisi << endl;
cout << "sisa:" << sisa << endl;
cout << "Total Komisi: " << totalkomisi;

}
