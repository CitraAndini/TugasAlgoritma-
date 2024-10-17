
//dibuat oleh Citra Andini
// 2 Dimensi 

#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main(){
     cout<< setprecision(13);
     const int maxKaryawan =50;
     string nmaKaryawan[maxKaryawan];
     int jamKerja[maxKaryawan];
     float gajiPerjam[maxKaryawan],gajiTotal[maxKaryawan];
     int jumlahKaryawan=0;
     char lagi;       
            
    do{
    
    cout<<" Masukkan nama karyawan ke-"<< jumlahKaryawan + 1 << ": ";
    cin>>nmaKaryawan[jumlahKaryawan];
    cout<< "Masukkan jam kerja " << nmaKaryawan[jumlahKaryawan];
    cin>>jamKerja[jumlahKaryawan];
    cout<< " Masukkan gaji perjam " << nmaKaryawan[jumlahKaryawan];
    cin>>gajiPerjam[jumlahKaryawan];
    gajiTotal[jumlahKaryawan]= jamKerja[jumlahKaryawan]*gajiPerjam[jumlahKaryawan];
    
    jumlahKaryawan++;
    cout<< "Apakah anda ingin input lagi (Y/T)";
    lagi= getch();
    cout<< endl;
    
    }
   while (lagi == 'Y' || lagi == 'Y' );
     cout<< "\n==========================================\n";
     cout<< setw(15) << left<<"nama"
         << setw(15) << "jam kerja"
         << setw(15) << "gaji perjam"
         << setw(15) << "gaji total "<< endl;
     cout<< "\n==========================================\n";
     
     for(int i = 0; i < jumlahKaryawan; i++){
     
     cout<<"\n"
      << setw(15) << left<< nmaKaryawan[i]
      << setw(15) << jamKerja[i]
      << setw(15) << gajiPerjam[i]
      << setw(15) << gajiTotal[i]
      <<"\n" << endl;
    
     cout<< "\n=========================================\n";
     
    }
            
 return 0;

}
    