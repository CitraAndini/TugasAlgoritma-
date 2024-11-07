
//di buat oleh Citra Andini 
//coding struct 

#include <iostream>
#include <iomanip>
#include <string>
#include <windows.h>
#include <conio.h>
#include <cstdlib>

using namespace std;

struct data_mahasiswa 
{
char npm[9];
char nama[20];
  int nilai;
  };
  
  int main()
  {
  
  data_mahasiswa data_mhs;
  cout<<"input data mahasiswa\n";
  cout<<"--------------------\n";
  cout<<"NPM  : ";
  cin>>data_mhs.npm;
  cout<<"Nama : ";
  cin>>data_mhs.npm;
  cout<<"Nilai: ";
  cin>>data_mhs.npm;
  cout<<"------------------------\n";
  cout<<"Data yang telah di input \n";
  cout<<"NPM  : "<<data_mhs.npm <<endl;
  cout<<"Nama : "<<data_mhs.nama<<endl;
  cout<<"Nilai: "<<data_mhs.nilai<<endl;
  cout<<"-----------------------------/n";
    return 0;
}
    