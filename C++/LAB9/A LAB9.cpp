#include <bits/stdc++.h>
using namespace std;
bool comp (pair<int , int>&p1 , pair<int , int> &p2){
    return p1.first < p2.first;
    if(p1.first >= p2.first){
        return p1.second < p2.second;
    }
}

int main(){
    int n;
    vector< pair<int, int>>  v;
    cin>>n;
    while(n--){
        int x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
    

    return 0;
}   