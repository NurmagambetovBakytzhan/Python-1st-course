#include <iostream> 
#include <cmath>
using namespace std;
int pow(int k){
    if(k>0){
        if(k == 0){
            return 1;
        }
        return 2 * pow(k-1);
    }
    else{
        if(k==0){
            return 1;
        }
        return 1/(2*pow(k-1));
    }
}
int main(){
    int l;
    cin>>l;
    cout<<pow(l);
    return 0;
}