#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main(){
    int n;
    cin>>n;
    map<int,set <string>> m;
    for(int i = 0 ; i<  n; i++){
        string s;
        int x;
        cin>>s>>x;
        m[x].insert(s);
    }
    map<string , int> w;
    for(auto i : m){
        set<string> :: iterator it;
        for(it = i.second.begin(); it != i.second.end() ; it++){
            w[*it]++;
        }
    }
    for(auto i : w){
        if(i.second >= 3){
            cout<<i.first<<" "<<"+1"<<endl;
        }
        else{
            cout<<i.first<<" "<<"NO BONUS"<<endl;
        }
    }
}   