#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
string tolow(string x){
    for(int i = 0 ; i < x.size(); i++){
        x[i]= tolower(x[i]);
    }
    return x;
}
set<char> toset(string x){
    set<char> s;
    for(int i = 0 ;i < x.size(); i++){
        s.insert(x[i]);
    }
    return s;
}
int main(){
    int n;
    cin>>n;
    vector <set<char>> v;
    vector <char> V;
    
    for(int i = 0 ; i < n ; i++){
        string x;
        cin>>x;
        for(int j = 0 ; j < x.size(); j++ ){
            x[j] = tolower(x[j]);
        }
        v.push_back(toset(x));
    }
    vector <set<char>> :: iterator it;
    set<char> :: iterator jt;
    for(auto i : v){
        for(jt = i.begin(); jt != i.end(); jt++){
            V.push_back(*jt);
        }
    }
    
    map<char,int> M;
    for(auto i : V){
        M[i]++;
    }
    
    vector<char> r;
    for(auto i : M){
        if(i.second == n){

            r.push_back(i.first);
        }
    }
    if(r.empty()){
        cout<<"No common characters";
    }
    else{
        for(auto i : r){
            cout<<i<<" ";
        }
    }
}