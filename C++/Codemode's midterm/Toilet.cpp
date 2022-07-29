#include <queue>
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    queue<pair <string, int>> q;
    queue<string> Q;
    for(int i = 0 ; i < n; i++){
        string t;
        int k;
        cin>>t>>k;
        if(k!=0){
            q.push(pair<string,int>(t,k));
        }
        else{
            Q.push(t);
        }

    }
    int t = 0;
    while(!q.empty()){
        if(q.front().second < t){
            Q.push(q.front().first);
            q.pop();
        }
        else if(q.front().second >= t){
            q.pop();
        }
        t++;
    }
    cout<<Q.size()<<endl;
    while(!Q.empty()){
        cout<<Q.front()<<endl;
        Q.pop();
    }
    return 0;
}