#include <iostream>
using namespace std;
int cnt = 0;
int ev(string s, int i){
    
    if(s[i]%2==0){
        cnt++;
        
    }
    if(i==s.size()){
        return cnt - 1;
    }
    return ev(s , i+1);
}
int main(){
    string s;
    cin>>s;
    int i;
    cout<<ev(s,i);
    return 0;
}