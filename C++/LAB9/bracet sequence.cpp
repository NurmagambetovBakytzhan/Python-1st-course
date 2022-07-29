#include <iostream> 
#include <stack>
using namespace std;

bool brackets(string s){
    stack <char> ss;
    for(int i = 0 ; i < s.size(); i++){
        if(s[i]=='('){
            ss.push(s[i]);
        }
        else{
            if(ss.empty()){
                return false;
            }
            else{
                ss.pop();
            }
        }
    }
    return ss.empty();
}

int main(){

    string s;
    cin>>s;
    brackets(s) ? cout<<"YES" : cout<<"NO";
    return 0;
}