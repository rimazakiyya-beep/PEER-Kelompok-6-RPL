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

    for (int i = 1; i <= jumlahAnggota; i++) {
        cout << "\nMasukkan umur anggota ke-" << i << ": ";
        cin >> umur;

        if (umur >= 18 && umur <= 60) {
            cout << "Masukkan penghasilan per bulan: Rp ";
            cin >> penghasilan;
            totalPenghasilan += penghasilan;
        } else {
            cout << "Anggota ini tidak produktif.\n";
        }
    }
    
    double BulananPerAnggota = totalPenghasilan / jumlahAnggota;
    cekKelayakan(BulananPerAnggota);

    return 0;
}