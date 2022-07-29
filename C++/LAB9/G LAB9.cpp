#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int main(){
    vector<char>v;
    queue<char> q;
    string x;
    cin>>x;
    for(int i = 0 ; i < x.size(); i++){
        q.push(x[i]);
    }
    while(!q.empty()){
    char t = q.front();
    q.pop();  
    if(t == '1' && q.front() == t){
         v.push_back(t);
         continue;
         }
    else{
         v.push_back(t);
         }
              
 }
    for(int i = 0 ; i < v.size(); i++){
            cout<<v[i]<<" ";
            }
            system("pause");
            
    return 0;
    
}
