#include <iostream>
#include <vector>
using namespace std;
void print_vector(vector<int> &v);

int main(){
    vector<int> v1(10);
    cout << "v1: ";
    for (int i=0; i<v1.size(); i++){
        v1[i] = i;
        cout << v1[i] << " ";
    }
    cout << endl;
    
    cout << "v1: ";
    print_vector(v1);
    
    v1.push_back(10);
    cout << "v1: ";
    print_vector(v1);
    
    return 0;
}

void print_vector(vector<int> &v){
    vector<int>::iterator it = v.begin();
    while(it < v.end()){
        cout << *it << " ";
        it++;
    }
    cout << endl;
}
