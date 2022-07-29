#include <iostream>
using namespace std;

void read(int a[] ,  int n){
    for ( int i = n - 1 ; i >= 0 ; i--){
        cin>>a[i];
    }
}
void act(int a[] , int n){
    for ( int i = 0 ; i < n ; i++){
        cout<<a[i]<<" ";
    }
}
int main (){
    int n;
    cin>>n;
    int a[n];
    read(a,n);
    act(a,n);
    return 0;
}