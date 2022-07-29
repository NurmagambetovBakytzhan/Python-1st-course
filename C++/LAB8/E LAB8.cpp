#include <vector>
#include <iostream>
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
    int l,r;
    cin>>l>>r;
    for(int i = 0; i < n ; i++){
        if(i>=l && i<=r){
            continue;
        }
        cout<<v[i]<<" ";
    }
    return 0;

}