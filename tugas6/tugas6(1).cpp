#include <iostream>

using namespace std;

int main(){

    cout << "=================daftar harga rental ps=================" << endl;
    cout << "1.ps 5 = 4000/jam" << endl;
    cout << "2.ps 4 = 3000/jam" << endl;
    cout << "3.ps 2 = 2000/jam" << endl << endl;

    cout << "PROMO" << endl;
    cout << "sewa 20 jam : diskon 10%" << endl;
    cout << "sewa 2 hari : diskon 20%" << endl << endl;

    int ps, harga, jam, subTotal;

    cout << "masukkan pilihan ps(1/2/3) : ";
    cin >> ps;

    if(ps == 1){
        harga = 4000;
    }else if(ps == 2){
        harga = 3000; 
    }else if(ps == 3){
        harga = 2000; 
    } else {
        cout << "input salah" << endl;
        return 0;
    }

    cout << "ingin bermain brp jam : ";
    cin >> jam;

    subTotal = harga * jam;

    if(jam >= 20 && jam < 48){
        int total = subTotal - (subTotal*10/100);
        cout << "subtotal : " << subTotal << endl;
        cout << "total setelah diskon 10% : " << total << endl;
    } else if(jam >= 48){
        int total = subTotal - (subTotal*20/100);
        cout << "subtotal : " << subTotal << endl;
        cout << "total setelah diskon 20% : " << total << endl;
    } else {
        cout << "total : " << subTotal << endl;
    }

    return 0;
}