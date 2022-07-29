#include <bits/stdc++.h>
using namespace std;
int maxi(int a[], int n){
    if(n == 1)
    return a[0];
    return max(a[n-1], maxi(a, n-1));
}
int main(){
    int n; 
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i] == maxi(a, n)) cout << i+1;
    }
   
    return 0;
}