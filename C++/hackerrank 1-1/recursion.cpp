#include <iostream>
using namespace std;
string x = "";
string strr(string s, int i){
    
    if(i < 0){
        return x;
    }
    if(s[i] =='('){
        s[i]=')';
    }
    x += s[i];
    return strr(s, i-1);

}



int main(){
    string s;
    cin>>s;
    cout<<s + strr(s, s.size() - 1);
    return 0;
}