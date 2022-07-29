#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int, vector<int>>> v;
    vector<int> temp;
    while(n--){
        int m;
        cin>>m;
        for(int i = 0 ; i < m;i++){
            int k;
            cin>>k;
            temp.push_back(k);
            v.push_back(make_pair(m,temp));
        }

    }
    for(auto i : v){
        for(auto j : temp){
            cout<<i.first<<" "<<temp;
        }
    }
    cout<<endl;
    return 0;
}

    