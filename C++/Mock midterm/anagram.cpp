#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main(){
    string s;
    vector<string> v;
    string k;
    while(cin>>s){
        v.push_back(s);
        k =s;
    }
    set<string> newv;
    sort(k.begin(), k.end());
    vector<string> :: iterator it;
    for(auto i : v){
        string r = i;
        sort(i.begin(), i.end());
        if(i != k){
            newv.insert(r);
        }
    }
    if(newv.empty()){
        cout<<"There is none left";
    }
    for(auto it = newv.begin(); it!=newv.end(); it++){
        cout<<*it<<" ";
    }
}