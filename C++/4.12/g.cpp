#include <iostream>
#include <cmath>
using namespace std;
bool isdeg(string x){
    bool flag = false;
    for(long long i = 0 ; i < x.size(); i++){
        if(x.size() == pow(2,i)){
            flag = true;
            return flag;
        }
    }
    return flag;
}

int main(){
    
    int n;
    cin>>n;
    int r;
    for(int i = 0 ; i < n ; i++){
        string x;
        while (cin>> x)
        {
            for(int i = 0 ; i < x.size() ; i++){
                 r = x.size();
                if(x[i] >='!' && x[i] <='/' )  {
                    r--;
                }
                
            }
            for(int i = 0 ; i < x.size(); i++){
                if(r == pow(2,i)){
                    cout<<"H"<<" ";
                    break;
                }
                
            }
            cout<<"C"<<" ";

        }
        cout<<endl;
    }
}