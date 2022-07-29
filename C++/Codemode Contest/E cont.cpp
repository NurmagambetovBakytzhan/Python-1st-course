#include <iostream>
#include <set>
using namespace std;

int main(){
    int n,m; //n - num. of cars, m - num. of car numbers
    int cnt = 0;
    cin>>n>>m;
    set<string> s;
    while(m--){
        string x;
        cin>>x;
        s.insert(x);
    }
    if(s.size() < n){
        cout<<"Jax is mad";
    }
    else{
        cout<<"Jaqs likes it"<<endl;
        for(auto i : s){
            if(cnt== n){
                break;
            }
            cnt++;
            cout<<i<<" "<<endl;
        }
    }
}