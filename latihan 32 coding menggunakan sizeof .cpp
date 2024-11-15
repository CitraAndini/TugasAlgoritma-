
//di buat oleh Citra Andini 

#include <iostream>
#include <conio.h>

 using namespace std;
 
 int main(){
  
  char nama[20];
  char alamat[35];
  
  cout<<"Masukkan Nama Anda  : ";
  cin.getline(nama, sizeof (nama));//sizeof fungsi nya membaca string sesuai ukuran yg sudah di definisikan
  cout<<"Masukkan Alamat Anda: ";
  cin.getline(alamat, sizeof (alamat));
  cout<<"Nama Anda Adalah    : " << nama << endl;
  cout<<"Alamat Anda Adalah  : " << alamat << endl;
  
  return 0;
  }
  