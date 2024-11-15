
//di buat oleh Citra Andini 
//coding string 

#include <iostream>
#include <conio.h>
#include <iomanip>
#include <stdio.h>
#include <string.h>

 using namespace std;
 
 int main(){
 char kd[3];
 char nma[20]=" ";
 float harga=0;
 int jml,
 hasil=0;
 
 cout<<"Penjualan Komputer STMIK PENUSA\n";
 cout<<"-------------------------------\n";
 cout<<"input kode          :";
 cin>>kd;
 hasil = strcmp(kd,"PII");//membandingkan karakter di input dengan keyboard (string comple);
 if(hasil == 0);
 {
   strcpy(nma, "kom PENTINUM II");//menginput string ke dalam variabel (string coppy
   harga = 150000;
 }
hasil = strcmp(kd,"PIII");
 if(hasil == 0);
 {  
   strcpy(nma, "kom PENTINUM III");
   harga = 250000;
 }  
hasil = strcmp(kd,"PIV");
 if(hasil == 0);
 {
   strcpy(nma, "kom PENTINUM III");
   harga = 350000;
 }  
 
 cout<<"Nama                :"<< nma << endl;
 cout<<"Harga               :"<< setw(5)<<harga << endl;
 cout<<"Jumlah Jual         :" ;
 cin>> jml;
 long tharga = jml * harga;
 cout<<"Total Harga         :"<< tharga << endl;  
 cout<<"-----------------------------------\n";
 return 0;
 }