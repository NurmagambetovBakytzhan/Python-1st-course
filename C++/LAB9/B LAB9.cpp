#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;
int main(){
    int n;
    cin>>n;
    vector <int> e;
    vector <int> o;
    for(int i = 0 ; i < n; i ++){
        int x;
        cin>>x;
        if(x%2==0){
            e.push_back(x);
        }
        else{
            o.push_back(x);
        }
    }
    sort(e.rbegin(), e.rend());
    for(int i = 0 ; i < e.size(); i++){
        cout<<e[i]<<" ";
    }
    sort(o.begin(), o.end());
    for(auto it : o){
        cout<<it<<" ";
    }


    return 0;

}