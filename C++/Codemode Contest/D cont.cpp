#include <iostream>
#include <map>
#include <algorithm>
#include<vector>
using namespace std;
bool comp(pair< pair<string,string>, int> &p1, pair< pair<string,string>, int> &p2){
    return p1.second < p2.second; 
}

int main(){
    freopen("input.txt","r",stdin);
    int n;
    int N = 0;
    int M = 0;
    int degr=0;
    cin>>n;
    vector <pair <pair <string, string>, int> >v;
    for(int i = 0 ; i < n ; i++){
        string name,surn;
        cin>>name>>surn;
        for(int j = 0  ; j < name.size(); j++){
             N+=(int)name[j] ;
        }
        for(int k = 0 ; k < surn.size(); k++){
               
             M+=(int) surn[k] ;  
        }
        degr = M- N;
        v.push_back(pair<pair<string, string>, int> (name, surn, degr ));
        M = 0;
        N = 0;
        degr = 0;
    }
    sort(v.begin(), v.end(), comp);
    for(auto it : v){
        cout<<it.first()<<" "<<it.second();
    }
    
    return 0;    
}