#include <bits/stdc++.h>

using namespace std;

char cc(char c){
    return tolower(c);
}
string ff(string s){
    string gg="";
    for(int i=0;i<s.size();i++){
        gg=gg+cc(s[i]);
    }
    return gg;
}
set <char> ern(string s){
    set<char> su;
    for(int i=0;i<s.size();i++){
        su.insert(s[i]);
    }
    return su;
}
set <char> vvv(set<char> s1,set<char> s2){
    set <char> zh;
    set<char> :: iterator it1,it2;
    for(it1=s1.begin();it1!=s1.end();it1++){
        for(it2=s2.begin();it2!=s2.end();it2++){
            if((*it1)==(*it2));
            zh.insert((*it1));
        }
    }
    return zh;
}
int main(){
    int n;
    cin>>n;
    string s;
    vector<string> v;
    vector<set<char> > vv;
    for(int i=0;i<n;i++){
        cin>>s;
        v.push_back(ff(s));
        vv.push_back(ern(ff(s)));
    }
    set<char> :: iterator it;
    map <char,int> m;
    for(int i=0;i<vv.size();i++){
        for(it=vv[i].begin();it!=vv[i].end();it++){
            m[(*it)]++;
        }
    }
    vector<char> ver;
    map <char,int> :: iterator it1;
    for(it1=m.begin();it1!=m.end();it1++){
        if((*it1).second==n) ver.push_back((*it1).first);
    }
    if(ver.size()==0){
        cout<<"No common characters";
        return 0;
    }
    for(int i=0;i<ver.size();i++){
        cout<<ver[i]<<" ";
    }
    return 0;
}