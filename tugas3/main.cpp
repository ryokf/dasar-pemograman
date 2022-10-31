// Nama : Ryo khrisna fitriawan
// NIM  : A11.2022.13991

#include <iostream>

using namespace std;

int main()
{
    int alas, tinggi, luasSegitiga;

    cout << "LUAS SEGITIGA" << endl;
    cout << "masukkan alas segitiga : ";
    cin >> alas;
    cout << "masukkan tinggi segitiga : ";
    cin >> tinggi;

    luasSegitiga = alas * tinggi / 2;
    cout << "Luas segitiga : " << alas << " x " << tinggi << " / 2 = " << luasSegitiga << endl << endl;

    int sisi, luasPersegi;

    cout << "LUAS PERSEGI" << endl;
    cout << "masukkan sisi persegi : ";
    cin >> sisi;

    luasPersegi = sisi * sisi;
    cout << "Luas persegi : " << sisi << " x " << sisi << " = " << luasPersegi << endl << endl;

    cout << "TOTAL" << endl;

    cout << "Luas segitiga + Luas persegi = " << luasSegitiga + luasPersegi << endl;


    return 0;
}
