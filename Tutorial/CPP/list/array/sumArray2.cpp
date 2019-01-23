#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    cout << "Please input numbers, split with space..." << endl;
    int sum, a;
    sum = 0;
    do{
        cin >> a;
        sum += a;
    }
    while(getchar()!='\n');
    cout << "Sum of input numbers is " << sum << endl;
    return 0;
}
