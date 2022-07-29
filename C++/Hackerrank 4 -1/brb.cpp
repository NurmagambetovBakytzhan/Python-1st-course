// 0 1 1 2 3 5 6 11 17 28 
#include <iostream>
using namespace std;
int cnt = 0;
int a[1000];
int povez(int k, int cnt , int  m){
    while(m < k){
        cnt++;
        m*=2;
    }
    if(m  > k ){
        while(m!=k){
            cnt++;
            m--;
        }
    }
    return cnt;
}

int main(){
    int n;
    cin>>n;
    int a[n+1];
    a[0] = 0;
    a[1] = 1;
    for(int i = 2 ; i<= n ; i++){
        
        a[i] = a[i - 1]%101 + a[i - 2]%101;
    }
    int k = 0;
    for(int i = 0  ; i <= n ; i++){
        k = a[n] % 101;
    }    

    int cntz = povez(k, 0, 1);
    if(cntz > 15){
        cntz %=31;
        cout<<cntz<<endl<<"Gl hf";
    }
    else{
        cout<<cntz<<endl<<"Povezlo, povezlo";
    }
}