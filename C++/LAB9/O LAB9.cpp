#include <iostream>
#include <map>
using namespace std;
int main(){
    freopen("input.txt","r", stdin);
    int n,k;
    map<string,string> m;
    map<string,string> M;
    cin>>n;
    while(n--){
        string log,pass;
        cin>>log>>pass;
        m(make_pair(log,pass));

    }
    cin>>k;
    while(k--){
        string mylog,mypass;
        cin>>mylog>>mypass;
        M.make_pair(mylog,mypass);

    }
    for(auto i : m){
        for(auto it : M){
            if(i.first==it.first && i.second==it.second){
                cout<<i.first<<"correct password"<<endl;
            }
            if(i.first==it.first && i.second!=it.second){
                cout<<i.first<<"password error"<<endl;
            }
            if(i.first!=it.first && i.second==it.second){
                cout<<i.first<<"login error"<<endl;
            }
        }
    }
    return 0;
}