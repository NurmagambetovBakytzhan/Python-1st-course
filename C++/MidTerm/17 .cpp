#include <iostream>
using namespace std;
int main(){
    int n,m,b;
    cin>>n>>m>>b;
    if( b*100 / (n+m) >= 10){
        cout<<"Boris, you are punished!";
    }
    if(b*100 / (n+m) < 10){
        cout<<"You are my sweet baby";
    }
    return 0;
}