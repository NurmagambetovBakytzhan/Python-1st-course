#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main(){
    int n;
    vector<int> v;
    set<int> s;
    cin>>n;
    for(int i = 0 ; i <  n ; i++){
        int l;
        cin>>l;
        v.push_back(l);
        s.insert(l);
    }
    if(v.size() == s.size()){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    return 0;
}