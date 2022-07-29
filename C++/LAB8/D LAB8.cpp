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
    int e;
    cin>>e;
    for(int i = 0 ; i < n ; i++){
        if (i==e){
            continue;
        }
        cout<<v[i]<<" ";
    }
    return 0;
}