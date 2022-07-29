#include <iostream>
#include <vector>
using namespace std;
int main(){
    int k;
    int l,r;
    cin>>l>>r;
    while(l!=r+1){
        if(l % 10 == 5){
            cout<<l<<" ";

        }
        else if(l / 10 != 0){
            k = l;
            while (l != 0){
                l/=10;
                if(l % 10 == 5){
                    cout<<k;
                    break;
                }
                else{
                    continue;
                }
            }
            l = k;

        }
        l++;
    }
    return 0;
}