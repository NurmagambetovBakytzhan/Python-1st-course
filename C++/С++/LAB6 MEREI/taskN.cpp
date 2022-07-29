#include <iostream>
using namespace std;

void change (int n, int m) {
    int a[m][n];
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        cin >> a[j][i];
    }
}
for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
        cout << a[i][j] << " ";
    }
    cout << endl;
}
}

int main () {
int n, m;
cin >> n >> m;
change (n, m);
return 0;
}