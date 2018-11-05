#include <iostream>
using namespace std;

struct Node{
    char c;
    int value;
    long long value2;
    Node* next;
};

int main(){
    int v1 = 1;
    Node* n1 = new Node;
    n1 -> value = v1;
    // cout << "n1  value: " << n1 -> value << "  next: " << n1 -> next << endl;
    cout << n1 << endl;
    cout << &(n1 -> value) << endl;
    cout << &(n1 -> next) << endl;

    int a[3] = {
     1, 2, 3
    };

    int* p = a;
    cout << endl;
    cout << p << endl;
    cout << ++p << endl;
    cout << sizeof(Node) << endl;
    cout << sizeof(int*) << endl;

    return 0;
}

