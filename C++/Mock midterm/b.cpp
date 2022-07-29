#include <iostream>
#include <queue>
using namespace std;
int main(){
    int n;
    cin>>n;
    queue<int> q;
    while(n--){
        int s;
        cin>>s;
        q.push(s);
    }
    int k;
    int cnt = 0;
    cin>>k;
    while(!q.empty()){
        if(q.front() >= k){
            cnt++;
        }
        q.pop();
    }
    cout<<cnt;
    return 0;
}   