#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){

    int n; cin >> n;
    string temp; cin >> temp;
    map<string, vector<string> > mp;
    map<string, vector<string> > :: iterator it;

    for(int i = 0; i < n; i++){
        
        string s, t = "", name = ""; getline(cin, s);
        int cnt = 0;
        if(i == 0) s.insert(0, temp);

        for(int j = 0; j < s.size(); j++){
            if(s[j] == ' ' or j == s.size() - 1){
                if(j == s.size() - 1) t += s[j];
                if(cnt == 0) name = t;
                else mp[name].push_back(t);
                // cout << cnt << ": " << t << endl;
                t = "";
                cnt++;
            }
            else t += s[j];
        }
        // cout << endl;
    }

    // cout << endl;
    for(it = mp.begin(); it != mp.end(); it++){
        cout << it->first << ": ";
        for(int i = 0; i < it->second.size(); i++){
            if(i != it->second.size() - 1) cout << it->second[i] << ", ";
            else cout << it->second[i];
        }
        cout << endl;
    }

}