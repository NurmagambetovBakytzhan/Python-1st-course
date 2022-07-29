#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int ar[5];
    fill(ar, ar+5, 20);
    for(auto i : ar){
        cout<<i<<" ";
    }
    return 0;
}