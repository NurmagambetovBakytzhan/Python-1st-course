#include <iostream>
#include <set>
using namespace std;

int main(){

    string s;
    while(cin >> s){
        set<char> st;
        for(int i = 0; i < s.size(); i++)
            st.insert(s[i]);
        
        if(st.size() == s.size()) cout << s << endl;
    }

}