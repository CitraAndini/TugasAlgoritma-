
//dibuat oleh Citra Andini


#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    char lagi = 'Y';
    int jumlhData,jumlhBarang,totalPenjualan =0;
    
    while (lagi=='Y'||lagi=='Y'){
       
       cout<< "Masukkan Jumlah Barang Yang Terjual Di Toko" << ":";
       cin>>jumlhBarang;
       
       
       totalPenjualan+=jumlhBarang;
       
       }
       
       cout<< "Total Barang Yang Terjual di Toko Adalah:"<< totalPenjualan << endl;
       
       
    
    return 0;
  
  }