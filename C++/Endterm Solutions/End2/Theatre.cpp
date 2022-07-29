#include <bits/stdc++.h>
using namespace std;
map<string, vector<string>> mp;
map<string, vector<string>> :: iterator it;

int main(){
    int n, curr; cin >> n;
    string line, name, things;
    bool first_word;
    while(n-- >= 0){
        getline(cin, line);
        first_word = true; curr = 0;
        for(int i = 0; i < line.size(); i++){
            if(line[i] == ' ' || i == line.size() - 1){
                if(first_word){
                    name = line.substr(0, i);
                    curr = i + 1; first_word = false;
                }
                else{
                    things = (i != line.size() - 1 ? line.substr(curr, i - curr) : line.substr(curr, i + 1 - curr));
                    curr = i + 1;
                    mp[name].push_back(things);
                }
            }
        }
    }

    for(it = mp.begin(); it != mp.end(); it++){
        cout << it -> first << ": ";
        for(int i = 0; i < it -> second.size() - 1; i++) cout << it -> second[i] << ", ";
        cout << it -> second[it -> second.size() - 1] << '\n';
    }
}