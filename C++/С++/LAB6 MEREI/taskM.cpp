#include <iostream>
using namespace std;

void read (int a[], int n) {
    for (int i = n - 1; i >= 0; i--) {
    cin >> a[i];
}
}

void out (int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

int main () {
int n;
cin >> n;
int a[n];
read (a, n);
out (a, n);
return 0;
}