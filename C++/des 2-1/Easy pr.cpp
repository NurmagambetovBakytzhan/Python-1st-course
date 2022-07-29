#include <iostream>
#include <cmath>
using namespace std;
bool issq(double a){
    if(sqrt(a) * sqrt(a) == a){
        return true;
    }
    return false;
}
int k;
int easy(int n){
    if(issq(n)){
        return easy(sqrt(n));
    }
    else if(n%2==0){
        return easy(n / 2);
    }
    else if(n %3 == 0){
        return easy(n / 3);
    }
    if(n == 0){
        return -1;
    }
    if(n==1){
        return 1;
    }
    if(!issq(n) && n%2!=0 && n %3 != 0 || n < 1){
        return -1;
    }
    
}
int main(){
    int n;
    cin>>n;
    cout<<easy(n)<<endl;
    
    return 0;
}