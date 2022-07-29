#include <iostream>
using namespace std;

void per (float a, float b) {
    float z = (b * 100) / a;
    cout << z;
}


int main () {
int x, y;
cin >> x >> y;
float a = x / 1, b = y / 1;
per (a, b);
return 0;
}