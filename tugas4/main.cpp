#include <iostream>

using namespace std;

int main()
{
    // MAKANAN 1
    string nama1;
    int harga1, jumlah1;

    cout << "MAKANAN 1 : " << endl;
    cout << "Nama : ";
    cin >> nama1;
    cout << "Harga : ";
    cin >> harga1;
    cout << "Jumlah : ";
    cin >> jumlah1;

    cout << endl << endl;

    // MAKANAN 2
    string nama2;
    int harga2, jumlah2;

    cout << "MAKANAN 2 : " << endl;
    cout << "Nama : ";
    cin >> nama2;
    cout << "Harga : ";
    cin >> harga2;
    cout << "Jumlah : ";
    cin >> jumlah2;

    cout << endl << endl;

    // // MAKANAN 3
    string nama3;
    int harga3, jumlah3;

    cout << "MAKANAN 3 : " << endl;
    cout << "Nama : ";
    cin >> nama3;
    cout << "Harga : ";
    cin >> harga3;
    cout << "Jumlah : ";
    cin >> jumlah3;

    cout << endl << endl;

    cout << "INVOICE" << endl << endl;
    cout << "makanan 1 : " << " " << nama1 << " \t " << harga1 << "\t " << jumlah1 << endl;
    cout << "makanan 2 : " << " " << nama2 << " \t " << harga2 << "\t " << jumlah2 << endl;
    cout << "makanan 3 : " << " " << nama3 << " \t " << harga3 << "\t " << jumlah3 << endl;

    int total = (harga1 * jumlah1) + (harga2 * jumlah2) + (harga3 * jumlah3);
    cout << "Total : " << total << endl;  


    return 0;
}

