#include <iostream>
#include <vector>
#include <set>
#include <map>
using namespace std;

int main(){
    int n;
    cin>>n;
    set<char> s;
    vector<set<char>> v;
    for(int i = 0 ; i < n ; i++){
        string x;
        cin>>x;
        for(int j = 0 ; j < x.size(); j++){
            s.insert(x[j]);
        }
        v.push_back(s);
        s.clear();
    }
    set<char> :: iterator it;
    map<char, int> M;
    for(int i = 0 ; i < v.size(); i++){
        for(it = v[i].begin(); it != v[i].end(); it++){
            M[*it]++;
        }
    }
    bool flag = false;
    for(auto i : M){
        if(i.second == n){
            flag = true;
            cout<<i.first<<" ";
        }
    }
    if(!flag){
        cout<<"NO COMMON CHARACTERS";
    }
}