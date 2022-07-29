#include <iostream>
using namespace std;
int cnt = 0;
int summ(long long n){
    if(n / 10 != 0){
        cnt++;
    }
    int sum = 0;
    while(n!=0){
        sum+=n%10;
        n  /=  10;                       //4444....4 -> 200 = 0 + 2 + 0
    }

    if(sum / 10 == 0){
        return sum;
    }
    else{
        
        n = sum;
    }
    return summ(n) ;
}

int main(){
    string x;
    cin>>x;
    int SUM = 0;
    if(x.size() > 1){
        for(int i = 0 ; i < x.size(); i++){
            SUM+=(char)x[i] -48;
        }
        cnt += 1;
        cout<<summ(SUM)<<" "<<cnt;
    }
    else{
        for(int i = 0 ;  i <x.size() ; i++){
            cout<<x[0]<<" "<<0;
            return 0;
        }
    }
     
    return 0;
}