#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;
    string ans = "";

    for(int i = 0; i < n; i++){
        string s; cin >> s;
        ans += s;
    }

    cout << "Lower case: ";
    for(char c = 'a'; c <= 'z'; c++){
        bool find = false;
        for(int i = 0; i < ans.size(); i++){
            if(ans[i] == c){
                find = true;
                break;
            }
        }
        if(!find) cout << c << " ";
    }

    cout << "\nUpper case: ";
    for(char c = 'A'; c <= 'Z'; c++){
        bool find = false;
        for(int i = 0; i < ans.size(); i++){
            if(ans[i] == c){
                find = true;
                break;
            }
        }
        if(!find) cout << c << " ";
    }

    cout << "\nNumbers: ";
    for(char c = '0'; c <= '9'; c++){
        bool find = false;
        for(int i = 0; i < ans.size(); i++){
            if(ans[i] == c){
                find = true;
                break;
            }
        }
        if(!find) cout << c << " ";
    }

}