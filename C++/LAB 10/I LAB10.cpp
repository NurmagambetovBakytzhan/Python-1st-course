#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> v,m;
    
    for(int i = 0 ; i <  n ; i++){
        int x;
        cin>>x;
        v.push_back(x);
        m.push_back(x);
        }
    reverse(m.begin(), m.end());
    for(int i = 0 ; i < m.size(); i++){
        v.push_back(m[i]);
        }
    for(int i = 0 ; i < v.size() / 2; i++){
        if(v[i] != v[i+n]){
                cout<<"Instead of "<<v[i]<<" here was"<<" "<<v[i+n]<<endl;
        }
        else{
                cout<<"OK"<<endl;
        }
    }
    
}
