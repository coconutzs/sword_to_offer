#include "List_s.h"
#include <iostream>
using namespace std;

Linklist::Linklist(){
    Head = new Node;
    Head -> next = NULL;
}

void Linklist:: CreatList1(int n){
    Node *p;
    Node *temp;
    p = Head;
    for(int i = 0; i < n; i++){
        temp = new Node;
        cin >> temp -> value;
        // temp -> next = p -> next;
        p -> next = temp;
        cout << p -> next << "  " << p -> endl;
    }
    // cout << p -> next << endl;
}

void Linklist:: CreatList2(int n){
    Node *p;
    Node *temp;

}

int main(){
    Linklist list1;
    list1.CreatList1(3);
    // Node* p = new Node;
    
    // cout << list1:: Head->value << endl;
    return 0;
}

