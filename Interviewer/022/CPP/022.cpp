#include <iostream>
using namespace std;

struct ListNode{
    int value;
    ListNode* next;
};

class Solution{
public:
    ListNode* reverse_k(ListNode* pHead, int k){
        if (pHead != nullptr){
            ListNode* pNode1 = pHead;
            ListNode* pNode2 = pHead;
            int dist = 0;
            while(pNode1 -> next != nullptr){
                pNode1 = pNode1 -> next;
                dist++;
                if(dist == k){
                    pNode2 = pNode2 -> next;
                    dist--;
                }
            }
            
            if(dist == (k-1)){
                return pNode2;
            }
        }
    }
};

int main(){
    ListNode* pHead = new ListNode;
    ListNode* pNode = pHead;
    pHead -> value = 0;
    for (int i = 1; i < 6; i++){
        pNode -> next = new ListNode;
        pNode = pNode -> next;
        pNode -> value = i;
    }
    Solution s;
    ListNode* p_rk = s.reverse_k(pHead, 3);
    pNode = pHead;
    while(pNode != p_rk){
        pNode = pNode -> next;
    }
    cout << pNode -> value << endl;
    return 0;
}
