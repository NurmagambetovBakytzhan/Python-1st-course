#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    string s,t;

    cin>>s>>t;
    while(next_permutation(s.begin(), s.end())){
        cout<<s<<endl;
    }
    return 0;

}