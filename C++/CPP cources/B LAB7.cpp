#include <iostream>
using namespace std;
string bin(int n){
    string s="";
    if(n == 0){
        return s;
    }
    
    s= bin(n/2) + char(n%2+48);
 
}
int main(){
    int a;// 
    cin>>a;
    cout<<bin(a);
    
    return 0;
}