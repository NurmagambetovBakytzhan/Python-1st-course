//Bad WI-FI connection
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    int k;
    vector<string> ss;
    vector<int> kk;

    for(int i = 0; i < n; i++){
        cin >> s >> k;
        ss.push_back(s);
        kk.push_back(k);
    }

    sort(ss.begin(), ss.end());
    sort(kk.begin(), kk.end());
    for(int i = 0; i < ss.size(); i++){
        cout << ss[i] << " " << kk[i] << endl;
    }
}