#include <iostream>
#include <algorithm>
using namespace std;
bool fun2(int &a){
    return a%2 == 0; 
}
int main(){
    int ar[5] = {1, 2 ,3 ,6, 7};
    int cnt = count_if(ar, ar+5, fun2);
    cout<<cnt;
    return 0;
}