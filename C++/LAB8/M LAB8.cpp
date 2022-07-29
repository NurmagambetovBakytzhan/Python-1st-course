#include <iostream>
#include <set>
using namespace std;
int main(){
    int n;
    int sum = 0;
    set<int> s;
    cin>>n;
    int x;
    for(int i=0; i<n; i++){
        cin >> x;
        s.insert(x);
    }
    set<int> :: iterator it;
    for(it = s.begin(); it!=s.end();it++){
        sum+=*it;
    }
    cout<<sum;
    return 0;
}