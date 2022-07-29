#include <iostream>
#include <set>
using namespace std;
int main(){
    int n;

    cin>>n;
    set<char> l;
    set<char> u;
    set<char> d;
    
    while(n--){
        string s;
        cin>>s;
        for(char i = 'a'; i<='z';i++){
            if(s[i - 'a'] == i){
                continue;
            }
            else{
                l.insert(i);
            }
        }
    }
     set<char> :: iterator it;
     for(it = l.begin(); it!=l.end(); it++){
         cout<<(*it)<<" ";
     }
     return 0;
}