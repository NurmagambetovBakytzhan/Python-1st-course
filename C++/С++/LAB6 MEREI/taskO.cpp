#include <iostream>
using namespace std;

void check (int n) {
    int last = n % 10;
    int cnt = 0;
    while (n != 0) {
        cnt += n % 10;
        n = n / 10;
    }
    if (cnt % last == 0) {
        cout << "Yes";
    }
        else cout << "No";
}

int main () {
int n;
cin >> n;
check (n);
return 0;
}