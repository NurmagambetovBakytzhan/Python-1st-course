#include <iostream>
#include <cmath>
#include <vector>
#include <stack>
using namespace std;

char backhash(int a, int ind){
    return (a / pow(2,ind)+97);
}

int main(){
    int n;
    cin>>n;
    stack<int> st;
    string answer = "";
    for(int i = 0; i < n ; i++){
        int x;
        cin>>x;
        int temp = x;
        if(!st.empty()){
            temp -= st.top();
        }
        st.push(x);
        answer += backhash(temp, i);
    }
    cout<<answer;



    return 0;
}