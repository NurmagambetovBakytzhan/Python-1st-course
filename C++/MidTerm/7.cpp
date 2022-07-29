#include <iostream>
using namespace std;
int main(){
    int a,n,b,k;
    cin>>a>>n>>b>>k;
    string as = "00000000";
    string bs = "00000000";
    for(int i = as.size()-1 ; i >=0; i--){
        as[i]=char(a%2 + '0');
        a/=2;
    }

    for(int i = bs.size()-1 ; i >=0; i--){
        bs[i]=char(b%2 + '0');
        b/=2;
    }
    cout << ((as[n - 1] == bs[k - 1]) ? "Thunderclap and Flash!" : "Thunder Breathing... First form...");
    
    return 0;
}