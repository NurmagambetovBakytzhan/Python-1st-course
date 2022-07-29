#include <iostream>
using namespace std;
int main(){
    string s;
    int n;
    cin>>n>>s;
    int cnt = 1;
    for(int i = 0 ; i < s.size(); i++){
        s[i] = (int)s[i] + n;
        if( s[i] > 'Z'){
            s[i] = (s[i]) - 26;
            cnt++;
        }
        cout<<s[i];
    }
}