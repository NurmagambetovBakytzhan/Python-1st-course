#include <iostream>
#include <stack>
using namespace std;

int main(){

    stack<int> st;

    while(true){
        string act; cin >> act;

        if(act == "push"){
            int n; cin >> n;
            st.push(n);
            cout << "ok\n";
        }

        if(act == "pop"){
            if(!st.size()) cout << "error\n";
            else{
                cout << st.top() << endl;
                st.pop();
            }
        }

        if(act == "back"){
            if(!st.size()) cout << "error\n";
            else cout << st.top() << endl;
        }

        if(act == "size")
            cout << st.size() << endl;
        
        if(act == "clear"){
            while(!st.empty()) st.pop();
            cout << "ok\n";
        }

        if(act == "exit"){
            cout << "bye";
            break;
        }
    }
}