#include <iostream>
#include <vector>
#include <stack>
using namespace std;

struct ListNode{
    int value;
    ListNode* next;
};

void ordinal_print1(ListNode* pHead, vector<int> &v){
    if (pHead != nullptr){
        ListNode* pNode = pHead;
        while(pNode -> next != nullptr){
            v.push_back(pNode -> value);
            cout << "  " << pNode -> value;
            pNode = pNode -> next;
        }
        cout << "  " << pNode -> value;
    }
}

void reverse_print1(ListNode* pHead, vector<int> &v){
    if (pHead != nullptr){
        ListNode* pNode = pHead;
        stack<ListNode*> s;

        while(pNode -> next != nullptr){
           s.push(pNode);
           pNode = pNode -> next;
        }
        s.push(pNode);

        while(!s.empty()){
            v.push_back(s.top() -> value);
            cout << "  " << s.top() -> value;
            s.pop();
        }
    }
}

void reverse_print2(ListNode* pHead, vector<int> &v){
    if (pHead != nullptr){
        if (pHead -> next != nullptr){
            reverse_print1(pHead -> next, v);
        }
        v.push_back(pHead -> value);
        cout << "  " << pHead -> value;
    }
}

int main(){
    ListNode* pHead1 = new ListNode;
    ListNode* pNode = pHead1;
    for(int i = 0; i < 10; i += 2){
        pNode -> value = i;
        pNode -> next = new ListNode;
        pNode = pNode -> next;
    }
    pNode -> value = 10;
    
    vector<int> ord1_List;
    cout << "List(ordinal1):";
    ordinal_print1(pHead1, ord1_List);
    cout << endl;

    vector<int> rev1_List;
    cout << "List(reverse1):";
    reverse_print1(pHead1, rev1_List);
    cout << endl;

    vector<int> rev2_List;
    cout << "List(reverse2):";
    reverse_print2(pHead1, rev2_List);
    cout << endl;

    return 0;
}



