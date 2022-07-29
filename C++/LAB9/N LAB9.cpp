#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector <int> v;
    int n;
    int cnt = 0;
    cin>>n;
    for(int i = 1 ; i <= n ; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int m;
    for(int i = 0; i < n-1; i++){
        for(int j = i+1 ; j < n; j++){
            m = v[i] ^ v[j];
            if(find(v.begin(), v.end(), m) != v.end()){
                cnt++;
            }
        }
    }
    cout<<cnt;
    return 0;
}
