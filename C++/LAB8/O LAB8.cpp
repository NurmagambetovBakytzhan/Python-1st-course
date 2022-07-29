#include <iostream>
#include <set>
#include <string>
#include <algorithm>
#include <iterator>
using namespace std;
int main(){
    string n;
    cin>>n;
    char x;
    set<string> s;
    for(int i = 0 ; i < n ; i++){
        cin>>x;
        n.insert(x);
    }
    set<string>::iterator it;
    for(char it = 'A'zzz; it < s.size(); it++){
        cout<<*it;
    }
    return 0;
}