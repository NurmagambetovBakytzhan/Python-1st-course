#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    string s, sub; cin >> s >> sub;
    sort(s.begin(), s.end());
    sort(sub.begin(), sub.end());

    cout << (s == sub ? "YES" : "NO");
}