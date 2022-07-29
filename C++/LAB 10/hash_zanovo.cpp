#include <iostream>
#include <stack>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    stack<char> st;
    for(int i = 0 ; i < n ;i++){
        int x;
        int k;
        cin>>x;
        if(st.empty()){
            k = x + 97;
            st.push((char) k);

        }
        else{
            k = ((x - st.top()) / pow(2,i)+97);
            st.push((char) k);
        }
    }
}