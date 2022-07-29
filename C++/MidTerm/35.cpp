#include <iostream>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i = 0 ; i  < n ;i++){
        cin>>a[i];
    }
    for(int i = 0 ; i < n-1 ; i++){
        if(a[i+1]>=a[i]){
            k-=1;
        }
        else if(a[i+1]<a[i]){
            k = k *2;
        }
    }
    cout<<k;
    
    return 0;
}