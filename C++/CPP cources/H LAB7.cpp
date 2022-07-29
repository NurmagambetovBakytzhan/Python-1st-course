#include <iostream>
using namespace std;
int fib(int a){
    if (a==1) return 0;
    if (a==2) return 1;
    return fib(a-1) + fib(a-2);
}
int main(){
    int x;
    cin>>x;
    cout<<fib(x);
    return 0;
}