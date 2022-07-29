#include <iostream>
using namespace std;

void read(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
bool check(int ID[], int num, int x) {
    for (int i = 0; i < num; i++) {
        if (ID[i] == x) {
            return true;
        }
    }
    return false;
}

int main () {
    int num, x;
    cin >> num;
    int ID[num];
    read (ID, num);
    cin >> x;
    if (check(ID, num, x)) {
        cout << "Yes";
    } else cout << "No";
    return 0;
}
