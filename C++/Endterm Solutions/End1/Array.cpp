#include <iostream>
using namespace std;

int main(){

    int n, cnt = 0; cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int x, y; cin >> x >> y;
    for(int i = 0; i < n; i++)
        if(arr[i] % x == 0 and arr[i] % y != 0){
            cnt++;
            cout << arr[i] << endl;
        }
    
    if(cnt == 0) cout << -1;
}