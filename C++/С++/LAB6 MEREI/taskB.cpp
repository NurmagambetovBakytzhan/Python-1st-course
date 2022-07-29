#include <iostream>
#include <cmath>
using namespace std;

void read(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    }
    void dif (int a[], int b[], int n) {
        for (int i = 0; i < n; i++) {
            cout << abs(a[i] - b[i]) << " ";
        }
    }

int main () {
    int n;
    cin >> n;
    int a[n], b[n];
    read (a, n);
    read (b, n);
    dif (a, b, n);

    return 0;
}
