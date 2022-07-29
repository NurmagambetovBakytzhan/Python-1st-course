#include <iostream>
using namespace std;
int sum = 0;
int inf(int n){
    while(cin>>n){
        sum+=n;
        if(n == 0){
            return sum;  
            break;
        }
        
    }
    return inf(n);
}
int main(){
    int n;
    cout<<inf(n);
    return 0;
}