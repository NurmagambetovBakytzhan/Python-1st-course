#include <iostream>
using namespace std;

void toll(string &s){
    for(int i = 0 ; i < s.size(); i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i]+=32;
        }
    }
}

int main(){
    string s;
    string a = "pacify";
    string b = "wine";
    cin>>s;
    toll(s);
    for(int i = 0; i < s.size();i++){
        for(int j = 0 ; j < a.size(); j++){
            if(s[i] == a[j]){
                a.erase(i, 1);
                s.erase(j , 1);
                i--;
                j--;
            }
        }
    } 
    for(int i = 0; i < s.size();i++){
        for(int j = 0 ; j < b.size(); j++){
            if(s[i] == b[j]){
                a.erase(i, 1);
                s.erase(j ,1);
                i--;
                j--;
            }
        }
    } 
    if(a.empty() && b.empty()){
        cout<<"Bubu";
    }
    else{
        cout<<"Wine by";
    }
    return 0;
}