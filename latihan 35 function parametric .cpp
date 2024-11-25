
//di buat oleh Citra Andini 

#include <iostream>
#include<conio.h>
// fungsi menggunakan parametrik 1 varibael
using namespace std;

float hitung (int s) ;
int main()
{
	float volume, sisi;
	cout<< "\n Menghitung Volume KUBUS";
	cout<< "\n sisi KUBUS :";
	cin>> sisi;
	volume = hitung (sisi);
	cout<< "\n Volume KUBUS yaitu :" << volume;	
}
float hitung (int s)
{
	return (s*s*s);
}
