
//di buat oleh Citra Andini 
#include<iostream>
#include<conio.h>
 using namespace std;
 
 float luas (float panjang, float lebar);
 int main()
 {
 	float panjang_se, lebar_se, luas_se;
 	cout<<"Perogram menghitung luas Segitigaempat \n";
 	/*input panjang dan lebar */
 	cout << "\n\t Panjang :";
 	cin>> panjang_se;
 	cout<<"\n\t lebar :";
 	cin>>lebar_se;
 	//*menghitung luas Segiempat*/
 	luas_se = luas( panjang_se, lebar_se);
 	cout<< "\n\n luas segiempat =" << luas_se;
 }
float luas(float panjang, float lebar)
 {
 return(panjang*lebar);
 
 }
