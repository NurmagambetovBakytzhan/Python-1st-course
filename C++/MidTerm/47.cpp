#include <iostream> 
#include <vector>
using namespace std;
bool ispali(string x){
    int cnt = 0;
    for(int i = 0 ; i < x.size(); i++){
        if(x[i] == x[x.size()-1-i]){
            continue;
        }
        else{
            cnt++;
        }
    }   
    if(cnt == 0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int cnt = 0;
    int n;
    vector<string>v;
    cin>>n;
    string s;
    int a[n];
    for(int i = 0 ; i< n;i++){
        cin>>s;
        if(ispali(s)){
            v.push_back(s);
        }
        else{
            continue;
        }
    }
    if(v.empty()){    
        cout<<"NO";
    }
    for(auto i:v){
        cout<<i<<endl;
    }
    
    return 0;
}