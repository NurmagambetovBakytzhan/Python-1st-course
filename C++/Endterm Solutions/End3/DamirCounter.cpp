#include <iostream>
#include <map>
using namespace std;

int main(){

    map<string, int> mp;
    map<string, int> :: iterator it;
    string s;
    while(cin >> s){
        string t = "";
        for(int i = 0; i < s.size(); i++)
            if('a' <= tolower(s[i]) and tolower(s[i]) <= 'z') t += tolower(s[i]);
        mp[t]++;
    }

    for(it = mp.begin(); it != mp.end(); it++)
        if(it->second >= 2) cout << it->first << endl;
}