
//dibuat oleh Citra Andini

#include <iostream>
#include <iomanip>
#include <conio.h>

using namespace std;

int main() {
    cout<< setprecision(10);
    const int maxmhs =50;
    string nama[maxmhs],kode[maxmhs],jurusan[maxmhs];
    float npm[maxmhs],pembwal[maxmhs],jumcilan[maxmhs],bescilan[maxmhs],pembayaran[maxmhs],uangkul[maxmhs],uangkulter[maxmhs],ss_uangkul[maxmhs],sisaungkul[maxmhs];      
    char lagi;
    int jumas=0;
    cout << "PEMBAYARAN UANG KULIAH" << endl;
    cout << "-----------------------" << endl;
    
    do {
    
    cout << "Nama: ";
    cin >> nama[jumas];
    cout << "NPM: ";
    cin >> npm[jumas];
    cout << "kode: ";
    cin >> kode[jumas];
    
     if (kode[jumas] == "SI") {
            jurusan[jumas] = "Sistem Infomasi";
            pembwal[jumas] = 2100000;
            jumcilan[jumas] = 7;
            bescilan[jumas] =300000;
        } else if (kode[jumas] == "TI") {
            jurusan [jumas] = "Teknik Informatika ";
            pembwal[jumas] = 250000;
            jumcilan[jumas] = 7;
            bescilan[jumas] = 300000;
        } else if (kode[jumas] == "KA") {
            jurusan [jumas] = "Komputer Akuntansi";
            pembwal[jumas] = 1750000;
            jumcilan[jumas] = 6;
            bescilan[jumas] = 200000;
        } else if (kode[jumas] == "MI") {
            jurusan [jumas] = "Manajemen Informatika";
            pembwal[jumas] = 1500000;
            jumcilan[jumas] = 6;
            bescilan[jumas] = 150000;
        } else {
            pembwal[jumas] = 0;
            jumcilan[jumas] = 0;
            bescilan[jumas] = 0;
        }    
        
       uangkul[jumas] = pembwal[jumas] + (jumcilan[jumas]*bescilan[jumas]);
       uangkulter [jumas] = pembwal[jumas] + (pembayaran [jumas]*bescilan[jumas]);
       sisaungkul[jumas] = uangkul[jumas] - uangkulter[jumas];
        
        cout << "jurusan                       : " << jurusan [jumas] << endl;
        cout << "pembayaran Awal RP            : " << pembwal [jumas] << endl;
        cout << "Jumlah cicilan                : " << jumcilan[jumas] << endl;
        cout << "Besar cicilan                 : " << bescilan[jumas] << endl;
        cout << "pembayaran ke- "<< endl;
        cin >> pembayaran [jumas];
        cout << "Uang kuliah                   : " << uangkul[jumas] << endl;
        cout << "Uang kuliah terbayar          : " << uangkulter[jumas] << endl;
        cout << "Sisa uang kuliah.             : " << sisaungkul[jumas] << endl;
        
        cout << endl;
        
       jumas++;
       cout << "Masih ingin lanjut menghitung? [Y/T]: ";
       cin >> lagi;
       cout << endl;

      } while (lagi == 'Y' || lagi == 'y');
      
     cout<< "\n==================================================================\n";
     cout<<"                   LAPORAN HASIL PEMBAYARAN UANG KULIAH ";
     cout<< "\n==================================================================\n";
     cout<< setw(5) << left<<"nama "
         << setw(5) << "jurusan "
         << setw(5) << "Pembayaran Awal RP "
         << setw(5) << "Jumlah cicilan "
         << setw(5) << "Besar cicilan "
         << setw(5) << "Uang kuliah "
         << setw(5) << "Uang kuliah terbayar "
         << setw(5) << "Sisa uang kuliah "<< endl;
     cout<< "\n==================================================================\n";
     
     for(int i = 0; i < jumas; i++){
     
     cout<< setw(5) << left<<nama[i]<<" "
         << setw(5) << jurusan [i]<<" "
         << setw(5) << pembwal[i]<<" "
         << setw(5) << pembayaran[i]<<" "
         << setw(5) << jumcilan[i]<<" "
         << setw(5) << bescilan[i]<<" "
         << setw(5) << uangkul[i]<<" "
         << setw(5) << uangkulter[i]<<" "
         << setw(5) << sisaungkul[i]<<" "<<endl;
    }
     cout<< "\n==================================================================\n";
     
     
 return 0;
}


    