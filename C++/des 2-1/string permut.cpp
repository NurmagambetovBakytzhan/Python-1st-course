#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s,t;

    cin>>s>>t;
    string a = s;
    string b = t;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int cnt = 0;
    if(s.size() != t.size()){
        cout<<"Impossible";
        return 0;
    }
    
    if(a!= b){
        cout<<"Impossible";
        return 0;
    }
    while(s!=t){
        if(cnt > s.size()){
            cout<<"Impossible";
            return 0;
        }
        rotate(t.begin(), t.begin()+1, t.end());
        cnt++;
        
    }
    cout<<cnt;
    return 0;

}