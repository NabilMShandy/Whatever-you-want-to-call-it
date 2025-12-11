#include <iostream>

using namespace std;
int main() {
    cout << "====================" << endl;
    cout << "======= MENU =======" << endl;
    cout << "====================" << endl;

    cout << "1. Nasi Goreng - Rp20.000" << endl;
    cout << "2. Mie Ayam - Rp15.000" << endl;
    cout << "3. Es Teh - Rp5.000" << endl;

    long nasi_goreng = 20000;
    long mie_ayam = 15000;
    long es_teh = 5000;
    long pilih, jumlah_bayar1, jumlah_bayar2, jumlah_bayar3, jumlah_pesanan;

    cout << "mau pesan apa [1, 2, 3]? ";
    cin >> pilih;
    cout << "pesan berapa porsi? ";
    cin >> jumlah_pesanan;

    switch (pilih)
    {
    case 1:
        jumlah_bayar1 = jumlah_pesanan * nasi_goreng;
        cout << "anda harus bayar " << jumlah_bayar1 << endl;
        break;
    case 2:
        jumlah_bayar2 = jumlah_pesanan * mie_ayam;
        cout << "anda harus bayar " << jumlah_bayar2 << endl;
        break;
    case 3:
        jumlah_bayar3 = jumlah_pesanan * es_teh;
        cout << "anda harus bayar " << jumlah_bayar3 << endl;
        break;
    
    default:
        cout << "invalid!";
        break;
    }
    cout << "datang lagi yaa!";
    
    return 0;
}
