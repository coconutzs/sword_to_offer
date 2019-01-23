#include <iostream>
using namespace std;

struct ListNode{
    int value;
    ListNode* next;
};

void ordinal_print(ListNode* pHead){
    if(pHead == nullptr){
        return;
    }
    else{
        ListNode* pNode = pHead;
        while(pNode -> next != nullptr){
            cout << "  " << pNode -> value;
            pNode = pNode -> next;
        }
        cout << "  " << pNode -> value << endl;
    }
}

ListNode* reverse(ListNode* pHead){
    ListNode* pNewHead = nullptr;
    ListNode* pF = nullptr;
    ListNode* pB = pHead;
    while(pB != nullptr){
        ListNode* pT = pB -> next;
        if(pT == nullptr){
            pNewHead = pB;
        }
        pB -> next = pF;
        pF = pB;
        pB = pT;
    }
    return pNewHead;
}

int main(){
    ListNode* pHead1 = new ListNode;
    ListNode** ppHead1 = &pHead1;
    pHead1 -> value = 0;
    ListNode* pNode = pHead1;
    for(int i = 1; i < 10; i++){
       pNode -> next = new ListNode;
       pNode = pNode -> next;
       pNode -> value = i;
    }
    cout << "List1:";
    ordinal_print(pHead1);
    pHead1 = reverse(pHead1);
    cout << "List1:";
    ordinal_print(pHead1);
}
