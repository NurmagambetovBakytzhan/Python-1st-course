#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int t, s[n];
    for(int i = 0; i <= n; i++){
        s[i] = 0;
    }

    for(int i = 0; i <= n; i++){
        t = i;
        while(t > 0){
            s[i] += t % 2;
            t /= 2;
        }   
    }

    for(int i = 0; i < n; i++){
        cout << s[i] << ',';
    } 
    cout << s[n];
    return 0;
}