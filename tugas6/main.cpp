#include <iostream>

using namespace std;

int main()
{
    int jam;

    cout << "masukkan pukul berapa sekarang (bilangan bulat) : ";
    cin >> jam;

    if(jam >= 6 && jam < 12){

        cout << "pagi" << endl;

        if( jam >= 7 && jam <= 8){
            cout << "daspro" << endl;
        }

    } else if(jam >= 12 && jam <= 15){

        cout << "siang" << endl;
        if( jam >= 13 && jam <=15 ){
            cout << "diskrit" << endl;
        }

    } else if(jam > 15 && jam < 18){
        cout << "sore" << endl;
    } else if(jam >= 18 && jam <= 24){
        
        cout << "malam" << endl;

        if(jam >= 20 && jam <= 23){
            cout << "push rank" << endl;

            int win;
            cout << "menang berapa kali : ";
            cin >> win;

            if(win >= 5){
                cout << "lanjut" << endl;
            } else if(win <= 5){
                cout << "pensi" << endl;
            }
        }

    } else {
        cout << "input tidak dikenali" << endl; 
    }
    return 0;
}
