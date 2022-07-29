#include <iostream>
using namespace std;

int main(){

    string s; cin >> s;

    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < i + 1; j++)
            cout << s[j];
        cout << endl;
    }

    for(int i = 0; i < s.size(); i++){
        for(int j = 0; j < s.size() - i - 1; j++)
            cout << s[j];
        cout << endl;
    }

}