#include <iostream>
#include <set>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int> s;
    for(int i = 0 ; i < n ; i++){
        int k = s.size();
        int x;
        cin>>x;
        s.insert(x);
        if(s.size() == k){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
}