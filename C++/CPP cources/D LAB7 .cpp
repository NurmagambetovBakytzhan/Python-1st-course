#include <iostream>
using namespace std;
int cnt = 0;
int sum(string x , int i){
    if(i ==x.size()){
    return cnt;
    }
    
    cnt+=x[i]-48;

    return sum(x , i+1);
}
int main(){
    string s;
    
    cin>>s;

    cout<<sum(s,0);
    return 0;
}