#include <algorithm>
#include <iostream>
using namespace std;
int main(){
    string s,x;
    cin>>s>>x;
    if(s.size()!=x.size()){
        cout<<"No";
        return 0;
    }
    sort(s.begin(), s.end());
    sort(x.begin(), x.end());
    if(s==x){
        cout<<"YES";
        return 0;
    }
    cout<<"NO";

    return 0;
}