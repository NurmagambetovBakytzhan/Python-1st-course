#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
int main(){
    string s;
    int n;
    cin>>s>>n;
    if(s.size() % n != 0){
        cout<<"look at the road!";
    }
    vector<string> v;
    string k = "";
    for(int i = 0 ; i < s.size(); i++){
        k = k + s[i];
        if(k.size() == n){
            v.push_back(k);
            k = "";
        }
    }
    int cnt = 0;

    for(int i = 1 ; i  < v.size(); i++){
        string a = v[0];
        string b = v[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a!=b){
            cout<<"look at the road!";
            return 0;
        }
        do{
            if(v[0] != v[i]){
                cnt++;
            }
            else{
                break;
            }
         }
        while(next_permutation(v[i].begin(), v[i].end()));
    }
    cout<<cnt;
}