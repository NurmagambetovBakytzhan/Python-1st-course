#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;
bool myso(pair<string , double> &p1,pair<string , double> &p2 ){
    if(p1.second == p2.second){
        return p1.first > p2.first;
    }
    return p1.second > p2.second;
}
int main(){
    int n;
    cin>>n;
    map<string, double> m;
    int total = 0;
    while(n--){
        string s;
        double k;
        cin>>s>>k;
        m[s]+=k;
        total +=k;
    }
    vector<pair<string, double>> v;

    for(auto i : m){
        v.push_back(make_pair(i.first, i.second));
    }
    sort(v.begin(), v.end(), myso);
    for(auto i : v){
        cout<<i.first<<" ";
        cout<<setprecision(6)<<i.second * 100 / total<<"%"<<endl;
    }
}