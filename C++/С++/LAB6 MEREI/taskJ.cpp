#include <iostream>
using namespace std;

int max2 (int a, int b) {
    int max = 0;
    if (a >= b) max = a;
    else max = b;
    return max;
}
int main () {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << max2 (max2(a,b), max2(c, d));
    return 0;
}