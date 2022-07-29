#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
    map<int, vector<string>> m;
    int n;
    string s;

    while(cin>>n>>s){
        m[n].push_back(s);
    }
    


    for(auto i : m){
        for(auto j : i.second){
            cout<<i.first<<" "<<j<<endl;
        }
    }
}