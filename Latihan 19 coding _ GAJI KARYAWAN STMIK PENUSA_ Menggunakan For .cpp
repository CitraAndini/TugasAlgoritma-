
//dibuat oleh Citra Andini

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int gaji,pjk,pinjaman,Gbersih;
    char nmpegawai[60],jabatan[60];
    
    cout<< "GAJI KARYAWAN STMIK PENUSA"<<endl;
    cout<< "--------------------------"<<endl;
    
    for(int i = 1; i <=10; i++){
    
    cout<< "Masukkan nama pegawai" << i << ":";
    cin>>nmpegawai;
    cout<< "Masukkan Jabatan :";
    cin>> jabatan;
    cout<<"Masukkan gaji :";
    cin>> gaji;
    cout<<setprecision(12);
    
    pjk=5*gaji;
    cout<<"pajak:"<<pjk<<endl;
    cout<<"pinjaman :";
    cin>>pinjaman;
    
    Gbersih=gaji-(pinjaman+pjk);
    cout<<"Gaji bersih:"<<Gbersih<<endl;
    cout<<endl;

  } 
    return 0;
  
  }

    