#include <iostream>
using namespace std;

void c_even(string x) {
    for (int i = 0; i < x.length(); i++) {
        if (i % 2 == 0 && int(x[i]) >= 97 && int(x[i]) <= 122) {
            cout << char(int(x[i]) - 32);
        } else cout << x[i];
    }
}

int main () {
    string x;
    cin >> x;
    c_even(x);
    return 0;
}