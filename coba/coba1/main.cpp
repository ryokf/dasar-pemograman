#include <iostream>

using namespace std;

int main()
{
    int operasi, a, b;

    cout << "1. penjumlahan \n2. pengurangan \n3. perkalian \n4. pembagian \n";
    cout << "pilih operasi yang ingin dilakukan(1/2/3/4) : ";

    cin >> operasi;

    cout << "masukkan angka pertama : ";
    cin >> a;
    cout << "masukkan angka kedua : ";
    cin >> b;

    if(operasi == 1){
        cout << a << " + " << b << " = " << a + b << endl;
    } else if(operasi == 2) {
        cout << a << " - " << b << " = " << a - b << endl;
    } else if(operasi == 3){
        cout << a << " x " << b << " = " << a * b << endl;
    }else if(operasi == 4){
        cout << a << " : " << b << " = " << a / b << endl;
    }else {
        cout << "masukkan pilihan operasi yang benar! \n";
    }
    return 0;
}
