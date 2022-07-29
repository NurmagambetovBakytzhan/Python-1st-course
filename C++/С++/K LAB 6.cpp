#include <iostream>
using namespace std;

void read(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}

void act(int a[] , int n){
    int sum = 0 ;
    for ( int i = 0 ; i < n ; i++){
        sum+=a[i];
    }

    cout<<sum;
}


int main(){
    int n;
    int a[n];
    cin>>n;
    read(a,n);
    int res = act(int a ,int n); 
    cout<<res;
    return 0;
}