#include <iostream>
#include <iomanip>
using namespace std;

// Menu awal
void konversi()
{
    cout << "-----------------------\n";
    cout << "Program konversi suhu\n";
    cout << "-----------------------\n";
    cout << "1. Celcius ke Fahrenheit\n";
    cout << "2. Fahrenheit ke Celcius\n";
    cout << "3. Celcius ke Kelvin\n";
    cout << "4. Kelvin ke Celcius\n";
    cout << "5. Fahrenheit ke Kelvin\n";
    cout << "6. Kelvin ke Fahrenheit\n";
    cout << "7. Keluar program\n";
}

// 1. Celcius ke fahrenheit
long double celciusf(long double input)
{
    long double celciusfahren = (input * 9 / 5.0) + 32;
    cout << "Suhu dalam fahrenheit: "  << setprecision(10) << celciusfahren << " F" << endl;
    return celciusfahren;
}

// 2. Fahrenheit ke Celcius
long double fahrenheitc(long double input)
{
    double fahrencelcius = (input - 32) * 5 / 9.0;
    cout << "Suhu dalam celcius: " << setprecision(10) << fahrencelcius << " C" << endl;
    return fahrencelcius;
}

// 3. Celcius ke Kelvin
long double celciusk(long double input)
{
    long double celciuskelvin = input + 273.15;
    cout << "Suhu dalam kelvin: " << setprecision(10) << celciuskelvin << " K" << endl;
    return celciuskelvin;
}

// 4. Kelvin ke celcius
long double kelvinc(long double input)
{
    long double kelvincelcius = input - 273.15;
    cout << "Suhu dalam celsius: " << setprecision(10) << kelvincelcius << " K" << endl;
    return kelvincelcius;
}

// 5. Fahrenheit ke Kelvin
long double fahrenc(long double input)
{
    long double fahrenkelvin = (input - 32) * (5 / 9.0) + 273.15;
    cout << "Suhu dalam Kelvin: " << setprecision(10) << fahrenkelvin << " K" << endl;
    return fahrenkelvin;
}

// 6. Kelvin ke Fahrenheit
long double kelvinf(long double input)
{
    long double kelvinfahren = (input - 273.15) * (9/5.0) + 32;
    cout << "Suhu dalam Fahrenheit: " << setprecision(10) << kelvinfahren << " F" << endl;
    return kelvinfahren;
}

// Fungsi utama
int main()
{
    int pilihan;
    
    do
    {   konversi();
        cout << "masukkan pilihan anda: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            long double input;
            cout << "masukkan suhu anda dalam Celcius: ";
            cin >> input;
            celciusf(input);

            break;

        case 2:
            input;
            cout << "Masukkan suhu anda dalam Fahrenheit: ";
            cin >> input;
            fahrenheitc(input);

            break;

        case 3:
            input;
            cout << "Masukkan suhu anda dalam Celsius: ";
            cin >> input;
            celciusk(input);

            break;

        case 4:
            input;
            cout << "Masukkan suhu anda dalam Kelvin: ";
            cin >> input;
            kelvinc(input);

            break;

        case 5:
            input;
            cout << "Masukkan suhu anda dalam Fahrenheit: ";
            cin >> input;
            fahrenc(input);

            break;
        case 6:
            input;
            cout << "Masukkan suhu anda dalam Kelvin: ";
            cin >> input;
            kelvinf(input);

            break;
        case 7:
            break;

        default:
            cout << "Invalid";
            break;
        }
    } while (pilihan != 7);

    cout << "Terima kasih telah menggunakan!\n";
    
    return 0;

}
