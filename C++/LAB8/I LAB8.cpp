#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    vector <int> v;
    int x;
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        cin>>x;
        v.push_back(x);
    }
    int k;
    cin>>k;
    for(int i = 0 ; i < n ; i++){
        if(v[i]==k){
            cout<<"Yes";
            return 0;
        }
        else{
            continue;
        }
    }
    cout<<"No";
    return 0;
    
}