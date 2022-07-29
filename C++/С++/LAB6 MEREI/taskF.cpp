#include <iostream>
using namespace std;

bool valid (string x, int y) {
    int cnt = 0;
    for (int  i = 0; i < x.size(); i++) {
        if (int(x[i]) >= 48 && int(x[i]) <= 57) {
            cnt++;
        }
    }
    if (cnt >= y) {
        return true;
    } else return false;
}

int main () {
    string x;
    int y;
    cin >> x >> y;
    if (valid(x, y)) {
        cout << "YES";
    } else cout << "NO";
    return 0;
}
