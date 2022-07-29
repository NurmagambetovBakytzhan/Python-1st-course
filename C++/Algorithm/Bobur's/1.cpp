#include <iostream>
#include<algorithm>
#include <vector>
using namespace std;
bool fun(int a){
    return a%4==0;
}
int main(){
    vector<int> v;
    for(int i = 0  ; i < 10 ; i++){
        v.push_back(i);
    }
    
    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<endl;
    // count_if()
    int res = count_if(v.begin(), v.end(), fun);
    cout<<res;
    return 0;
}