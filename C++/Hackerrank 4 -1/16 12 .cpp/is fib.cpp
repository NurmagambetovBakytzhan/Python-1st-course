#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long a[100000];
    a[0] = 0;
    a[1] = 1;
    for(int i = 2 ; i < 100000 ; i++){
        a[i] = a[i-1] + a[i-2] ;
        if(a[i] == n){
            cout<<"Yes";
            break;

        }
        if(a[i] > n){
            cout<<"No";
            break;
        }
    }
    return 0;

}