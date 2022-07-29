#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n%2==0){
        for(int i = 1 ; i <= n ; i++){
            for(int k = i+1; k<=n; k++){
                cout<<".";
            }
            for(int j = 1 ; j <= i ; j++){
                cout<<"#";
            } 
            cout<<endl;
        }
        
    }
    else{
        for(int i = 1 ; i <=n ; i++){
            for(int k = n-i; k>0; k--){
                cout<<".";
            }
            for(int j = 1; j<=i; j++){
                cout<<"#";
            }
             cout<<endl;
        }
       

    }
    return 0;
}