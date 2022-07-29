#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,k;
    int cnt=0;
    cin>>n>>k;
    vector <int> v;
    for(int i = 0 ; i < n; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i = 0 ; i < v.size(); i++){
        if(v[i] == k){
            cnt++;
        }

    }
    cout<<cnt;
    return 0;
}