#include <iostream>
using namespace std;
int sum = 0;
int  heat(int x){
    if(x%10 == x){
        return sum + x/2;
    }
    else{
        sum += (x%10)/2;
        x /=10;
        return heat(x);
    }
}
int main(){
    int x;
    cin>>x;
    
    cout<<heat(x);
    return 0;
}