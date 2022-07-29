#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;
int main(){
    int n;
    int cnt = 0;
    cin>>n;
    vector<int> v;
    set <int> s;
    for(int i = 0 ; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for(int i = 0 ; i < v.size() ; i++){
        for(int j = i+1 ; j < v.size(); j++){
            if( v[i] == v[j]){
                s.insert(v[j]);
            }
            else{
                continue;
            }
        }
    }
    cout<<s.size();
    return 0;
}