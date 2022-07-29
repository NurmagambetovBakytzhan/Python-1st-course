#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v;
    for(int i = 0 ; i< n  ; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    while (k!=0)
    {
        rotate(v.begin(), v.end() - 1 ,v.end());
        k--;
    }
    for(auto i : v){
        cout<<i<<" ";
    }
    return 0;
}