#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin>>a[i];
    }
    int maxi= a[0];
    for(int i = 0 ; i < n ; i ++){
        for(int j = i+1; j < n ; j++){
            if(a[i]> a[j]){
                maxi = a[i];
                a[i]= a[j];
                a[j]=maxi;
                
            }
        }
    }
    for(int i = 0 ; i< n ; i ++){
        cout<<a[i]<<" ";
    }
    return 0;
}