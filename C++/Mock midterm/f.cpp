#include <iostream>
#include <stack>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    string x = "";
    for(int j = 0 ; j <= n; j++){
        getline(cin, s);
        for(int i = 0 ; i <s.size() ; i++){
            if(s[i]=='>'||s[i]=='{'||s[i]=='}'||s[i]=='('||s[i]==')'|| s[i]=='<'|| s[i]=='['|| s[i]==']'){
                x = x + s[i];
            }
        }
    }
    stack<char> st;
    bool flag = true;
    for(int i = 0 ; i < x.size(); i++){
        if(x[i] == '<'|| x[i] == '['|| x[i] == '('||x[i] == '{'){
            st.push(x[i]);
        }
        else{
            if(st.empty()){
                flag = false;
                break;
            }
            else{
                if(x[i] == ')' && st.top()!= '('){
                    flag = false;
                }
                if(x[i] == '}' && st.top()!= '{'){
                    flag = false;
                }
                if(x[i] == ']' && st.top()!= '['){
                    flag = false;
                }
                if(x[i] == '>' && st.top()!= '<'){
                    flag = false;
                }
                st.pop();
            }
        }
    }
    if(flag == false || !st.empty()){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;

}