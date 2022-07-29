#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    if(s == t){
        cout << 0;
        return 0;
    }
    string S = s, T = t;
    sort(T.begin(), T.end());
    sort(S.begin(), S.end());
    if(S != T) cout << "Shit happens";
    else{
        int res = 0;
        while(s != t){
            char x = t[0];
            t.erase(t.begin()+0);
            t += x;
            res++;
        }
        cout << res;
    } 
}