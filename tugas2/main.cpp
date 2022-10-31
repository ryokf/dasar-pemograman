// Nama : Ryo khrisna fitriawan
// NIM  : A11.2022.13991

#include <iostream>

using namespace std;

int main()
{
    //LUAS SEGITIGA
    int alas = 5;
    int tinggi = 6;

    int luasSegitiga = alas * tinggi / 2;

    cout << "Luas segitiga : " << alas << " x " << tinggi << " / 2 = "  << luasSegitiga << endl;

    //LUAS PERSEGI
    int sisi = 4;
    int luasPersegi = sisi * sisi;

    cout << "Luas persegi : " << sisi << " x " << sisi << " = " << luasPersegi << endl;

    //TOTAL JUMLAH LUAS
    int total = luasPersegi + luasSegitiga;

    cout << "total : " << luasPersegi << " + " << luasSegitiga << " = " << total << endl;

    return 0;
}
