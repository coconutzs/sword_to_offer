#include <iostream>
#include <stack>
using namespace std;

struct ListNode{
    int value;
    ListNode* next;
};

void reverse_print(ListNode* pHead){
    if (pHead != nullptr){
        stack<ListNode*> s;
        s.push(pHead);
        ListNode* pNode = pHead;

        while (pNode -> next != nullptr){
            s.push(pNode -> next);
            pNode = pNode -> next;
        }
        
        while(!s.empty()){
            cout << "  " << s.top() -> value;
            s.pop();
        }
        cout << endl;
    }
    else{
        cout << "  empty!" << endl;
    }
}

void del_val(ListNode** ppHead, int val){
    if(*ppHead != nullptr){
        ListNode* pDel = nullptr;
        
        if ((*ppHead) -> value == val){
            pDel = *ppHead;
            *ppHead = (*ppHead) -> next;
        }
        else{
            ListNode* pNode = *ppHead;
            while(pNode -> next != nullptr && pNode -> next -> value != val){
                pNode = pNode -> next;
            }
            if(pNode -> next != nullptr && pNode -> next -> value == val){
                pDel = pNode -> next;
                pNode -> next = pNode -> next -> next;
            }
            else{
                cout << "No target value!" << endl;
            }
        }

        if (pDel != nullptr){
            delete pDel;
            pDel = nullptr;
        }
    }
}

void del_ptr(ListNode** ppHead, ListNode* pDel){
    if(pDel == nullptr || *ppHead == nullptr){
        return;
    }
    else{
        if(pDel -> next == nullptr){
            ListNode* pNode = *ppHead;
            if(pNode == pDel){
                *ppHead = nullptr;
            }
            else{
                while(pNode -> next != pDel && pNode -> next != nullptr){
                    pNode = pNode -> next;
                }
                if(pNode -> next != nullptr && pNode -> next == pDel){
                    pNode -> next = pNode -> next -> next;
                }
                else{
                    cout << "No target pointer!" << endl;
                }
            }
        }
        else{
            pDel -> value = pDel -> next -> value;
            ListNode* pTemp = pDel -> next;
            pDel -> next = pDel -> next -> next;
            pDel = pTemp;
        }
        
        if(pDel != nullptr){
            delete pDel;
            pDel = nullptr;
        }
    }
}

void recur_del_ptr(ListNode** ppHead, ListNode* pHead){
    if(pHead != nullptr){
        if(pHead -> next != nullptr){
            recur_del_ptr(ppHead, pHead -> next);
        }
        del_ptr(ppHead, pHead);
        cout << "List1(reverse):";
        reverse_print(*ppHead);
    }
}

int main(){
    ListNode* pHead1 = new ListNode;
    ListNode** ppHead1 = &pHead1;
    pHead1 -> value  = 0;
    ListNode* pNode  = pHead1;
    for (int i = 2; i < 12; i += 2){
        pNode -> next = new ListNode;
        pNode = pNode -> next;
        pNode -> value = i;
    }

    cout << "List1(reverse):";
    reverse_print(pHead1);
    del_val(ppHead1, 0);

    cout << "List1(reverse):";
    reverse_print(pHead1);
    del_ptr(ppHead1, pHead1 -> next -> next -> next -> next);

    cout << "List1(reverse):";
    reverse_print(pHead1);

    recur_del_ptr(ppHead1, pHead1);
    return 0;
}
