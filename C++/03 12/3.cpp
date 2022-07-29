#include <iostream>
#include <vector>
#include <set>
using namespace std;
bool isun(string &x){
    set<char> ss;
    for(int i = 0 ; i < x.size(); i++){
        int a = ss.size();
        ss.insert(x[i]);
        if(ss.size()==a){
            return false;
        }
    }
    return true;
}
int main(){
    string s;
    vector<string> v;
    set<string> SSS;
    while(getline(cin, s)){
        v.push_back(s);
    }
    for(auto j : v){
        cout<<"Hi"<<j<<" ";
    }
    for(auto i : v){
        if(isun(i)){
            SSS.insert(i);
        }
    }
    
    for(auto it = SSS.begin() ; it != SSS.end(); it++){
        cout<<*it<<endl;
    }
    return 0;
}