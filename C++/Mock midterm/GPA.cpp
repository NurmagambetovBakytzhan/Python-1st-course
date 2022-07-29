#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    set<
    cin>>n;
    vector <pair<int, string>> v;
    while(n--){
        string s;
        int k;
        cin>>s>>k;
        while(k--){
            int l;
            string r;
            cin>>l>>r;
            v.push_back(make_pair(l,r));
        }
        for(auto i : v){

        }
    }
}