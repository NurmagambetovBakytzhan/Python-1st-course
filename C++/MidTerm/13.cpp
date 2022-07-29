#include <iostream> 
using namespace std;
bool isprime(int x){
    int cnt = 0;
    int n =2;
    while(n <= x){
        if(x % n == 0){
            cnt++;
        }
        n++;
    }
    if(cnt==1){
        return true;
    }
    return false;
}
int main(){
    int n,f;
    cin>>n>>f;
    if(n < 500 && isprime(n) && f%2==0){
        cout<<"Good job!";
    }
    else{
        cout<<"Try next time!";
    }
    return 0;
}