
//dibuat oleh Citra Andini

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int JumlahData,JumlahBarang,TotalPenjualan=0;
    
    cout<< " Masukkan Jumlah Data ";
    cin >> JumlahData;
    
    for( int i = 1; i < JumlahData; i++){
    
        cout<< " Masukkan Jumlah barang yang terjual di Toko " << i << ":";
        cin >> JumlahBarang;
    
        TotalPenjualan += JumlahBarang;
        
    }    
      
    cout<< " Total Barang Yang Terjual Di Toko Adalah:" << TotalPenjualan <<endl;
 return 0;
}

    