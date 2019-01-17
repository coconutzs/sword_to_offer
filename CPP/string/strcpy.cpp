#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str[12];
    strcpy(str, "hello world!");
    for (int i = 0; i < 12; i++){
        cout << *(str + i);
    }
    cout << endl;
    return 0;
}
