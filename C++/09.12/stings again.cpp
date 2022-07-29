#include <iostream>
#include <vector>
#include <map>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<string> v;
    string k = "";
    for(int i = 0 ; i < s.size(); i++){
        
        if(s[i]==','){
            v.push_back(k);
            k.clear();
            continue;
        }
        k= k + s[i];
    }
    map<char, int> m;
    for(int i = 0 ; i < v.size() ; i++){
        
    }
}