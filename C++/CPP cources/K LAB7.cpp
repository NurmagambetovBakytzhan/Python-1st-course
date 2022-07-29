#include <iostream>
using namespace std;
char maxq;
char maxi(string x, int i){
    
    if(x.size()==i){
        return maxq;
    }
    if(x[i]>= maxq){
        maxq = x[i];
    }
    return maxi(x , i+1);
}
int main(){
    string x;
    cin>>x;

    cout<<maxi(x, 0);
    return 0;
}