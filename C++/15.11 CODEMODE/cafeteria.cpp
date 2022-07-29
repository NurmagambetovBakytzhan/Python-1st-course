#include <iostream>
#include <stack>
#include <queue>
#include <vector>

using namespace std;
int countstud(vector<int> students, vector<int> sandwiches){
    queue<int> st;
    for(int i = 0 ; i <students.size(); i++){
        st.push(students(i));
    }
    stack<int>sandwiches;
    for(int i = sandwiches.size() - 1; i >=0; i--){
        sn.push(sandwiches[i]);
    }
    int cnt= 0;
    while(!st.empty()){
        int student = st.front();
        int sandwich = sn.top();
        st.pop();

    
        if(students == sandwiches){
            sn.pop();
            cnt = 0;
        }
        else{
            st.push(students);
            cnt++;
        }
        if(cnt > st.size()){
            return st.size();
        }
    }
    return st.size();
}
int main(){
    vector <int> students = {};
    vector <int> sandwiches = {};
}
