#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;

int main(){
    // base attribute
    string str = "12345abcde coconut\t\t123";
    cout << "str: " << str << endl;
    cout << "str.length(): " << str.length() << endl;
    cout << "str.size(): " << str.size() << endl;
    cout << "str.empty(): " << str.empty() << endl;

    // declare a string
    /*
    string s1;
    string s2(str);
    string s3(str, 3);
    string s4("12345adcde coconut\t\t123", 3);
    string s5(str, 3, 5);
    string s6(12, 'z');
    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;
    cout << "s3: " << s3 << endl;
    cout << "s4: " << s4 << endl;
    cout << "s5: " << s5 << endl;
    cout << "s6: " << s6 << endl;
    
    // assignment 
    string s1 = str;
    string s2 = str.assign(str, 1, 5);
    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;
       
    // swap
    string s1 = "coco1";
    string s2 = "coco2";
    swap(s1, s2);
    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;
    
    // add
    string s1(str, 0, 10);
    string s2(s1);
    s2 += " HelloWorld!";
    string s3(s1);
    s3.append(" HelloWorld!");
    string s4(s1);
    s4.push_back('1');
    string s5(s1);
    s5.insert(5, "678");
    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;
    cout << "s3: " << s3 << endl;
    cout << "s4: " << s4 << endl;
    cout << "s5: " << s5 << endl;

    // substract 
    string s1(str, 0, 18);
    string s2(s1);
    string s3(s1);
    string s4(s1);
    string s5(s1);
    string s6(s1);
    string s7(s1);
    string s8(s1);
    string s9(s1);
    string s10(s1);
    string::iterator it;
    string::iterator it2;
    s1.erase(12, 4);
    s2.erase(12);
    
    it = s3.begin();
    s3.erase(it);
    it = s4.end() - 1;
    s4.erase(it);
    it = s5.begin() + 5;
    it2 = s5.begin() + 6;
    s5.erase(it, it2);
    it = s6.begin() + 5;
    s6.erase(it, it++);
    it = s7.begin() + 5;
    s7.erase(it--, it);
    s8.erase(5, -1);
    s9.clear();
    // s10.~string();

    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;
    cout << "s3: " << s3 << endl;
    cout << "s4: " << s4 << endl;
    cout << "s5: " << s5 << endl;
    cout << "s6: " << s6 << endl;
    cout << "s7: " << s7 << endl;
    cout << "s8: " << s8 << endl;
    cout << "s9: " << s9 << endl;
    cout << "s10: " << s10 << endl;

    // compare
    string s1(str, 0, 10);
    string s2(s1);
    string s3(s1);
    string s4(s1);
    string s5("236");
    string s6("146");
    s3.erase(s3.end() - 1);
    s4.push_back('f');

    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;
    cout << "s3: " << s3 << endl;
    cout << "s4: " << s4 << endl;
    cout << "s1 == s2: " << (s1 == s2) << endl;
    cout << "s1 >= s3: " << (s1 >= s3) << endl;
    cout << "s1 <= s4: " << (s1 <= s4) << endl;
    cout << "235 == 145: " << ("235" ==  "145") << endl;
    cout << "s1.compare(s2): " << s1.compare(s2) << endl; 
    cout << "s5.compare(s6): " << s5.compare(s6) << endl;
    */

    // search
    string s1("the coco of the coconut is coco, is not COCO!");
    string s2(s1, 37);
    cout << s2 << endl;
    cout << s1.find("co") << endl;
    cout << s1.rfind("co") << endl;
    cout << s1.find_first_of("co") << endl;
    cout << s1.find_last_of("co") << endl;
    cout << s1.find("co", 10) << endl;
    cout << s1.find("do") << endl;
    cout << s1.npos << endl;

    // find all
    string wanted = "co";
    string::size_type position;
    position = 0;
    cout << "\n" << s1 << endl;
    
    cout << "co at position: ";
    while((position = s1.find(wanted, position))!= s1.npos){
        cout << position << "  ";
        position++;
    }
    cout << endl;
    return 0;
}

