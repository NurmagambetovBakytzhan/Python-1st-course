#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int main(){
    int n;
    cin>>n;
    int cnt = 0;
    vector<string> v;
    set<string> set;
    for(int i = 0 ; i < n ;i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    // sort(v.begin(), v.end());
    for(int i = 0 ; i < v.size(); i++){
        for(int j = i+1; j < v.size(); j++){
            if (v[i]==v[j]){
                cnt++;
            }
            if(cnt == 3){
                set.insert(v[i]);
                cnt = 0;
            }
        }
    }
    cout<<set.size();
    return 0;
}