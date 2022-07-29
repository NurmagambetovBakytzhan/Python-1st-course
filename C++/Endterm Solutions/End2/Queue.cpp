#include <iostream>
#include <map>
#include <queue>
using namespace std;

int main(){

    int n; cin >> n;
    map<int, queue<pair<string, string> > > mp;
    map<int, queue<pair<string, string> > > :: iterator it;

    for(int i = 0; i < n; i++){
        int ticket; cin >> ticket;
        string name, surname; cin >> name >> surname;
        mp[ticket].push(make_pair(name, surname));
    }

    for(it = mp.begin(); it != mp.end(); it++){
        while(!it->second.empty()){
            cout << it->second.front().first << " " << it->second.front().second << endl;
            it->second.pop();
        }
    }
}
