#include <iostream>
#include <stack>

using namespace std;

int main(){
    int n;
    string str="";
    cin>>n;
    string ss;
    for(int i=0;i<=n;i++){
        getline(cin, ss);
        for(int j=0;j<ss.size();j++){
            if(ss[j]=='{' || ss[j]=='}' || ss[j]=='(' || ss[j]==')' || ss[j]=='[' || ss[j]==']' || ss[j]=='<' || ss[j]=='>' ){
                str=str+ss[j];
            }
        }
    }
    cout<<str;
    // return 0;
    stack<char> st;

    bool result = true;

    for(int i = 0; i < str.size(); ++i){
        if(str[i] == '{' || str[i] == '[' || str[i] == '(' || str[i] == '<'){
            st.push(str[i]);
        }else{
            if(st.empty()){
                result = false;
                break;
            }else{
                if(str[i] == ')' && st.top() != '('){
                    result = false;
                    break;
                }
                else if(str[i] == ']' && st.top() != '['){
                    result = false;
                    break;
                }else if(str[i] == '}' && st.top() != '{'){
                    result = false;
                    break;
                }else if(str[i] == '>' && st.top() != '<'){
                    result = false;
                    break;
                }
                st.pop();
            }
        }
    }

    if(result == false || !st.empty()){
        cout << "NO";
    }else{
        cout << "YES";
    }
    */

    return 0;
}