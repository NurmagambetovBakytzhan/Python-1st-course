#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x;
        vector <int> v;
    for(int i = 0 ; i  < n ; i++){
        cin>>x;
        v.push_back(x);

    }
    int ndx,val;
    cin>>ndx>>val;
    v.insert(v.begin()+ndx, val);
    for( int i = 0 ; i < v.size() ; i++){
        
        cout<<v[i]<<" ";
    }
    return 0;
}