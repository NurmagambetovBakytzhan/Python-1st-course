#include <iostream>
using namespace std;

void up (char x) {
    if (int(x) >= 97 && int(x) <= 122) {
        cout << char(int(x) - 32);
    }
    else cout << x;
}


int main () {
char x;
cin >> x;
up (x);
return 0;
}