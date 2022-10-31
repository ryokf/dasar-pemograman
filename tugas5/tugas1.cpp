#include <iostream>

using namespace std;

int main()
{
    char x;

    cout << "masukkan huruf : ";
    cin >> x;

    if(x == 'A'){
        cout << "ini adalah a besar" << endl;
    }else if(x == 'B'){
        cout << "ini adalah b besar" << endl;
    }else if(x == 'C'){
        cout << "ini adalah c besar" << endl;
    }else if(x == 'D'){
        cout << "ini adalah d besar" << endl;
    }else if(x == 'E'){
        cout << "ini adalah e besar" << endl;
    }else{
        cout << "input tidak kami ketahui" << endl;
    }
    
    return 0;
}
