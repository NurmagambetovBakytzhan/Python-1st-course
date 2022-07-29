#include <iostream>
#include <vector>
using namespace std;
bool isPrime(int n){
    int k=2;
    int cnt = 0;
    while(k<=n){
        if (n%k==0){
            cnt++;
        }
        k++;
    }
    if(cnt==1){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n; 
    int x;
    int cnt = 0;
    cin>>n;
    vector <int> v;
    for(int i = 0 ; i < n ; i++){
        cin>>x;
        v.push_back(x);
    }
    int t;
    cin>>t;
    for(int i = 0 ; i < n ; i ++){
        if(v[i] >= t && isPrime(v[i])){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;

}