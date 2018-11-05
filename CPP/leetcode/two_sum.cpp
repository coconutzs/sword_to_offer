#include <vector>
#include <iostream>
// #include <algorithm>

using namespace std;
vector<int> twoSum(vector<int> &nums, int target);

int main(){
    int tar = 7;
    int a[5] = {
        1, 2, 4, 6, 8
    };
    vector<int> numbers(a, a+5);
    vector<int> result = twoSum(numbers, tar);
    vector<int>::iterator ir = result.begin();

    cout << "[";
    while( ir != result.end() - 1){
        cout << *ir << ", ";
        ir++;
    }
    cout << *ir++ << "]" << endl;
    return 0;
}

vector<int> twoSum(vector<int> &nums, int target){
    vector<int>::iterator i1 = nums.begin();
    vector<int>::iterator i2;
    vector<int> result(2);
    while(i1 != nums.end() - 1){
        i2 = i1 + 1;
        while(i2 != nums.end()){
            if( (*i1 + *i2) == target ){
                goto here;
            }
            i2++;
        }
        i1++;
    }
    here:
    result[0] = i1 - nums.begin();
    result[1] = i2 - nums.begin();
    return result;
}
