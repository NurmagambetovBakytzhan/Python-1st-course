#include <iostream>
using namespace std;
void upp(char n){
    if(int(n)>='a' && int(n)<='z'){
        cout<<char(int(n)-32);
    }
    else{
        cout<<n;
    }
}
int main(){
    char n;
    cin>>n;
    upp(n);
    return 0;
}