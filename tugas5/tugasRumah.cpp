#include <iostream>

using namespace std;

int main(){

    cout << "==============WARTEG BAROKAH==============" << endl << endl;

    cout << "1. nasi rames 20000" << endl;
    cout << "2. nasi goreng 30000" << endl;
    cout << "3. nasi ruwet 15000" << endl << endl;

    int rames = 20000;
    int nasgor = 30000;
    int ruwet = 15000;

    int pilih, jumlah;

    cout << "silahkan pilih menu(1/2/3) : ";
    cin >> pilih;
    cout << "berapa yang ingin dipesan : ";
    cin >> jumlah;

    cout << "------------------------" << endl;

    if(pilih == 1){
        cout << "pesanan anda adalah nasi rames dengan jumlah " << jumlah << endl;
        cout << "jumlah yang perlu dibayar adalah " << rames * jumlah << endl;
    }else if(pilih == 2){
        cout << "pesanan anda adalah nasi goreng dengan jumlah " << jumlah << endl;
        cout << "jumlah yang perlu dibayar adalah " << nasgor * jumlah << endl;
    }else if(pilih == 3){
        cout << "pesanan anda adalah nasi ruwet dengan jumlah " << jumlah << endl;
        cout << "jumlah yang perlu dibayar adalah " << ruwet * jumlah << endl;
    }else {
        cout << "input tidak dikenali" << endl;
    }

    cout << "terima kasih" << endl;
    return 0;
}