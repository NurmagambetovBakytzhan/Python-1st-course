#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
bool mysort(string &s, string &k){
    for(int i = 0 ; i< s.size(); i++){
        return s[i] < k[i+1];
    }
}
int main(){
    string s,x;
    set<string> set;
    while(getline(cin, s)){
        sort(s.begin(), s.size(), mysort);
        cout<<s<<endl;
    }

}