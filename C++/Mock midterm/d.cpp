#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
int main(){
    string s;
    cin>>s;
    vector<pair<char,int>> v;
    map<char, int> m;
    for(int i = 0 ; i < s.size() ; i++){
        m[s[i]]++;
    }
    for(auto i : m){
        v.push_back(make_pair(i.first,i.second));
        
    }
    sort()
    return 0;

}