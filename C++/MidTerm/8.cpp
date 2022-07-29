#include <iostream>
using namespace std;
int cntbin(int x){
    if(x==0){
        return 0;
    }
    else{
        return cntbin(x/2) + x%2;
    }
}
int main(){
    int n;
    cin>>n;
    int a[n+1];
    for(int i = 0 ; i<=n; i++){
        cout<<cntbin(i);
    }

    return 0;
}