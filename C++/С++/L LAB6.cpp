#include <iostream>
using namespace std;
void read(int a[],int n){
    for (int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
}
bool check(int a[],int n, int k){
    int cnt = 0;
    for ( int i = 0 ; i < n ; i++){
        if(a[i]>='0' && a[i] <= '9'){
            cnt++;
        }
    }
    if (cnt>=k){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n,k;

    cin>>n>>k;
    int a[n];
    read(a,n);
    check(a,n,k);
    if ( check ){
        cout<<"Valid";
    }
    else{
        cout<<"Not valid";
    }
    return 0;
}