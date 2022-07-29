#include <iostream>
#include <map>
using namespace std;

int main(){

    map<char, int> mp;
    map<char, int> :: iterator it;
    string s;

    for(char c = 'a'; c <= 'z'; c++)
        mp[c] = 0;

    while(cin >> s)
        for(int i = 0; i < s.size(); i++)
            if(tolower(s[i]) >= 'a' and tolower(s[i]) <= 'z')
                mp[tolower(s[i])]++;
 
    for(it = mp.begin(); it != mp.end(); it++)
        cout << it->first << ": " <<  it->second << endl;

}