#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main(){

    int n; cin >> n;
    map<string, vector<string> > mp;
    map<string, vector<string> > :: iterator it;

    for(int i = 0; i < n; i++){
        string country; cin >> country;
        int m; cin >> m;        
        for(int j = 0; j < m; j++){
            string city; cin >> city;
            mp[country].push_back(city);
        }
    }

    cin >> n;

    for(int i = 0; i < n; i++){
        string city, ans = ""; cin >> city;
        for(it = mp.begin(); it != mp.end(); it++)
            for(int j = 0; j < it->second.size(); j++)
                if(it->second[j] == city){
                    ans = it->first;
                    break;
                }
        cout << (ans.size() > 0 ? ans : "Unknown");
        cout << endl;
    }
}