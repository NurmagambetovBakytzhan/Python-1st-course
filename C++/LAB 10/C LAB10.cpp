#include <iostream>
#include <stack>
#include <cmath>
using namespace std;
bool isSq(long double x)
{
    if (x >= 0) {
        long long sr = sqrt(x);
        return (sr * sr == x);
    }
    return false;
}

int main(){
    string s;
    cin>>s;
    string x = "";
    stack<char> st;
    for(int i = 0 ; i < s.size(); i++){
        st.push(s[i]);
        if(st.size() <= 1){
            continue;
        }
        else{
            char m;
            m = st.top();
            st.pop();
            x = x + st.top() + m;
            if(x.size() == 2 && isSq(stoi(x))){
                x.clear();
                st.pop();
            }
            else if(x.size() == 2 && !isSq(stoi(x))){
                st.push(m);
                x.clear();
            }
        }

    }
    if(st.empty()){
        cout<<"Stack is empty";
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }

    return 0;
}