#include <iostream>
#include <stack>
using namespace std;
int main(){

    string s;
    stack<long long> st;
    while(cin>>s){
        if(s=="push"){
            long long p;
            cin>>p;
            st.push(p);
            cout<<"ok"<<endl;
        }
        if(s=="pop"){
            if(st.empty()){
                cout<<"error"<<endl;
            }
            else{
                cout<<st.top();
                st.pop();
            }

        }
        if(s == "back"){
            if(st.empty()){
                cout<<"error"<<endl;
            }
            else{
                cout<<st.top();
            }
        }
        if(s=="size"){
            cout<<st.size()<<endl;
        }
        if(s=="clear"){
            while(!st.empty()){
                st.pop();
            }
            cout<<"ok"<<endl;
        }
        if(s=="exit"){
            cout<<"bye"<<endl;
            break;
        }

    }
    return 0;
}