#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
bool comp(pair<string , int> &p1, pair<string , int> &p2){
    return p1.second > p2.second;
}
int main(){
    string s;
    map<string, int> m;
    vector<pair<string, int>> v;
    int cnt;
    double total;
    while(cin>>s){
        for(int i = 0 ; i < s.size() ;i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i]+=32;
            }
        }
        total++;
        m[s]++;
    }
    
    
    for(auto i: m){
        v.push_back(make_pair(i.first, i.second));
    }
    sort(v.begin(), v.end() , comp);
    for(auto i : v){
        cout<<i.first<<" "<<":"<<" "<<i.second / total *100<<"%"<<endl;
    }
    return 0;
}