#include <iostream>
using namespace std;

bool PowerOfTwo(int x){
    for(int i = 1; i <= x; i *= 2)
        if(i == x) return true;
    return false;
}

int main(){

    int n; cin >> n;
    string temp; cin >> temp;
    for(int i = 0; i < n; i++){
        string s, word = ""; getline(cin, s);
        if(i == 0) word += temp;
        for(int j = 0; j < s.size(); j++){
            if(s[j] == ' ' or j == s.size() - 1){
                if(j == s.size() - 1 and toupper(s[j]) >= 'A' and toupper(s[j]) <= 'Z') word += s[j];
                if(PowerOfTwo(word.size())) cout << "H ";
                else cout << "C ";
                word = "";
            }
            else if(toupper(s[j]) >= 'A' and toupper(s[j]) <= 'Z') word += s[j];
        }
        cout << endl;
    }
}