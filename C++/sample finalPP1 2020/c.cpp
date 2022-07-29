#include <iostream>
#include <map>
using namespace std;
int main(){
    string s;
    cin>>s;
    map<char, int> m;
    for(int i = 0 ; i< s.size(); i++){
        m[s[i]]++;
    }
    for(auto i : m ){
        if(i.second == 0){
            continue;
        }
        else{
            cout<<i.first<<" "<<i.second<<endl;
        }
    }
}