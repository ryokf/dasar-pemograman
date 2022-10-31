#include <iostream>

using namespace std;

int main()
{
    cout << "DAFTAR MOBIL RENTAL" << endl;
    cout << "1. APV" << endl;
    cout << "2. Xenia" << endl;
    cout << "3. Avanza" << endl;

    int pilih, jam, biaya, total;
    cout << endl;

    cout << "masukkan pilihan mobil(1/2/3) : ";
    cin >> pilih;

    cout << endl;

    cout << "berapa lama peminjaman : ";
    cin >> jam;

    cout << endl;

    if(pilih == 1){
        cout << "Pilihan mobil adalah APV" << endl;
        biaya = 50000;
    }
    else if(pilih == 2){
        cout << "Pilihan mobil adalah Xenia" << endl;
        biaya = 60000;
    }
    else if(pilih == 3){
        cout << "Pilihan mobil adalah Avanza" << endl;
        biaya = 70000;
    } else {
        cout << "input salah" << endl;
    }

    if((biaya == 50000  && jam >= 6 ) || 
    (biaya == 60000  && jam >= 5 ) || 
    (biaya == 70000  && jam >= 4 )){
        total = biaya * jam;
        cout << "total sebelum diskon : " << total << endl;
        total = total - (total * 10 / 100);
        cout << "total yang perlu dibayar : " << total << endl;
    } else {
        total = biaya * jam;
        cout << "total yang perlu dibayar : " << total << endl;
    }

    return 0;
}
