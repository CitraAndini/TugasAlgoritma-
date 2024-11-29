//dibuat oleh Citra Andini 
//coding menggunakan file
// 1 dimensi

#include <iostream>
#include <fstream> //untuk baca data

using namespace std;

int main(){
	fstream file("data.txt");
	string line;
	
	if(file.is_open()){
		while(getline(file,line)){
		cout << line << endl;
	}
	file.close();
}else{
	cout << "file tidak bisa dibuka";
}
return 0;

}
		
