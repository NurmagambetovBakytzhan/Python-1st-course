#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    set<int> s;
    for(int i = 0 ; i < n ; i ++){
        int x;
        cin>>x;
        s.insert(x);
        
    }
    cout<<s.size();

    return 0;
}
