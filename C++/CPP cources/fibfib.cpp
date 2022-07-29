#include <iostream>
using namespace std;//input: integer n// output: numbers before n 
int fibb(int n){   //                        in fibonacci sequence
    if(n < 2){
        return n;
    }
    return fibb(n-2) + fibb(n-1);
}


int main(){
    int n;
    cin>>n;
    cout<<fibb(n)<<" ";
}