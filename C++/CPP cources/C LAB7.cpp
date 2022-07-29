#include <iostream>
using namespace std;
int srch(int a[] , int x, int min, int max ){
    if(max>=min){
        int mid = min + (max-min)/2;
        if (a[mid] == x){
            return mid;
        }
        if(a[mid] > x){
            return srch(a,x,  min-1,  mid  );
        }
        if(a[mid]<x){
            return srch(a, x, mid+1,  max);
        }
    }
    return -1;
}
int main(){
   
    int x;
    cin>>x;
    int a[x];
    for(int i = 0 ; i< x; i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    int res = srch(a, k , 0,  x-1);
    if (res == -1){
        cout<<"No";
    }
    else{
        cout<<"Yes";
    }
    return 0;
}   
