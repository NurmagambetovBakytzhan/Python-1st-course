#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;

int main(){
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); i++){
        s[i] = tolower(s[i]);
    }

    set<char> t;
    for(int i = 0; i < s.size(); i++){
        t.insert(s[i]);
    }
    cout << t.size()<<endl;

    set<char> :: iterator it;
    for(it = t.begin(); it != t.end(); it++){
        cout << *it << " ";
    }
    return 0;
}