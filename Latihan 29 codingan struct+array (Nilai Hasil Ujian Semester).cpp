
//di buat oleh Citra Andini 

#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>
#include <windows.h>
#include <cstdlib>

using namespace std;

struct Mahasiswa {
    string nma;
    string npm;
    float nilaiMid;
    float nilaiSemester;
    float nilaiAkhir;
    char nilaiHuruf;
};

char hitungNilaiHuruf(float nilaiAkhir) {
    if (nilaiAkhir >= 80 && nilaiAkhir <= 100) return'A';
    else if (nilaiAkhir >= 70 && nilaiAkhir < 80) return 'B';
    else if (nilaiAkhir >= 55 && nilaiAkhir < 70) return 'C';
    else if (nilaiAkhir >= 40 && nilaiAkhir < 55) return 'D';
    else return 'E';
}

float hitungNilaiAkhir(float nilaiMid, float nilaiSemester) {
    return (0.4 * nilaiMid) + (0.6 * nilaiSemester);
}

int main() {
    const int maxData = 100;
    Mahasiswa mahs[maxData];
    int jumlahData;

    cout << "Masukkan jumlah mahasiswa (maksimal " << maxData << "): ";
    cin >> jumlahData;

    if (jumlahData > maxData) {
        cout << "Jumlah mahasiswa melebihi batas maksimum!" << endl;
        return 1;
    }

    for (int i = 0; i < jumlahData; i++) {
        cout << "Data Mahasiswa " << (i + 1) << endl;
        cout << "Nama: ";
        cin.ignore(); // Menghapus newline tersisa
        getline(cin, mahs[i].nma);
        cout << "NPM: ";
        cin >> mahs[i].npm;
        cout << "Nilai Mid: ";
        cin >> mahs[i].nilaiMid;
        cout << "Nilai Semester: ";
        cin >> mahs[i].nilaiSemester;

        // Hitung nilai akhir dan nilai huruf
        mahs[i].nilaiAkhir = hitungNilaiAkhir(mahs[i].nilaiMid, mahs[i].nilaiSemester);
        mahs[i].nilaiHuruf = hitungNilaiHuruf(mahs[i].nilaiAkhir);

        cout << endl;
    }

    cout << fixed << setprecision(2);
    cout << "======================= Laporan Hasil Nilai Ujian Semester =======================" << endl;
    cout << "Nama\t\tNPM\t\tNilai Mid\tNilai Semester\tNilai Akhir\tNilai Huruf" << endl;
    cout << "=================================================================================" << endl;

    for (int i = 0; i < jumlahData; i++) {
        cout << mahs[i].nma << "\t" << mahs[i].npm << "\t" 
             << mahs[i].nilaiMid << "\t\t" 
             << mahs[i].nilaiSemester << "\t\t" 
             << mahs[i].nilaiAkhir << "\t\t" 
             << mahs[i].nilaiHuruf << endl;
    }

    return 0;
}
    