#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;

struct Master{
    string name;
    string id;
    char sex;
    int age;
};

int main(){
   Master zyf;
   zyf.name = "ZhaoYiFei";
   zyf.id   = "2017110370";
   zyf.age  = 22;
   zyf.sex  = 'F';

   Master zs = {
       "ZhaoShuo", "2017110369", 'M', 24
   };

   cout << zyf.name << "  " << zyf.id << "  " << zyf.sex << "  " << zyf.age << endl;
   cout << zs.name << "   " << zs.id << "  " << zs.sex << "  " << zs.age << endl;

   Master yjy = {
       "YuJianYang", "2017110365", 'M', 23
   };
   Master *p_yjy = &yjy;
   cout << p_yjy -> name << endl;
   cout << (*p_yjy).name << endl;
   cout << yjy.sex << endl;
   p_yjy -> sex = 'F';
   cout << yjy.sex << endl;
   return 0;
}
