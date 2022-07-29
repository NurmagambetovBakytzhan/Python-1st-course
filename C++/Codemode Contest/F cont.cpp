#include <iostream>
#include <queue>
using namespace std;
int main(){
    int n,k;
    cin>>n;
    int cnt = 0;
    queue<string> q;
    queue<string> o;
    while(n--){
        string x;
        cin>>x;
        q.push(x);
    }   
    cin>>k;
    while(k--){
        string s;
        cin>>s;
        o.push(s);
    }
    string temp;
    while(!o.empty()){
        temp = q.front();
        if(o.front() == q.front()){
            o.pop();
            q.pop();
            cnt++;
        }
        else{
            q.push(temp);
            q.pop();
            cnt++;
        }
        if(cnt == 14){
            cout<<"Shara is crying";
            return 0;
        }
    }
    cout<<"shara is dovolen in "<<" "<<cnt<<" "<<"days";
    return 0;


}