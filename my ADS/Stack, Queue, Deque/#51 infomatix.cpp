#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack <char> st;
    string s;
    cin>>s;
    for(auto i : s){
        if(!st.empty()){
            if(st.top() == '{' && i == '}' || st.top() == '(' && i == ')' || st.top() == '[' && i == ']' || st.top() == '<' && i == '>') {
                st.pop();
                continue;
            }
        }
        st.push(i);
    }
    if(st.empty()){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}