#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void hypo(int a, int b) {
cout  << setprecision(4) << sqrt(a * a + b * b);
}

int main () {
    int a, b;
    cin >> a >> b;
    hypo (a, b);
    return 0;
}
