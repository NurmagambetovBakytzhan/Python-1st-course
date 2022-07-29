#include <iostream>
using namespace std;
bool div(float x){
    if(x == 1){
        return true;
    }
    
    if ( x == 0){
        return false;
    }
    return div(x/2);
}
int main(){
    float x;
    cin>>x;
    if(div(x)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}