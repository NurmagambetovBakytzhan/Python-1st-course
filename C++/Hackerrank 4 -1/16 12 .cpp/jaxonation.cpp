#include <iostream>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int cnt = 0;
    char l = s[s.size() - 1];
    int p = s.size() - 1;
    for(int i = t.size() - 1; i >= 0 ; i--){
        if(t[i] == l){
            int k = i;
            int m = p;
            bool flag = true;
            while(flag){
                if(t[k] == s[m]){
                    k--;
                    m--;
                    cnt++;
                }else flag = false;
                if(k ==0) break;
            }
            if(!flag){
                cnt = 0;
            }else break;

        }
        if(cnt!= 0){
            break;
        }
    }
    if(cnt == 0){
        cout<<s<<t;
        return 0;
    }
    cnt++;
    for(int i = 0 ;  i < s.size() - cnt; i++){
        cout<<s[i];
    }
    for(int i = cnt; i < t.size() ; i++){
        cout<<t[i];
    }

}