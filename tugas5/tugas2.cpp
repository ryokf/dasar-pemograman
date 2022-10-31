#include <iostream>

using namespace std;

int main(){

    int x;
    cout << "masukkan angka : ";
    cin >> x;

    if(x <= 5){
        cout << "x kurang dari 5" << endl;
    }else if(x >= 10){
        cout << "x lebih dari 10" << endl;
    }else if(x >= 6 && x <= 9){
        cout << "x antara 6 dan 9" << endl;
    }else {
        cout << "input tidak diketahui" << endl;
    }

    return 0;
}