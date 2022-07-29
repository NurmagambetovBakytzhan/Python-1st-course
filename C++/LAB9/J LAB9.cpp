#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    string t="";
    cin>>n;
    map<string,int> b;
    map<string,int> m;
    while(n--){
        string s;
        int k;
        cin>>s>>k;
        m[s]+=k;
    }
    // map<string,int> :: iterator i;
    // map<string,int> :: iterator j;
    
    for(auto i : m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;
}