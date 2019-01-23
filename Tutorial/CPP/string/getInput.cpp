#include <iostream>
#include <string>

using namespace std;

int main(){
    string str;
    cout << "Please input a sentance..." << endl;
    getline(cin, str);
    cout << "\nYour input is..." << endl;
    cout << str << '\n' << endl;
    return 0;
}
