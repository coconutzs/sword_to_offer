#include <iostream>
using namespace std;

struct ListNode{
    int value;
    ListNode* next;
};

void ordinal_print(ListNode* pHead){
    if(pHead != nullptr){
        ListNode* pNode = pHead;
        while(pNode -> next != nullptr){
            cout << "  " << pNode -> value;
            pNode = pNode -> next;
        }
        cout << "  " << pNode -> value << endl;
    }
}

ListNode* merge_two_list2(ListNode* pHead1, ListNode* pHead2){
    ListNode* pHead3 = nullptr;
    ListNode* pN1 = pHead1;
    ListNode* pN2 = pHead2;
    
    if(pHead1 -> value <= pHead2 -> value){
        pHead3 = pHead1;
        pN1 = pN1 -> next;
    }
    else{
        pHead3 = pHead2;
        pN2 = pN2 -> next;
    }
    ListNode* pN3 = pHead3;
    // cout << pN1 -> value << endl;
    // cout << pN2 -> value << endl;
    
    while(pN1 -> next != nullptr && pN2 -> next != nullptr){
        if(pN1 -> value <= pN2 -> value){
            pN3 -> next = pN1;
            pN1 = pN1 -> next;
        }
        else{
            pN3 -> next = pN2;
            pN2 = pN2 -> next;
        }
        pN3 = pN3 -> next;
    }
    
    if(pN1 -> next == nullptr){
        pN3 -> next = pN1;
        pN3 = pN3 -> next;
        pN3 -> next = pN2;
    }
    else{
        pN3 -> next = pN2;
        pN3 = pN3 -> next;
        pN3 -> next = pN1;
    }
    return pHead3;
}

ListNode* merge_two_list(ListNode* pHead1, ListNode* pHead2){
    ListNode* pHead3 = new ListNode;
    ListNode* pN3 = pHead3;
    ListNode* pN1 = pHead1;
    ListNode* pN2 = pHead2;
    while(pN1 != nullptr && pN2 != nullptr){
        if(pN1 -> value <= pN2 -> value){
            pN3 -> next = pN1;
            /*
            if(pN1 -> next != nullptr){
                pN1 = pN1 -> next;
            }
            else{
                pN1 = nullptr;
            }
            */
            pN1 = pN1 -> next;
        }
        else{
            pN3 -> next = pN2;
            /*
            if(pN2 -> next != nullptr){
                pN2 = pN2 -> next;
            }
            else{
                pN2 = nullptr;
            }
            */
            pN2 = pN2 -> next;
        }
        pN3 = pN3 -> next;
    }

    if(pN1 == nullptr){
        pN3 -> next = pN2;
    }
    else{
        pN3 -> next = pN1;
    }

    pHead3 = pHead3 -> next;
    return pHead3;
}

int main(){
    ListNode* pHead1 = new ListNode;
    ListNode* pHead2 = new ListNode;
    pHead1 -> value = 1;
    pHead2 -> value = 2;

    ListNode* pNode  = pHead1;
    for(int i = 3; i < 11; i += 2){
        pNode -> next = new ListNode;
        pNode = pNode -> next;
        pNode -> value = i;
    }
    cout << "List1:";
    ordinal_print(pHead1);

    pNode = pHead2;
    for(int i = 4; i < 12; i += 2){
        pNode -> next = new ListNode;
        pNode = pNode -> next;
        pNode -> value = i;
    }
    cout << "List2:";
    ordinal_print(pHead2);

    ListNode* pHead3 = merge_two_list(pHead1, pHead2);
    cout << "List3:";
    ordinal_print(pHead3);
    return 0;
}
