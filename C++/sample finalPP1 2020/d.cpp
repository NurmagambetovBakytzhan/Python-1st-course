#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(s.size()>15){
        cout<<"0";
    }
    string x = "";
    for(int i = 0 ; i < s.size(); i++){
         x = x + s[i];
        if(s[i] == '.'|| i==s.size()){
            if(stoi(x) > 255 || stoi(x) < 0){
                cout<<"0";
                return 0;
            }
            x.clear();
            continue;
        }
    }
    if(stoi(x) > 255 || stoi(x) < 0){
        cout<<"0";
        return 0;
    }   
     cout<<"1";
    return 0;
}