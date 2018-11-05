#include <iostream>
using namespace std;

double calc(double a);
double calc(double a, double b);
double calc(double a, double b, double c);

int main(){
    double a, b, c;
    cout << "Please input three numbers, split them with space..." << endl;
    cin >> a >> b >> c;
    cin.ignore(100, '\n');
    double cal1 = calc(a);
    double cal2 = calc(a, b);
    double cal3 = calc(a, b, c);
    cout << "calc1: " << cal1 << "\tcalc2: " << cal2 << "\tcalc3: " << cal3 << endl;
    return 0;
}

double calc(double a){
    return (a * a);
}

double calc(double a, double b){
    return (a + b);
}

double calc(double a, double b, double c){
    return (a * b * c);
}
