#include <iostream>
using namespace std;
int sumr(long long x){
    if(x==0){
        return 0;
    }
    return sumr(x-1)+x;

}
int main(){
    long long x;
    cin>>x;
    cout<<sumr(x);
    return 0;
}