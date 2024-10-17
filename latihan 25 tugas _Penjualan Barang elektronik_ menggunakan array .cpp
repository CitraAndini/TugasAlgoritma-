
//dibuat oleh Citra Andini
// 2 Dimensi 

#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;



int main() {
     cout<< setprecision(20);
     const int maxBrg=100;
     string nmBrg [maxBrg];
     float H_brg[maxBrg],Jmlh_Jual[maxBrg],T_hrg[maxBrg],Diskon[maxBrg],T_byr[maxBrg];
     int T_pendapatan =0;
     char lagi;
     
     do{
     
     cout<<"PENJUALAN BARANG ELEKTRONIK"<<endl;
     cout<<"---------------------------"<<endl;
     cout<<"Masukkan nama barang ke-" << T_pendapatan + 1 << ":";
     cin>>nmBrg[T_pendapatan];
     cout<<"Masukkan Harga Barang " << nmBrg [T_pendapatan] << ":";
     cin>>H_brg [T_pendapatan];
     cout<<"Masukkan Jumlah Jual barang" << nmBrg [T_pendapatan] << ":";
     cin>>Jmlh_Jual[T_pendapatan];
     
     T_hrg[T_pendapatan] = H_brg [T_pendapatan]*Jmlh_Jual[T_pendapatan];
     
     Diskon[T_pendapatan]=T_hrg[T_pendapatan]*0.10;
     
     T_byr[T_pendapatan]=T_hrg [T_pendapatan] - Diskon [T_pendapatan];
      
     T_pendapatan++;
     cout << "Apakah anda ingin input lagi(Y/T)";
     cin >> lagi;
     cout<< endl;
      
      }while(lagi == 'Y' || lagi == 'y');
     cout<< "\n============================================================\n";
     cout
         << setw(15) << left<<"Nama barang"
         << setw(15) << "Harga Barang"
         << setw(15) << "Jumlah Jual" << endl;
     
     cout<< "\n============================================================\n";
     
     for(int i = 0; i < T_pendapatan; i++){
     
     cout<<"\n"
      << setw(15) << left<< nmBrg[i]
      << setw(15) << H_brg[i]
      << setw(15) << Jmlh_Jual[i]
      <<"\n" << endl;
    
     cout<< "\n============================================================\n";
     
    }
     
 return 0;
}

    