#include <iostream>
#include <cmath>
using namespace std;
bool tprime(int n){
    int cnt = 0;
    for(int i = 2; i < n/2 +1; i++ ){
        if(n % i == 0){
            cnt++;
        }
    }
    if(cnt == 1) return true;
    return false;
}
int main(){
    int n;
    cin>>n;
    int k;
    while(n--){
        cin>>k;
        if(tprime(k)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}