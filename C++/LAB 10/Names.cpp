#include <iostream>
#include <vector>
#include <map>

using namespace std;

int Sum(vector <int> v){
    int s = 0;
    for(int i = 0 ; i < v.size(); i++){
        s += v[i];
    }
}
int main(){
    int n;
    cin>>n;
    string s;
    map<string , pair <vector<int> , int> >m;
    
    map<string , pair <vector<int> , int> > :: iterator it;
    for(int i = 0 ; i , n ; i++){
        cin>>s;
        for(int j  = 0 ; j < s.size(); j++){
            cin>>s;
            m[s].first.push_back(int( s[j]));

        }
        m[s].second = 0;
    }
    for(int i = 0 ; i < n; i++){
        m[s].second = Sum(m[s].first);
    }
    vector<pair<string,pair<vector<int>, int>>> v(m.begin() , m.end());
}