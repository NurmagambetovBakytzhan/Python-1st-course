#include <iostream>
using namespace std;
int main(){
    int n;
    int cnt = 0 ;
    cin>>n;
    int a[n];
    for(int i = 0 ; i< n ; i++){
        cin>>a[i];
    }
    int q;
    cin>>q;
    int b[q];
    for(int j = 0; j < q; j++){
        cin>>b[j];
    }
    for(int j = 0 ; j < q; j++){
        for(int i = 0 ; i < n ; i++){
        
            if(b[j]==a[i]){
                cnt++;
            }

        }
        cout<<cnt<< " ";
    }
    cnt=0;

    return 0;

}