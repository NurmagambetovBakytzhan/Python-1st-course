#include <iostream>
using namespace std;
bool brack(string s){
    int cnt = 0;
    for(int i = 0 ; i <s.size();i++){
        if(cnt < 0){
            return false;
        }
        if(s[i]=='('){
            cnt++;
        }
        else{
            cnt--;
        }

    }
    return cnt==0;
}
int main(){
    int cnt= 0;
    for(int i = 0 ; i< n ; i++){
        if(cnt<0){
            retir
        }
    }
}
