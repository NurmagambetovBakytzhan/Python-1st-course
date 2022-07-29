#include <iostream>
#include <cmath>
using namespace std;
string tobin(int x){
    if(x==0){
        return "";
    }
    else{
        return tobin(x/2)+char((x%2)+48);
    }
}
void addzeros(string &a){
    while(a.size()!=8){
        a = '0'+a;
    }
}
void swapbit(string &a, string &b, int n){
    int temp = a[a.size()-1 - n];
    a[a.size()-1-n] = b[b.size()-1-n];
    b[b.size()-1-n] = temp;
}
int todec(string x){
    int sum = 0;
    for(int i = 0 ; i < x.size(); i++){
        sum += int(x[i] - '0') * pow(2 , x.size()-1-i);
    }
    return sum;
}
int main(){
    int n, first, second;
    cin>>n>>first>>second;
    string s1 = tobin(first);
    string s2 = tobin(second);
    addzeros(s1);
    addzeros(s2);
    swapbit(s1, s2, n);
    if(todec(s1) > todec(s2)){
        cout<<"Good deal for the second number";
    }
    if(todec(s1) < todec(s2)){
        cout<<"Good deal for the first number";
    }
    if(todec(s1) == todec(s2)){
        cout<<"Nothing has changed";
    }
    return 0;
}