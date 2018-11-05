#include <iostream>
#include <vector>

using namespace std;

int main(){
    int a = 0;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            a++;
            if(a == 45){
                goto here;
                break;
            }
        }
        cout << "a = " << a << endl;
    }
    here:
    cout << "a = " << a << endl;
    return 0;
}
