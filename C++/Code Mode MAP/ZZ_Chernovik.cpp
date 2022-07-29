#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, x, b, y;
    cin >> n;
    string s, t;
    map<int, string> m, u, o;
    while (n--)
    {
        cin >> s >> x;
        m.insert(make_pair(x, s));
    }
    cin >> b;
    while (b--)
    {
        cin >> t >> y;
        u.insert(make_pair(y, t));
    }
    for (auto& i : m) {
        for (auto& j : u) {
            if (i.second == j.second) {
                o.insert(make_pair((i.first * j.first), i.second));
            }
        }
    }
    cout << endl;
    vector<pair<int, string> > v(o.begin(), o.end());
    sort(v.begin(), v.end());
    for (auto i : v) {
        cout << i.second << ' ' << i.first << endl;
    }
}