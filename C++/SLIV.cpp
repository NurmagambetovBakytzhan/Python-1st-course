#include <iostream>
using namespace std;
void sss(int x){
    int cnt = 0;
    if(x ==0 ){
         return;
         }
    while(x!=0){
       cnt+=x%2;
       x/=2;            
    }
             cout<<cnt;   
}



int main(){
 int n;
 cin>>n;
 cout<<0;
 for(int i = 0 ; i < n; i++){
         sss(i);
         cout<<",";
                 
 }   
 
 sss(n);
 system("pause");
}
