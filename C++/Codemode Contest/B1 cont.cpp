#include <iostream>
#include <stack>
using namespace std;
bool seq(string x){
    stack<char> st;
    for(int i = 0 ; i < x.size();i++){
        if(x[i] == '{'|| x[i] == '('|| x[i] == '['){
            st.push(x[i]);
        }
        else{
            if(st.empty()){
                return false;
            }
            else{
                st.pop();
            }
        }
    }
    return st.empty();
}
int main(){
    string s;
    cin>>s;
    if(seq(s)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
    
}