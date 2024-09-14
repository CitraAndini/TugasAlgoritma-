
//di buat oleh Citra Andini

 
#include<iostream>
 #include<iomanip>
 using namespace std;
 
 int main()
 {
 
 int gaji_perjam=500, jmlah_jamker=0,lembur=0,total_gaji=7;
 char nma_pegwai[10];
 
 cout<<"PERHITUNGAN GAJI PEGAWAI"<<endl;
 cout<<"------------------------"<<endl;
 cout<<"Nama Pegawai: "<<nma_pegwai;
 gets(nma_pegwai);
 cout<<"jumlah jam kerja: "<<endl;
 cin>>jmlah_jamker;
 if (jmlah_jamker>7){
         lembur=(1.5*gaji_perjam*(jmlah_jamker-7));
         total_gaji=(7*gaji_perjam)+lembur;
 
 }else{     
      
       lembur=0;
       total_gaji=(jmlah_jamker*gaji_perjam)+lembur;
       
       }
       
       cout<<"Total Gaji Pegawai Harian="<<total_gaji<<endl;
       
       return 0;
       
       }
       
         
 
 
 

