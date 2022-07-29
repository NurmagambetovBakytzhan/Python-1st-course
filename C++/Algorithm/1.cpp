#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s = "Hell";
    string l ="lleH";
    int cnt = 0;
    while(next_permutation(s.begin(), s.end())){
        for(auto &i : s ){
            for(auto j : l){
                if(j == i){
                    cnt++;
                }
            }
        }
        if(cnt == l.size()){
            cout<<"True";
        }

        cout<<endl;
    }
    return 0;
}