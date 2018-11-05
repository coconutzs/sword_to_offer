#include <iostream>
#include <fstream>
using namespace std;

int main(){
    /*
    ofstream out("text.txt");
    if (!out){
        cerr << "failed to open!" << endl;
        return 0;
    }

    out << "abcde12345";
    out << endl;
    out.close();
    */

    ifstream in("text.txt");
    ofstream out("text_copy.txt");

    if(!in){
        cerr << "fail to open the read file!" << endl;
        return 0;
    }
    
    if(!out){
        cerr << "fail to open the write file!" << endl;
        return 0;
    }

    char x;
    while( in >> x ){
        cout << x;
        out << x;
    }

    out << endl; 
    cout << endl;
    in.close();
    out.close();

    return 0;

}
