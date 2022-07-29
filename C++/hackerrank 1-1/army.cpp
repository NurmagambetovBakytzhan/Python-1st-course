#include <iostream>
using namespace std;
int main(){
    long long n;
    cin>>n;
    if(n<= 0){
        cout<<"Ne chetko";
        return 0;
    }
    int a[n][n];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j< n ; j++){
            cout<<2*i+1<<" ";
        }
        cout<<endl;
    }
    return 0;
}