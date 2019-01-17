#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

class Solution{
public:
    void replaceSpace(char *str, int length){
        if(str == nullptr || length <= 0){
            return;
        }

        int num_blank = 0;
        int origin_size = 0;
        while (*str != '\0'){
            origin_size++;
            if (*str == ' '){
                num_blank++;
            }
            str++;
        }
        origin_size++;
        str++;
        // cout << num_blank << endl;
        int new_size = origin_size + num_blank * 2;
        if(new_size > length){
            return;
        }

        char* p1 = str;
        char* p2 = str + num_blank * 2;
        
        while(p1 != p2){
            if (*p1 != ' '){
                *(p2--) = *p1;
            }
            else{
                *(p2--) = '0';
                *(p2--) = '2';
                *(p2--) = '%';
            }
            p1--;
        }
    }
};

int main(){
    Solution S1;
    char s[100];
    int len_s = sizeof(s)/sizeof(s[0]);
    // cout << len_s << endl;
    strcpy(s, "How old are you?");
    S1.replaceSpace(s, len_s);
    cout << "s:  ";
    for (int i = 0; i < 22; i++){
        cout << s[i];
    }
    cout << endl;
    return 0;
}
