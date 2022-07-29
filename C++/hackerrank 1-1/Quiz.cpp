#include <iostream>
#include <vector>
using namespace std;
int main(){
    int p,t,a;
    cin>>p>>t>>a;
    vector <int> v;
    for(int i  = 0  ; i < a; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int sum = 0;
    for(auto i : v){
        if(i/t > 10){
            sum+=10;
        }
        else{
             sum+=i/t;
        }
    }
    
    if(sum >=p){
        cout<<"Stipuha est' - mozhno poest'"<<endl<<sum;
    }
    else{
        cout<<"Voronkov chert!"<<endl<<sum;
    }
    return 0;
}