#include <iostream>
#include <map>
using namespace std;

int main(){

    string s; cin >> s;
    map<char, int> mp;

    for(int i = 0; i < s.size(); i++){
        if(!mp[s[i]]) cout << s[i];
        mp[s[i]]++;
    }
}