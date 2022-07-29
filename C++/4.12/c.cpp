#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool mysort(pair<int, pair<string, string>> &p1 ,pair<int, pair<string, string>> &p2 ){
    return p1.first < p2.first;
}
int main(){
    int n;
    cin>>n;
    vector<pair<int, pair<string, string>>> v;
    while(n--){
        int x;
        string n,s;

        cin>>x>>n>>s;
        v.push_back(make_pair(x, make_pair(n, s)));
    }
    sort(v.begin(), v.end(), mysort);
    for(auto i : v){
        cout<<i.second.first<<" "<<i.second.second<<endl;
    }
    return 0;
}