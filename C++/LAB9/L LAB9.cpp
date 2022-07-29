#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
bool sortt(pair<int, int> &p1, pair<int ,int> &p2){
    return p1.second>p2.second;
}
int main(){
    vector<pair<int,int>> v;
    map<int, int> m;
    int n;
    cin>>n;
    for(int i =0 ; i < n; i++){
        int a,b;
        cin>>a>>b;
        v.push_back(pair<int,int>(a,b));
    }
    int s;
    for(int i = 0 ; i < v.size(); i++){
       m.insert(make_pair((v[i].first + v[i].second), i));
    }
    sort(m.begin(), m.end(), sortt);
    for(auto i : m){
        cout<<i.second;
    }
    return 0;
}