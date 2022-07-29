#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> st;
    string s;
    cin>>s;
    for(int i = 0; i < n ; i++){
        char c;
        cin>>c;
        if(c == '+'){
            int second = st.top();
            st.pop();
            int first = st.top();
            st.pop();
            answer = first + second;
            st.push(answer);
        }
        else if(c=='*'){
            int second = st.top();
            st.pop();
            int first = st.top();
            st.pop();
            answer = first * second;
            st.push(answer);
        }
        else if{
            st.push(int(c-48));
        }
        
    }
    return 0;
}