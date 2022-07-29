#include <iostream>
using namespace std;

bool valid(string x) {
    for (int i = 0; i < x.length(); i++) {
        if ((int(x[i]) - 48) % 2 == 0) {
            continue;
        }
        return false;
    }
    return true;
}

int main () {
    string x;
    cin >> x;
    if (valid(x)) cout << "Valid";
    else cout << "Not valid";
    return 0;
}