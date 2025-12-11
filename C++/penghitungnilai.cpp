// Program untuk menghitung nilai menggunakan struktur data array

#include <iostream>
using namespace std;

int main(){
    int nilai; cout << "masukkan jumlah mahasiswa anda: "; cin >> nilai;
    int nilaiarr[nilai];
    int ukuranarr = sizeof(nilaiarr) / sizeof(nilaiarr[0]);

    // Baca input nilai
    cout << "nilai mahasiswa: ";
    for(int i = 0; i < nilai; i++){
        cin >> nilaiarr[i];
    }
    // Bubble Sorting
    for(int j = 0; j < ukuranarr - 1; j++){
        for(int k = 0; k < ukuranarr-j-1; k++){
            if(nilaiarr[k] > nilaiarr[k+1]){
                int temp = nilaiarr[k];
                nilaiarr[k] = nilaiarr[k+1];
                nilaiarr[k+1] = temp;
            }
        }
    }

    // Menampilkan nilai setelah diurutkan
    cout << "Nilai mahasiswa anda setelah diurutkan dari terkecil ke terbesar: ";
    for(int p = 0; p < ukuranarr; p++){
        cout << nilaiarr[p] << " ";
    }
    cout << endl;

    // Membuat array membaca input terbesar
    int terbesar = 0;
    for(int m = 0; m < ukuranarr; m++){
        if(nilaiarr[m] > terbesar){
            terbesar = nilaiarr[m];
        }
    }

    // Membuat array membaca input terkecil
    int terkecil = 999999;
    for(int x = 0; x < ukuranarr; x++){
        if(nilaiarr[x] < terkecil){
            terkecil = nilaiarr[x];
        }
    }

    // Menghitung rata-rata nilai
    double mean;
    int jumlah = 0;
    for(int b = 0; b < ukuranarr; b++){
        jumlah += nilaiarr[b];
    } 
    mean = jumlah / ukuranarr;

    // Mengeluarkan output
    cout << "Nilai terkecil adalah: " << terkecil << endl;
    cout << "Nilai terbesar adalah: " << terbesar << endl;
    cout << "Rata-rata nilai mahasiswa anda: " << mean;
}