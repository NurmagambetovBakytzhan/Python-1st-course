#include <iostream>
using namespace std;
int main(){
    int n,k;
    int sum = 0;
    cin>>n>>k;
    int a[]={31 , 28, 31, 30 , 31 , 30 , 31 , 31 , 30 , 31, 30 , 31};
    if(n == 2 && k>28 || n%2==1 && k>31|| n%2==1 && k>30){
        cout<<"Not correct";
        return 0;
    }
    for(int i = n-1 ; i < 12 ; i++){
         
        sum+=a[i];
    }
    cout<<sum+1-k;
    return 0;
}