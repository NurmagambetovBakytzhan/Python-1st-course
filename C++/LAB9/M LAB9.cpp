#include <iostream>
#include <queue>
using namespace std;
int main(){ 
    queue<string> q;
    int n;
    cin>>n;
    while(n--){
        int k;
        string s;
        cin>>k;
        if(k==1){
            
            cin>>s;
            q.push(s);
            cout<<q.front()<<endl;
        }
        if(k==2){
            q.pop();
            if(q.empty()){
                cout<<"queue is empty"<<endl;
            }
        }
        
    }
    return 0;
}