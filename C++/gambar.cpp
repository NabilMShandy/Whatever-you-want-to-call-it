#include <iostream>     // Memanggil library iostream untuk memakai pustakanya 
using namespace std;    // Sejenis shortcut supaya tidak mengetik std:: berulang kali

// Setidaknya terdiri dari satu fungsi pada bahasa pemrograman c++ yaitu main
int main(){
    // Program membuat segitiga

    // 1. Segitiga siku-siku dari arah berlawanan
    // Deklarasi variabel
    int mulai1;
    int cetak1;
    int stop1 = 5;

    // Banyaknya perulangan yang ingin dijalankan
    for(mulai1 = 1; mulai1 <= stop1; mulai1++){ 
        // Perulangan untuk mencetak spasi dimulai dari 4, dan akan decrement setiap loop hingga 1, sehingga akan menyisakan ruang untuk mencetak bintang
        for(cetak1 = 4; cetak1 >= mulai1; cetak1--){
            cout << " "; // Spasi untuk menentukan posisi bintang dicetak pertama kali
        }
        for(int nums = 1; nums <= mulai1; nums++){
            // Dengan batas mulai1, bintang akan tercetak mengikuti pola ruang kosong yang ditinggalkan spasi
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;

    // 2. Segitiga siku siku terbalik
    // Deklarasi variabel
    int stop2 = 5;    // Set stop di berapa kali perulangan.
    int mulai2;      // Inisialisasi variabel int mulai untuk loop.
    int cetak2;      // Inisialisasi variabel mulai untuk cetak *.

    // Penggunaan nested loop
    for(mulai2 = 1; mulai2 <= stop2; mulai2++){ // Outer loop untuk menentukan berapa kali perulangan dijalankan.

        // Inner loop untuk mencetak bintang berulang dari 5 bintang pertama lalu akan di decrement setiap inner loop dijalankan selagi kondisi bernilai true, maka akan dicetak berurutan bintang sebanyak 5, 4, 3, 2, 1.
        for(cetak2 = 5; cetak2 >= mulai2; cetak2--){ 
            cout << "*";
        }
        cout << endl; // Membuat baris baru untuk membentuk pola segitiga 
    }
    cout << endl;

    // 3. Segitiga sama kaki
    // Deklarasi variabel
    int mulai3;         // Variabel untuk outer loop 
    int stop3 = 5;      // Set stop outer loop sebanyak 5 perulangan
    int cetak3;         // Variabel untuk mencetak bintang pada inner loop 

    for(mulai3 = 1; mulai3 <= stop3; mulai3++){     // Outer loop akan looping sebanyak 5 kali
        // Set stop spasi saat 4 dan akan berkurang seiring perulangan sebanyak 1 mengikuti outer loop untuk mencetak spasi
        for(int i = 1; i <= stop3 - mulai3; i++){ 
            cout << " ";                            
    }
    // Set outer loop kedua untuk mencetak bintang dan membuat sebuah variabel penampung bilangan ganjil
    int stars = 2 * mulai3 - 1;
    // Saat looping berjalan nilai mulai akan bertambah sesuai pola pilangan ganjil 1, 3, 5, 7, 9(2 x n - 1) dan ditampung oleh stars
    for(int cetak = 1; cetak <= stars; cetak++){
        cout << "*";
    }

    cout << endl;
}

    return 0; 
}