#include <iostream>
using namespace std;

int main(){

    int n; cin >> n;
    int arr[n];
    bool find = false;

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int x, y; cin >> x >> y;

    for(int i = 0; i < n; i++)
        if(arr[i] % x == 0 and arr[i] % y != 0){
            find = true;
            cout << arr[i] << endl;
        } 
    if(!find) cout << -1;
}