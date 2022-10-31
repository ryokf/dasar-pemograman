#include <iostream>

using namespace std;

int main()
{
    int x = 10;

    if(x < 10){
        cout << "bilangan kurang dari 10" << endl;
    } else if(x > 10){
        cout << "bilangan lebih dari 10" << endl;
    }else if(x == 10){
        cout << "bilangan sama dengan 10" << endl;
    }else{
        cout << "ini bukan bilangan" << endl;
    }
    return 0;
}
