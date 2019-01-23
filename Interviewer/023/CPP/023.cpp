#include <iostream>
using namespace std;

struct ListNode{
    int value;
    ListNode* next;
};

void print_ring(ListNode* pHead){
    ListNode* pNode = pHead;
    for(int i=0; i<20; ++i){
        cout << "  " << pNode -> value;
        pNode = pNode -> next;
    }
    cout << endl;
}

ListNode* find_enter(ListNode* pHead){
    if(pHead != nullptr){
        ListNode* p1 = pHead;
        ListNode* p2 = pHead; 
        do{
            p1 = p1 -> next;
            p2 = p2 -> next -> next;
        }
        while(p1 != p2 && p2 != nullptr);

        if(p2 != nullptr){
            int rSize = 0;
            do{
                p1 = p1 -> next;
                p2 = p2 -> next -> next;
                ++rSize;
            }
            while(p1 != p2);

            p1 = pHead;
            p2 = pHead;
            for(int i=0; i<rSize; ++i){
                p2 = p2 -> next;
            }

            if(p1 == p2) return pHead;
            else{
                while(p1 != p2){
                    p1 = p1 -> next;
                    p2 = p2 -> next;
                }
                return p1;
            }
        }
        else return nullptr;
    }
    else return nullptr;
}

int main(){
    ListNode* pHead = new ListNode;
    pHead -> value  = 1;

    ListNode* pNode = pHead;
    for(int i=2; i<7; ++i){
        pNode -> next = new ListNode;
        pNode = pNode -> next;
        pNode -> value = i;
    }

    ListNode* pEnter = pNode;
    for(int i=7; i<9; ++i){
        pNode -> next = new ListNode;
        pNode = pNode -> next;
        pNode -> value = i;
    }
    pNode -> next = pEnter;
    cout << "Ring:";
    print_ring(pHead);
    ListNode* pEn = find_enter(pHead);
    cout << "Ring Enter:  " << pEn -> value << endl;
    return 0;
}
