#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a, b , k;
    cin>>a>>b>>k;
    vector <int> v;

    if(a >= b){
        for(int i = b ; i >= 1 ; i--){
            if(a % i ==0 && b % i == 0){
                v.push_back(i);
            }
        }
    }
    if(a < b){
        for(int i = a ; i >= 1 ; i--){
            if(a % i ==0 && b % i == 0){
                v.push_back(i);
            }
        }
    }
    cout<<v[k - 1];
}