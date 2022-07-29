#include <iostream>
#include <stack>
using namespace std;
bool sequence(string s){
    int cnt = 0;
    for(int i = 0 ; i< s.size(); i++){
        if(cnt < 0){
            return false;
        }
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            cnt++;
        }
        else{
            cnt--;
        }

    }
    return cnt = 0;
}
int main(){
    string s;
    cin>>s;
    if(sequence(s)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;

}