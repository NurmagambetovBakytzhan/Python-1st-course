#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n; cin >> n;

    for(int x = 1; x <= n * 2 - 1; x++){
        for(int y = 1; y <= n * 2 - 1; y++)
            cout << max(abs(x - n), abs(y - n)) + 1;
            // cout << "[" << x << ", " << y << "] ";
        cout << endl;
    }

}