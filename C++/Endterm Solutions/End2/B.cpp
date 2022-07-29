#include <iostream>
#include <stack>
using namespace std;

int main(){

    string inp;
    stack<int> st;
    
    while(cin >> inp){
        if(inp == "push"){
            int n; cin >> n;
            st.push(n);
            cout << "ok\n";
        }

        if(inp == "pop"){
            if(st.empty()) cout << "error\n";
            else{
                cout << st.top() << endl;
                st.pop();
            }
        }

        if(inp == "back"){
            if(st.empty()) cout << "error\n";
            else cout << st.top() << endl;
        }

        if(inp == "size") cout << st.size() << endl;
        
        if(inp == "clear"){
            while(!st.empty()) st.pop();
            cout << "ok\n";
        }

        if(inp == "exit"){
            cout << "bye";
            return 0;
        }
    }

}