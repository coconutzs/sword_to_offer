#include <iostream>
struct Node{
    int value;
    Node * next;
};

class Linklist{
    private:
        Node * Head;
    public:
        Linklist();
        void CreatList1(int n);
        void CreatList2(int n);
        void Insert(int n, int e);
        void Delete(int n);
        int GetData(int n);
        int Search(int obj);
        int GetLength();
        void Display();
};
