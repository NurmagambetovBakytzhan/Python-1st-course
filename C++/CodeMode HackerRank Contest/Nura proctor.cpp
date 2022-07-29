#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    map<int, int> m;
    for(int i = 0 ; i <n ; i++){
        int x;
        cin>>x;
        m[x]++;
    }

    vector <int> g;
    vector<int> b;
    for(auto i : m){
        if(i.second == 1 ){
            g.push_back(i.first);
        }
        if(i.second > 1){
            b.push_back(i.first);
        }
    }
    if(g.empty()){
        cout<<"Zvonite mamam, u vas retake"<<endl;
        cout<<"Plo}{ie"<<" "<<":"<< " ";
        for(auto i : b){
        
        cout<<i<<" ";
        }
        return 0;
    
    }
    if(b.empty()){
        cout<<"Molodcy"<<endl;
        cout<<"}{oroshie"<<" "<<":"<< " ";
        for(auto i : g){
            cout<<i<<" ";
        }
        return 0;
    }
    cout<<"}{oroshie"<<" "<<":"<< " ";
    for(auto i : g){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"Plo}{ie"<<" "<<":"<<" ";
    for(auto i : b){
        
        cout<<i<<" ";
    }
}