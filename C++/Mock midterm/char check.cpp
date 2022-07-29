#include <iostream>

#include <set>
using namespace std;
int main(){
    int n;
    cin>>n;
    string x = "";
    while(n--){
        string s;
        cin>>s;
        x = x+s;
    }
    set<char> ttt;
    for(char i = 'a'; i<='z'; i++){
        int cnt = 0;
        for(int j = 0 ; j < x.size(); j++){
            if(i==x[j]){
                cnt++;
            }
            
        }
        if(cnt == 0){
            cout<<i;
        }
        else{
                ttt.insert(i);
            }
            
    }   
    if(ttt.size() == 26){
        cout<<"No such characters";
    }
    return 0;
}