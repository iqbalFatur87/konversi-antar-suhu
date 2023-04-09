#include <iostream>
using namespace std;

int main()
{
    float suhu_awal, suhu_akhir;
    char jenis_suhu_awal, jenis_suhu_akhir;

    cout << "Masukkan suhu awal: ";
    cin >> suhu_awal >> jenis_suhu_awal;

    // konversi ke Celsius
    if (jenis_suhu_awal == 'F') {
        suhu_awal = (suhu_awal - 32) / 1.8;
    } else if (jenis_suhu_awal == 'R') {
        suhu_awal = suhu_awal / 0.8;
    } else if (jenis_suhu_awal == 'K') {
        suhu_awal = suhu_awal - 273.15;
    }

    cout << "Masukkan jenis suhu akhir (C/F/R/K): ";
    cin >> jenis_suhu_akhir;

    // konversi dari Celsius
    if (jenis_suhu_akhir == 'F') {
        suhu_akhir = (suhu_awal * 1.8) + 32;
    } else if (jenis_suhu_akhir == 'R') {
        suhu_akhir = suhu_awal * 0.8;
    } else if (jenis_suhu_akhir == 'K') {
        suhu_akhir = suhu_awal + 273.15;
    } else {
        suhu_akhir = suhu_awal;
    }

    cout << "Suhu akhir: " << suhu_akhir << jenis_suhu_akhir << endl;

    return 0;
}
