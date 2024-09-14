
//di buat oleh Citra Andini

 
 #include<iostream>
 #include<iomanip>
 using namespace std;
 
 int main(){
  float  harga,jmlh_jual,total_hrga,diskon,total_byar;
  char nma_brng[20];
  
   cout<< "Penjualan Barang Elektronik"<< endl;
   cout<< " nama barang:";
   cin>>nma_brng;
   cout<<" harga:";
   cin>>harga;
   cout<<" jumlah jual:";
   cin>>jmlh_jual;
   total_hrga= harga*jmlh_jual;
   cout<<" total harga: " << total_hrga<<endl;
   diskon= total_hrga*0.10;
   cout<<" diskon:"<< diskon<<endl;
   total_byar= total_hrga - diskon;
   cout<<" total bayar :"<< total_byar<<endl;
  

     
     
    
 
 
 
 
 



}