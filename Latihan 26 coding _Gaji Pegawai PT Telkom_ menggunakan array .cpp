 
//di buat oleh Citra Andini 
#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;
int main(){
	cout << setprecision(13);
	const int btspg = 100;
	string nama[btspg],gol[btspg],kode[btspg],jabatan[btspg];
	float gaji[btspg],tunjangan[btspg],pinjaman[btspg],pajak[btspg],gkotor[btspg],gbersih[btspg],total;
	char lagi;
	int jumpeg = 0;
	cout << "             GAJI PEGAWAI PT. TELKOM" << endl;
	cout << "---------------------------------------------------" << endl;
	
	do{
		

		
		cout << "Pegawai ke-" << jumpeg + 1 << endl;
		cout << "Nama Pegawai             : ";
		cin >> nama[jumpeg];
		cout << "Golongan                 : ";
		cin >> gol[jumpeg];
		cout << "Kode Jabatan             : ";
		cin >> kode[jumpeg];
		
		if(gol[jumpeg] == "Ia"){
			gaji[jumpeg] = 500000;
		}
		else if(gol[jumpeg] == "IIa"){
			gaji[jumpeg] = 750000;
		}
		else if(gol[jumpeg] == "IIIa"){
			gaji[jumpeg] = 1000000;
		}
		else if(gol[jumpeg] == "Ib"){
			gaji[jumpeg] = 150000;
		}
		else if(gol[jumpeg] == "IIb"){
			gaji[jumpeg] = 1750000;
		}
			else if(gol[jumpeg] == "IIIb"){
			gaji[jumpeg] = 2500000;
		}
		else{
			gaji[jumpeg] = 0;
		}
		
		if(kode[jumpeg] == "Dir"){
			jabatan[jumpeg] = "Direktur";
			tunjangan[jumpeg] = 450000;
		}
		else if(kode[jumpeg] == "Sek"){
			jabatan[jumpeg] = "Sekretaris";
			tunjangan[jumpeg] = 300000;
		}
		else if(kode[jumpeg] == "Wak"){
			jabatan[jumpeg] = "Wakil Direktur";
			tunjangan[jumpeg] = 375000;
		}
		else if(kode[jumpeg] == "Stf"){
			jabatan[jumpeg] = "Staf Administrasi";
			tunjangan[jumpeg] = 200000;
		}
		else{
			jabatan[jumpeg] = "-";
			tunjangan[jumpeg] = 0;
		}
		
		pajak[jumpeg] = gaji[jumpeg] * 0.05;
		gkotor[jumpeg] = gaji[jumpeg] + tunjangan[jumpeg];
	
		
		
		cout << "Jabatan                  : " << jabatan[jumpeg] << endl;
		cout << "Gaji                     : " << gaji[jumpeg]<< endl;
		cout << "Tunjangan                : " << tunjangan[jumpeg]<< endl;
		cout << "Pinjaman                 : ";
		cin >> pinjaman[jumpeg];
		
		cout << "Pajak                    : " << pajak[jumpeg]<< endl;
		cout << "Total Gaji Kotor         : " << gkotor[jumpeg]<< endl;
		gbersih[jumpeg] = gkotor[jumpeg] - pinjaman[jumpeg] - pajak[jumpeg];
		cout << "Total Gaji Bersih        : " << gbersih[jumpeg]<< endl;
		cout << endl;
		cout << "---------------------------------------------------" << endl;
			total = total + gbersih[jumpeg];
		jumpeg++;
		cout << endl;
		cout << "Masih Ingin Menghitung Gaji Lagi[Y/T]: ";
		cin>> lagi;
		cout << endl;
	}while(lagi == 'Y' || lagi == 'y');

	cout << "                                Laporan PT. TELKOM" << endl;
	cout << "\n================================================================================\n " << endl;
	cout 
		<< left << setw(2) <<""
		<<setw(9) << "Nama "
		<< setw(18) << "Jabatan "
		<< setw(9) << "Gaji "
		<< setw(14) << "Pinjaman "
		<< setw(14) << "Gaji Kotor "
		<< setw(14) << "Gaji Bersih " << endl;
	cout << "\n================================================================================\n " << endl;
		
	for(int i = 0; i < jumpeg; i++){
		cout << endl;
		cout << left << setw(2) <<""
		<< setw(9) << nama[i]
		<< setw(18) << jabatan[i]
		<< setw(9) << gaji[i]
		<< setw(14) << pinjaman[i]
		<< setw(14) << gkotor[i]
		<< setw(14) << gbersih[i] << endl;

	}
	cout << "\n================================================================================\n " << endl;
	cout <<right<< setw(66) << "Total Gaji Keseluruhan: " << total;
	return 0;
}
    