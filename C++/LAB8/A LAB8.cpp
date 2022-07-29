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
    sort(v.begin(), v.end() );
    for(int i = 0; i < v.size() ; i++){
        cout<<v[i]<<" ";
    }
    return 0;
}