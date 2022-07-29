#include <iostream>
#include <string>
using namespace std;
int max = 0;
int larg(string x, int i){
    
    if(i == x.size()-1){
        return x[x.size()-1];
    }
    if(x[i] >= max){
        max = x[i]-48;
    }
    else{
        return larg(x, i+1);

    }
}
int main(){
    string s;
    cin>>s;
    cout<<larg(s,0);
    return 0;
}