#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    char ch;
    int flag = 0;
    string answer;
    string answer_show;
    while(!flag){
        flag = 1;
        cout << "Question..." << endl;
        if(cin.peek() == '\n'){
            flag = 0;
            cout << "Error input!" << endl;
            cin.get();
        }
        else{
            getline(cin, answer);
            if(answer.length() == 1){
                if(toupper(answer[0]) == 'Y'){
                    answer_show = "yes"; 
                }
                else if(toupper(answer[0]) == 'N'){
                    answer_show = "no"; 
                }
                else{
                    flag = 0;
                }
            }
            else{
                flag = 0;
                cout << "Error input" << endl;
            }
        }
    }
    cout << answer_show << endl;
    return 0;
}
