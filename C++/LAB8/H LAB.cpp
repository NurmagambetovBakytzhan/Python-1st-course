#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    int x;
    cin>>n;
    vector <int> v;
    for(int i = 0 ; i < n ; i++){
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int t;
    cin>>t;
    for(int i = 0 ; i<v.size(); i++){
        if(i>= t){
            continue;
        }
        cout<<v[i]<<" ";
    }
    return 0;
}