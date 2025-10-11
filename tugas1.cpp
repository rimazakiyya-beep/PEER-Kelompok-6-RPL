#include <iostream>
using namespace std;

int main() {
    int jumlahAnggota; // anggota yg berpenghasilan
    int umur;
    float penghasilan;
    double pk_gabung; //pendapatan kotor gabungan anggota
    char operasi;

    
    cout << "Apakah anda ada di usia produktif? " << endl;
    cout << "Masukkan Umur: ";
    cin >> umur ;

    if (umur > 16 && umur < 65) { 
        cout << "Produktif" << endl;
        } else {
        cout << "Tidak lolos syarat penerimaan" << endl;
    }

    cout << "Berapa orang yang berpenghasilan? ";
    cin >> jumlahAnggota;
    cout << "Berapa penghasilan per bulan? ";
    cin >> penghasilan;

    if (operasi == '*') {
        cout << "Penghasilan kotor keluargamu: " << jumlahAnggota * penghasilan;
    }

    cout << "Penghasilan kotor keluargamu: ";
    cin >> pk_gabung;

    if (pk_gabung <= 4000000) {
        cout << "Lolos syarat batas maksimum ekonomi";
    } else {
        cout << "Tidak lolos batas maksimum ekonomi";
    }
    



    return 0;
}