
//dibuat oleh Citra Andini 
//fungsi(non parametrik bisa lebih dari 1 variabel)tidak memebawa nilai dalam variabel tertentu

#include<iostream>
#include<iomanip>

using namespace std;
void hitung() ; // mendeklarasikan(prototype) fungsi yang tidak menghasilkan nilai..

int main()
	
{
cout<<"n\ Menghitung Volume KUBUS";
hitung(); // memanggil fungsi hitung;
return 0;
}	
void hitung()
{
float sisi, volume;		
cout<<"\n Sisi KUBUS :";	
cin>> sisi;
volume = sisi * sisi * sisi;
cout<<"\n Volume KUBUS yaitu :" <<
volume;
}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

