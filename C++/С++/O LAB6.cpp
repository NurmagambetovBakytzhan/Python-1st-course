#include <iostream>
using namespace std;
bool luck(int n){
    int l = n%10;
    int k = 0;
    
    while(n!=0){
        k += n%10;
        n/=10;
    }
    if(k%l==0){
        return true;
    }
    else {
        return false;
    }
}
int main(){
    int n;
    cin>>n;
    if(luck(n)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}