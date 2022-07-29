#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
bool mysort(pair <int, int> &p1, pair <int, int> &p2){
    return p1.second > p2.second;
}
int main(){
    int n,m;
    vector <pair<int , int>> v;
    map<int, int> k;
    cin>>n>>m;
    int a[n][m];
    for(int i = 0 ; i < n ; i++){
        for(int j = 0; j  < m ; j++){
            cin>>a[i][j];
        }
    }
    for(int i = 0 ; i < n ; i++){
        for(int j = 0; j  < m ; j++){
            if(a[i][j] > 0){
                k[i]++;
            }
        }
    }
    for(auto i : k){
        v.push_back(make_pair(i.first , i.second));
    }
    sort(v.begin(), v.end(), mysort);
    bool flag = true;
    for(int  i = 0 ; i < v.size(); i++){
        int temp = v[0].second;
        if(v[i].second != temp){
            flag = false;
        }
    }
    if(flag){
        cout<<"Numbers are equal";
    }
    else{
        for(auto i : v){
            cout<<i.first + 1;
            return 0;
        }
    }
}
