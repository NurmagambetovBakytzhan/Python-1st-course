#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int ar[5] = {1, 2 ,3 ,4, 5};
    rotate(ar, ar+2, ar+5);
    for(auto i : ar){
        cout<<i<<" ";
        
    }
    return 0;
}