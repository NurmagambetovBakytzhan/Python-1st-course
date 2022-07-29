#include <bits/stdc++.h>
using namespace std;

void spir(int n, int x, int i = 1){
    if(i > x) return;
    for(int j = 1; j <= x; j++){
        cout << max(abs(i - n), abs(j - n)) + 1;
    }
    cout << '\n';
    spir(n, x, i + 1);
}

int main(){
    int n; cin >> n;
    spir(n, 2 * n - 1);
}