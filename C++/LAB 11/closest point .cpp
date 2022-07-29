#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
using namespace std;
double dist(int x, int y, int f, int s){
    return sqrt(pow(f - x, 2) + pow(s - y, 2));
}
bool mysort(pair<pair<int , int> , double> &p1, pair<pair<int , int> , double> &p2){
    return p1.second < p2.second;
}
int main(){
    int x, y;
    int n;
    cin>>x>>y>>n;
    vector<pair<pair<int , int> , double>> v;
    for(int i = 0 ; i < n; i++){
        int f,s;
        cin>>f>>s;
        v.push_back(make_pair(make_pair(f, s), dist(x,y,f,s)));
    }
    sort(v.begin(), v.end(), mysort);
    for(auto i : v){
        cout<<i.first.first<<" "<<i.first.second<<endl;
    }
}