#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <set>
#include <map>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<char> sss;
    vector<string> v;
    vector <char> valid;
    for(int i = 0 ; i< n ; i++){
        string x;
        cin>>x;
        for(int j = 0 ; j< x.size(); j++){
            tolower(x[j]);
            int m = sss.size();
            sss.insert(x[j]);
            if(sss.size() == m){
                valid.push_back(x[j]);
            }
            
        }
        
    }
    map<char,int> m;
    vector <int> kkk;


    for(auto i : valid){
        kkk.push_back(i);
        m[i]++;
    }
    for(auto i : m){
        if(i.second==n){
            
            cout<<i.first<<" ";
        }
    }
    if(kkk.empty()){
        cout<<"No common characters";

    }
    return 0;

    
}