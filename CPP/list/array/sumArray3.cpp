#include <iostream>

using namespace std;

int main(){
    const unsigned short len = 10;
    int a[len];
    for(int i = 0; i < len; i++){
        cout << "Please input the " << (i + 1) << "th number: "; 
        while( !(cin >> a[i]) ){
            cin.clear();
            cin.ignore(100, '\n');
            cout << "Invaild input, try angin!" << endl;
        }
    }
    
    int sum = 0;
    double ave;
    for(int j = 0; j < len; j++){
        sum += a[j];
    }
    ave = sum * 1.0 / len;
    cout << "Sum: " << sum << "\tAverage: " << ave << '\n' << endl;
    return 0;
}
