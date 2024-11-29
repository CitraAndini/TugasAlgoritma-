//dibuat oleh Citra Andini 
//coding menggunakan file

#include <iostream>
#include <fstream> //untuk baca data

using namespace std;

int main(){
	ofstream file("data.txt");
	
	if(file.is_open()){
		file << "STMIK Penusa\n";
		file << "Belajar Algoritma Pemrograman.";
	file.close();
}else{
	cout << "file tidak bisa dibuka";
}
return 0;

}
		



		
