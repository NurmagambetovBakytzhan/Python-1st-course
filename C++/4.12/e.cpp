#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    string x = "";
    for(int i = 0; i < k-1; i++){
        string S = to_string(a[i]);
        x = x + S;
    }
    string p = "";
    for(int i = k-1; i < n; i++){
        string S = to_string(a[i]);
        p = p + S;
    }
    long long X = stoi(x);
    long long P = stoi(p);
    long long e = X * P;
    cout<<e;
    return 0;

}