#include <iostream>
using namespace std;

void w_out(string x) {
    for (int i = 0; i < x.length(); i++) {
        if (int (x[i]) == 65 || int (x[i]) == 97 || int (x[i]) == 69 || int (x[i]) == 101 || int (x[i]) == 73 || int (x[i]) == 105 || int (x[i]) == 79 || int (x[i]) == 111 || int (x[i]) == 85 || int (x[i]) == 117) {
            continue;
        }
        cout << x[i];
    }
}

int main () {
    string x;
    getline(cin, x);
    w_out (x);
    return 0;
}
