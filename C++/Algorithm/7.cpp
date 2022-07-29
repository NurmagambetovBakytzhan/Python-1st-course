#include <iostream>
#include <algorithm>
using namespace std;
int gen(){
    return rand();
}
int main(){
    int n = 10;
    while (n--)
    {
        cout<<gen()<<" ";/* code */
    }
    
    return 0;
}