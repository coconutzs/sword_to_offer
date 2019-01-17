#include <iostream>
#include <string>
#include <stack>
using namespace std;

struct ListNode{
    int value;
    ListNode* next;
};

void add_to_tail(ListNode** pHead, int value){
    // create a new Node
    ListNode* pNew = new ListNode;
    pNew -> value = value;
    pNew -> next  = nullptr;

    // add the new Node to tail
    if (*pHead == nullptr){
        *pHead = pNew;
    }
    else{
        ListNode* pNode = *pHead;
        while(pNode -> next != nullptr){
            pNode = pNode -> next;
        }
        pNode -> next = pNew;
    }
}

void del(ListNode** pHead, int value){
    if (pHead == nullptr || *pHead == nullptr){
        cout << "Input error!" << endl;
        return;
    }
    else{
        // pDel should be assigned by the pointer whose value == value
        ListNode* pDel = nullptr;
        // 1. pN_0 -> value == value
        // address of *pHead should be changed to pN_1
        if ((*pHead) -> value == value){
            pDel = *pHead;
            *pHead = (*pHead) -> next; 
        }
        else{
            ListNode* pNode = *pHead;
            // 2. pN_i -> value == value (i = 1, 2, ... , N)
            while(pNode -> next -> value != value || pNode -> next == nullptr){
                pNode = pNode -> next;
            }
            // ensure if value in list
            if (pNode -> next -> value == value && pNode -> next != nullptr){
                pDel = pNode -> next;
                pNode -> next = pNode -> next -> next;
            }
            else{
                cout << "Value is not in list!" << endl;
            }
            // delete the pDel 
            if (pDel != nullptr){
                pDel = nullptr;
            }
            delete pDel;
        }
        
    }
}

void ordinal_print(ListNode** pHead){
    if (pHead == nullptr || *pHead == nullptr){
        cout << "Input error!" << endl;
    }
    else{
        cout << "List:";
        ListNode* pNode = *pHead;
        cout << "  " << pNode -> value ;
        while(pNode -> next != nullptr){
            pNode = pNode -> next;
            cout << "  " << pNode -> value;
        }
        cout << endl;
    }
}

void reverse_print(ListNode** pHead){
    if (pHead == nullptr || *pHead == nullptr){
        cout << "Input error!" << endl;
    }
    else{
        cout << "List(reverse):";
        ListNode* pNode = *pHead;
        stack<ListNode*> sNode;
        sNode.push(pNode);
        while(pNode -> next != nullptr){
            pNode = pNode -> next;
            sNode.push(pNode);
        }

        while(!sNode.empty()){
            pNode = sNode.top();
            cout << "  " << pNode -> value; 
            sNode.pop();
        }
        cout << endl;
    }
}

int main(){

    // method1
    ListNode* pN_0 = new ListNode;
    ListNode* pN_1 = new ListNode;
    ListNode* pN_2 = new ListNode;
    ListNode* pN_3 = new ListNode;
    ListNode** pHead1 = &pN_0;
    pN_0 -> value = 0;
    pN_1 -> value = 1;
    pN_2 -> value = 2;
    pN_3 -> value = 3;
    pN_0 -> next  = pN_1;
    pN_1 -> next  = pN_2;
    pN_2 -> next  = pN_3;

    // method2
    ListNode* pNode = new ListNode;
    ListNode* p = pNode;
    ListNode** pHead2 = &p;
    pNode -> value = 0;
    for (int i = 0; i < 3; i++){
        pNode -> next = new ListNode;
        pNode = pNode -> next;
        pNode -> value = i + 1;
    }

    add_to_tail(pHead1, 4);
    add_to_tail(pHead2, 4);
    // ordinal_print(pHead1);
    ordinal_print(pHead2);
    // reverse_print(pHead1);
    reverse_print(pHead2);
    // del(pHead1, 4);
    // ordinal_print(pHead1);
    for (int i = 4; i >= 0; i--){
        del(pHead2, i);
        ordinal_print(pHead2);
        reverse_print(pHead2);
    }
    return 0;
}
