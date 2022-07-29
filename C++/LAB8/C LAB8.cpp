#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    
    int x;
    int n;
    cin>>n;
    vector <int> v;
    for(int i = 0 ; i < n ; i++){
        cin>>x;
        v.push_back(x);
    }
    int l, r;
    cin>>l>>r;
    reverse(v.begin()+l , v.begin()+1+r);
    for(int i = 0 ; i < n ; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}