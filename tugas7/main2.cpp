#include <iostream>

using namespace std;

int main()
{
    int uts,uas,tugas, rata;

    cout << "masukkan nilai uts : ";
    cin >> uts;
    cout << "masukkan nilai uas : ";
    cin >> uas;
    cout << "masukkan nilai tugas : ";
    cin >> tugas;

    cout << endl;

    rata = ((uts + uas + (tugas * 3)) / 5) / 2;

    if(rata > 50 || rata < 0){
        cout << "INPUT ANDA SALAH" << endl;
        return 0;
    }

    cout << "nilai anda : " << rata << endl;

    if( rata >= 20 && rata <=50 ){
        cout << "selamat anda lulus" << endl;
        if( rata >= 40 && rata <=50 ){
            cout << "anda lulus dengan nilai A" << endl;
        } else if( rata >= 30 && rata <= 39 ){
            cout << "anda lulus dengan nilai B" << endl;
        } else if( rata >= 20 && rata <= 29 ){
            cout << "anda lulus dengan nilai C" << endl;
        } 
    } else if(rata >= 0 && rata <=19){
        cout << "maaf, anda tidak lulus" << endl;
        if( rata >= 10 && rata <=19 ){
            cout << "anda gagal dengan nilai D" << endl;
        } else if( rata >= 0 && rata <= 9 ){
            cout << "anda lulus dengan nilai E" << endl;
        }
    }

    return 0;
}
