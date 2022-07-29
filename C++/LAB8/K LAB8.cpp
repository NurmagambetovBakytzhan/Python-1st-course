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
    int t;
    cin>>t;
    int sum = 0;
    sort(v.begin(), v.end());
    for(int i = 0 ; i < n ; i++){
        if(i>=(n-t)){
            sum+=v[i];
        }
        else{
            continue;
        }
        
    }
    cout<<sum;
    return 0;
}