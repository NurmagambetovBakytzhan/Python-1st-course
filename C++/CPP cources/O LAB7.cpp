#include <bits/stdc++.h>

using namespace std;

int i = 0;
string s;
int tokar(int n, int k, string s, int i){
        if n % k >= 10{
    s = ((n % k) + 55) + s;
        }

    else{
    s = ((n % k) + 48) + s;
    }
}

int main(){
    int n, k;
    cin >> n >> k;
    
    string t;
    t = tokar(n, k, s, i);
    for(int i = 0; i < t.size(); i++){
       if(t[i] >= 10){
           t[i] = t[i] + 55;
       }
    }

    for(int i = 0; i < t.size(); i++){
       cout << t;
    }

}