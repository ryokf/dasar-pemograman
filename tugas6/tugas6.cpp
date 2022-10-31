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

    int ps, jam, subTotal, total;

    cout << "masukkan pilihan ps(1/2/3) : ";
    cin >> ps;
    cout << "ingin bermain brp jam : ";
    cin >> jam;

    if(ps == 1){
        subTotal = jam * 4000;
        cout << "Sub total : " << subTotal << endl;

        if(jam >= 20 && jam < 48){

            total = subTotal - (subTotal*10/100);

            cout << "total : " << total << endl;
        } else if (jam >= 48){
            total = subTotal - (subTotal*20/100);

            cout << "total : " << total << endl;
        }

    }else if(ps == 2){
        cout << "Sub total : " << jam * 3000 << endl; 
    }else if(ps == 3){
        cout << "Sub total : " << jam * 2000 << endl; 
    } else {
        cout << "input salah" << endl; 
    }

    return 0;
}