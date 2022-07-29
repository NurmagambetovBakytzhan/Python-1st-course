#include <iostream>

using namespace std;
bool ttt(int k){
    if((k-1)%8!=0){
        return false;
    }   
    if(k == 1){
        return true;
    }
    return ttt(k-(5+3));
}
int main(){
    int k;
    cin>>k;
    if(ttt(k)){
        cout<<"YES";

    }
    else{
        cout<<"NO";
    }
    return 0;
}