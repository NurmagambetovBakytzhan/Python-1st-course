#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double n;
    char k;
    int m;
    cin>>n>>k>>m;
    if(k == 'k'){
        cout<<setprecision(m+1)<<n/1024;
    }
    else{
        cout<<n*1024;
    }
    return 0;
}