#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int, int> m;
    for(int i = 0 ; i < n; i++ ){
        int x;
        cin>>x;
        m[x]++;
    }
    vector <pair<int, int>> v;
    for(auto i  : m){
        v.push_back(make_pair(i.first, i.second));
    }
    sort(v.rbegin(), v.rend());
    for(auto i : v){
        cout<<i.second;
        return 0;
    }
}