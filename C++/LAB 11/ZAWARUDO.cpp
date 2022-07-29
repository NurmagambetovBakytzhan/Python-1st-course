#include <iostream>
#include <algorithm>
using namespace std;
bool ispal(string s){
    
    for(int i = 0 ; i < s.size() ;i++){
        if(s[i] != s[s.size() - 1 - i]){
            return false;
        }
    }
    return true;
}

int main(){
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    while(next_permutation(s.begin(), s.end())){
        if(ispal(s)){
            cout<<"ZA WARUDO TOKI WO TOMARE";
            return 0;
        }

    }
    cout<<"JOJO";
}