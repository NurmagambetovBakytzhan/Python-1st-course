#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int mini(vector <int> &v){
    int minim ;
    for(int i = 0 ; i < v.size(); i++){
        minim = v[0];
    }
    for(int i = 0 ; i < v.size(); i++){
        if(v[i] <= minim){
            minim = v[i];
        }
    }
    return minim;
}
int main(){

    string s;
    cin>>s;
    vector <int> v; 
    char t;
    cin>>t;
    for(int i = 0 ; i < s.size(); i++){
        if(s[i] == t){
            v.push_back(i);
        }
    }
    vector <int> V;
    vector<int> w;
    for(int i = 0 ; i < s.size(); i++){
        for( int j = 0 ; j < v.size(); j++){
            V.push_back(abs(v[j] - i));
        }
        w.push_back(mini(V));
        V.clear();
    }
    
    for(auto i : w){
        cout<<i<<" ";
    }
    // while(!q.empty()){
    //     int a = q.front();
    //     q.pop();
    //     w.push_back(min(a, q.front()));
    //     q.pop();
    // }
    // for(auto i : w){
    //     cout<<i<<" ";
    // }
    return 0;
}