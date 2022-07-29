#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void print(vector<int> &v){
    for(int it = 0; it < v.size(); it++){
        cout<<v[it]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    vector <int> v;
    for(int i = 0 ; i< n ; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int k;
    cin>>k;
    while(k--){
        string s;
        cin>>s;
        if(s == "sort"){
            sort(v.begin(), v.end());
            for(auto i : v){
                cout<<i<<" ";
            }
        }
        if(s == "reverse"){
            reverse(v.begin(), v.end());
            for(auto i : v){
                cout<<i<<" ";
            }
        }
        if(s == "find_max"){
            
            
            auto it = max_element(v.begin(), v.end());
            
            
        } 

    }
}