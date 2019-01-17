#include <iostream>
#include <string>
#include <vector>
using namespace std;

void double_v(vector<int>&v_a, vector<int>&v_b);
void double_v(vector<int>&v_a, vector<int>&v_b){
    v_b.resize(2 * v_a.size());
    vector<int>::iterator it_b = v_b.begin();
    for (vector<int>::iterator it_a = v_a.begin(); it_a != v_a.end(); it_a++){
       *it_b = *it_a;
       it_b++;
       *it_b = *it_a;
       it_b++;
    }
    cout << v_b.size() << "\t" << v_b.capacity() << endl;
}

int main(){
    int c[5] = {
        1, 2, 3, 4, 5
    };
    vector<int> a;
    a.resize(5);
    a.assign(c, c+5);
    vector<int> b;
    cout << a.size() << "\t" << a.capacity() << endl;
    cout << b.size() << "\t" << b.capacity() << endl;
    double_v(a, b);

    /*
    for (int i=0; i<5; i++){
        cout << a[i] << "\t";
    }
    cout << endl;
    */
    
    cout << "vector a:  ";
    for (vector<int>::iterator it=a.begin(); it != a.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    
    cout << "vector b:  ";
    for (vector<int>::iterator it=b.begin(); it != b.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}

