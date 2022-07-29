#include <iostream>
using namespace std;
int degtwo(int x){
    if (x==0) return 1;
    else return degtwo(x-1)*2;
}
int main(){
    int a;
    cin>>a;
    cout<<degtwo(a);
    
    return 0;
}
/*
    int foo(a){
        foo(a+1);
    }
    int main(){
        foo();
    }    
    */
    