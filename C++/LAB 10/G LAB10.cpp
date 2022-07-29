#include <iostream>
#include <map>
using namespace std;
int main(){
    int n;
    cin>>n;
    map< int, pair<string,string>> m;
    for(int i = 0; i < n ; i++){
            string s, x;
            int a,b;
            cin>>s>>a>>x>>b;
            pair<string , string> temp = make_pair(s,x);
            
            m.insert(make_pair( a+b , temp));
    }
        for(auto i : m){
                cout<<i.second.first<<" "<<"and"<<" "<<i.second.second<<" "<<i.first<<endl;
        }
    
}
