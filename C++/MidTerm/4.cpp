#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    int x=0;
    for(int i = 0 ; i < n  ; i++){
        x = x^a[i];
    }
    for(int i = 0 ; i < n  ; i++){
        if(pow(2,i) == x){
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