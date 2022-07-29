#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main(){
    vector <char> v;
    stack <int> st;
    int n;
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        char k;
        cin>>k;
        v.push_back(k);
    }
    int temp;
    int temp2;
    int temp3;
    for(auto i : v){
        if(i >= '0' && i<='9'){
            st.push(i - 48);
        }
        if(i == 'C'){
            st.pop();
        }
        if(i=='D'){
            st.push((st.top()) * 2);
        }
        if(i == '+'){
            temp = st.top();
            st.pop();
            temp2 = st.top();
            st.pop();
            temp3 = temp + temp2;
            st.push(temp);
            st.push(temp2);
            st.push(temp3);
        }
    }
    int sum= 0;
    while(!st.empty()){
        sum+=st.top();
        st.pop();
    }
    cout<<sum;
    return 0;
}