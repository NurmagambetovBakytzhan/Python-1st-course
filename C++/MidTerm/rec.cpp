#include <iostream>
using namespace std;

void alp(int n, int i, int a) {
    if (i == a) return;
    else {
        int k = 1;
        while (k <= i) {
            cout << char(n) << " ";
            n++;
        }
        cout << endl;
        alp(n, i+1, a);
    }
}

int main () {
    int n, t = int('A');
     cin >> n;
     alp(t, 1, n);
    return 0;
}
