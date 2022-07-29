#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
bool mysort(pair<string, string> &p1, pair<string, string> &p2){
    
    if(p1.first == p2.first){
        return p1.second < p2.second;
    }
    return p1.first < p2.first;
    
}

int cnt(string x){
    int sum = 0;
    for(int i = 0 ; i < x.size(); i++){
        if((int) x[i] %2 ==0){
            sum++;
        }
        else{
            continue;
        }
    }   
    return sum;
}

int main(){
    int n;
    cin>>n;
    vector<pair<string, string>> m;
    for(int i = 0 ; i< n ; i++){
        string f;
        string s;
        cin>>f>>s;
        m.push_back(pair<string, string>(f,s));
    }
    sort(m.begin(), m.end(),mysort);

    for(auto i : m){
        if(cnt(i.first) == cnt(i.second)){
            cout<<i.first<<" "<<"+"<<" "<< i.second<<" " << "="<<" "<<"LOVE!"<<endl;
        }
        else{
           cout<<i.first<<" "<<"+"<<" "<< i.second<<" " << "="<<" "<<"Nu shto ty bratishka pritih?"<<endl;
        }
    }
    return 0;
}