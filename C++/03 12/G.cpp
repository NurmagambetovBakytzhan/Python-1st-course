#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i = 0 ; i <n ; i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int k,l;
    cin>>k>>l;
    int cnt = 0;
    for(auto i : v){
        if(i%k == 0 && i%l!=0){
            cout<<i<<" ";
            cnt++;
        }

    }   
    if(cnt==0){
        cout<<"-1";
    }
    return 0;

}