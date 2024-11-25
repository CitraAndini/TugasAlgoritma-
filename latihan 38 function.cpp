
// di buat oleh Citra Andini 

#include <iostream>
#include <conio.h>
#include <iomanip>
#include <windows.h>
using namespace std;

//deklarasi function
float pokok(float gaji, int jam);
int lembur(int gaji_pokok, int jam);
int jasa(int jam);
float makan(int jam);
int jamlembur(int jam, int gaji);
int label(int gaji, int jam);
void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(){
	cout << setprecision(15);
	string nma;
	int jam_lembur,pjg,maxpgw= 50;
	const int gaji = 2000;
	float gajipokok,jam_krj,uang_lmbur,uang_mkn,uang_jasa,gajtotal;
	
	int pg = 1;
	char lagi;
	//proses input
	do{
	system("cls");
	cout << "------------------------------------------------------------------------------------";
	cout << "\n                                PT. Rejeki Nomplok \n";
	cout << "------------------------------------------------------------------------------------\n";
	cout << "\n Masukkan Nama: ";
	cin >> nma;
	cout << "\n Masukkan Jumlah Jam Kerja: ";
	cin >> jam_krj;
	
	system("cls");
	cout << "------------------------------------------------------------------------------------";
	cout << "\n                                PT. Rejeki Nomplok \n";
	cout << "------------------------------------------------------------------------------------\n";
	jam_lembur = jam_krj - 7 ;
	gajipokok = pokok(gaji,jam_krj);
	uang_lmbur = lembur(gaji,jam_krj) * jam_lembur;
	uang_jasa = jasa(jam_krj);
	uang_mkn = makan(jam_krj);
	pjg = nma.length();
	
	cout << " "<< nma << " bekerja selama " << jam_krj << " jam:";
	gotoxy(pjg+2,4);cout <<"Gaji Pokok                ";
	gotoxy(33,4);label(gaji, jam_krj);
	gotoxy(49, 4);cout << "= " << gajipokok;
	gotoxy(pjg+2, 5);cout << "Uang Lembur";
	gotoxy(33,5);jamlembur(jam_krj, gaji);
	gotoxy(49, 5);cout << "= " << uang_lmbur;
	gotoxy(pjg+2, 6);cout << "Uang Makan";
	gotoxy(49, 6);cout << "= " << uang_mkn; 
	gotoxy(pjg+2, 7);cout << "Uang Jasa Lembur";
	gotoxy(49,7);cout << "= " << uang_jasa;
	gajtotal = gajipokok + uang_lmbur + uang_mkn + uang_jasa;
	gotoxy(pjg+2, 8);cout << "Gaji yang diterima";
	gotoxy(49,8);cout << "= " << gajtotal << endl;

	cout << "------------------------------------------------------------------------------------\n";

	pg++;
	cout << "\n Apakah Anda Ingin Menginput lagi[Y/T]: ";
	lagi = getch();
	cout << endl;
}
while(lagi == 'Y' || lagi == 'y' and pg <= maxpgw );
	
	if(lagi == 't' || lagi == 'T'){
		system("cls");
		cout << "Anda Tidak Melanjutkan Input.";
	}
	return 0;
	
}

float pokok(float gaji, int jam){
	if(jam >= 0 and jam < 8){
		return (gaji * jam);
	}
	else if(jam >= 8){
		return (gaji * 7) ;
	}
}

int lembur(int gaji_pokok, int jam){
	if(jam > 7){
		return 1.5 * gaji_pokok;
	}
	if(jam < 7){
		return 0;
	}
}

int jasa(int jam){
	
	if(jam >= 9){
		return 3000;
	}
	else {
		return 0;
	}
}

float makan(int jam){
	if (jam >= 8 and jam <= 10){
		return 1500;
	}
	else if(jam > 10){
		return 2500;
	}
	else{
		return 0;
	}
}

int jamlembur(int jam, int gaji){
	if(jam > 7){
		int jml;
		jml = jam  - 7;
	cout << " = "<< jml << " x " << 1.5 * gaji;
	}
	else {
		return 0;
	}
}
int label(int gaji, int jam){
if(jam > 0 && jam <= 7)	{
	cout << " = " << jam << " x " << gaji;
}
else if (jam >= 8){
	cout << " = " << 7 << " x " << gaji;
}
else {
	return 0;
}
}
    