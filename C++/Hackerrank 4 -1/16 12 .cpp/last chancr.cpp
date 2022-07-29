#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
int main(){
    string s,x;
    cin>>s>>x;
    stack<int> a,b;
    string y = s;
    string k = x;
    sort(y.begin(), y.end());
    sort(k.begin(), k.end());
    if(y!=k){
        cout<<"No";
        return 0;
    }
    if(s.size() != x.size()){
        cout<<"No";
    }
    for(int i = 0 ; i < s.size(); i++){
        a.push(s[i]);
    }
    for(int i = 0 ; i < x.size(); i++){
        b.push(x[i]);
    }
    int cnt = 0;
    
    while(!a.empty()){
        if(a.top() != b.top()){
            cnt++;
        }
        b.pop();
        a.pop();
    }
    if(cnt ==2){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}