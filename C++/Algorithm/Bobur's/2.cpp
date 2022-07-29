#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;
// 12345 -> 45312
int main(){
    vector<int> v;
    for(int i = 0 ; i < 10; i++){
        v.push_back(i);
    }
    rotate(v.begin(), v.begin() -8, v.end());
    for(auto i : v){
        cout<<i<<" ";
    }
    return 0;
}