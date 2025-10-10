#include <iostream>
using namespace std;

void cekKelayakan(double BulananPerAnggota) {
    cout << "\nRata-rata penghasilan per anggota: Rp " << BulananPerAnggota << endl;
    if (BulananPerAnggota < 750000)
        cout << "Diperbolehkan untuk mendaftar KIP.\n";
    else
        cout << "Tidak diperbolehkan untuk mendaftar KIP.\n";
}

int main() {
    int jumlahAnggota;
    cout << "Masukkan jumlah anggota keluarga: ";
    cin >> jumlahAnggota;

    int umur;
    double penghasilan, totalPenghasilan = 0;


    return 0;
}