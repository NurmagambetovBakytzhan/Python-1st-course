#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n,m,k;
    
    vector<string> N,M,K;
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        string x;
        cin>>x;
        N.push_back(x);
    }
    cin>>m;
    for(int i = 0 ; i < m ; i++){
        string x;
        cin>>x;
        M.push_back(x);
    }
    cin>>k;
    for(int i = 0 ; i < k ; i++){
        string x;
        cin>>x;
        K.push_back(x);
    }
    bool flag = false;
    vector<string> otsut;
    vector<string> lishnie;
    vector<string> svoi;
    for(int i = 0 ; i < N.size(); i++){
        if(find(M.begin() , M.end(), N[i]) == M.end()){
          otsut.push_back(N[i]);  
        }
    }
    for(int i = 0 ; i < M.size(); i++){
        if(find(N.begin(), N.end(), M[i]) == N.end()){
            lishnie.push_back(M[i]);
        }
    }
    for(int i = 0 ; i < M.size(); i++){
        if(find(M.begin() , M.end() , K[i]) != M.end() && find(N.begin() , N.end(), K[i])!= N.end()){
            svoi.push_back(K[i]);
        }
    }
    for(auto i : otsut){
        cout<<i<<" ";
    }
    cout<<endl;
    for(auto i : lishnie){
        cout<<i<<" ";
    }
     cout<<endl;
    for(auto i : svoi){
        cout<<i<<" ";
    }
}