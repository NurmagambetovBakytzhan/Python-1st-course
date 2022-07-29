#include <iostream>
#include <map>
#include <vector>
#include <queue>

using namespace std;
bool iseven(string x){
    return x.size() %2==0;
}
int main(){

    int n;
    cin>>n;
    vector<string> v ;
    queue<int> q;
    queue<int> Q;
    while(n--){
    int sum = 0;
    

    int a;
    for(int i =0 ; i< n; i++){
        string x;
        cin>>x;
        v.push_back(x);
    }
    while(n--){
        int k;
        cin>>k;
        q.push(k);
    }
    for(auto i : v){
        if(iseven(i)){
            while(n--){
                a = q.front();
                sum+= q.front();
                q.push(a);
                q.pop();
            }
            sum /=3;
            while(n--){
                q.front() += sum;
                if(q.front() > 255){
                    q.front() = 255;
                }
                Q.push(q.front());
                q.pop();
            }
        }
        else{
                while(n--){
                a = q.front();
                sum += q.front();
                q.push(a);
                q.pop();

            }
            sum /=3;
            while(n--){
                q.front() -= sum;
                if(q.front() < 0){
                    q.front() = 0;
                }
                Q.push(q.front());
                q.pop();
            }
            
        }
        
    }
    cout<<i<<":"<<" ";
            while(!Q.empty()){
                cout<<Q.front()<<" ";
                Q.pop();
            }
}
return 0;
    
}
