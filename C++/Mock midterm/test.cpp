#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;
    string t = "";

    for(int i = 0; i < n; i++){
        string s; cin >> s;
        t += s;
    }

    cout << "Lower case: ";
    for(char c = 'a'; c <= 'z'; c++){
        int cnt = 0;
        for(int i = 0; i < t.size(); i++)
            if(c == t[i]) cnt++;
        
        if(cnt == 0) cout << c << " ";
    }

    cout << "\nUpper case: ";
    for(char c = 'A'; c <= 'Z'; c++){
        int cnt = 0;
        for(int i = 0; i < t.size(); i++)
            if(c == t[i]) cnt++;
        
        if(cnt == 0) cout << c << " ";
    }

    cout << "\nNumbers: ";
    for(char c = '0'; c <= '9'; c++){
        bool find = false;
        for(int i = 0; i < t.size(); i++){
            if(c == t[i]){
                find = true;
                break;
            }
        }
        if(!find) cout << c << " ";
    }

}