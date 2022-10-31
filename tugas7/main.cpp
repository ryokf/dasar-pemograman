#include <iostream>

using namespace std;

int main()
{
    int jam, upah = 5000;

    cout << "berapa jam anda lembur : ";
    cin >> jam;

    if( jam > 7 ) {
        cout << "uang lembur anda : " << upah * jam << endl;
    } else {
        cout << "maaf, anda belum bisa mendapat upah lembur" << endl;
    }

    return 0;
}
