#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main(){
    vector<string> cr;
    vector<string> sp;
    int n,k;
    cin>>n>>k;
    for(int i = 0 ; i< n; i++){
        string x;
        cin>>x;
        cr.push_back(x);
    }
    for(int i = 0 ; i < k; i++){
        string s;
        cin>>s;
        sp.push_back(s);
    }
    int cnt = 0;
    string L;

    for(auto i : sp){
        for(auto j : cr){
            for(int e = 0 ; e < i.size(); e++){
                L = i.substr(0 , i.size() - e);
                if(j == L){
                    cnt++;
                }
                else{
                    continue;
                }
                
            }
        }
    }
    if(cnt != 0){
        cout<<"Emae, balin"<<endl<<cnt*1000;
    }
    else{
        cout<<"Rakhmet, Yerla!Krasavchik!@erla1302";
    }
   return 0;
}