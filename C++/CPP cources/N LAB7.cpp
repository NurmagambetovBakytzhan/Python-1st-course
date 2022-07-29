#include <iostream>
#include <algorithm>
using namespace std;

void arrayInput(int ar[], int a)
{
    for (int i = 0; i < a; i++) cin >> ar[i];
}

int not_cht(int n, int k, int a[], int i){
    int flag = 1;
    if (i == n - 1) return flag;
    if(a[i + 1] - a[i] <= k){
        return 0;
    }
    return flag = not_cht(n,k,a,i+1);
}

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int b[n];
    arrayInput(b,n);
    not_cht(n, k , b , 0);
    not_cht(n, k , b, 0) ? cout << "no" : cout << "cheater";
    return 0;
}