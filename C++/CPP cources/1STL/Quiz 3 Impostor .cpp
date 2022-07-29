#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    string t;
    set<string> s;
    unordered_set <string> us;

    for(int i=0; i<n; i++){
        cin >> t;
        if(s.find(t)==s.end()){
            s.insert(t);
        }else{
            us.insert(t);
        }
    }

    for(auto i: us){
        if(us==""){
            cout<<"Empty";
        }
        cout << i << endl;

    }

    return 0;
} 