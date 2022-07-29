#include <iostream> 
using namespace std;
int main(){
    int d,m,y;
    cin>>d>>m>>y;
    if(m == 2 && d>28){
        cout<<"NO";
        return 0;
    }
    if(m==2 && y<=2035){
        cout<<"YES";
    }
    if(d>=1 && d<= 31 && m%2==0 && m>=1 && m<=12 && y>=1970 && y<=2035){
        cout<<"YES";
        return 0;
    }
     if(d>=1 && d<= 30 && m%2==1 && m>=1 && m<=12 && y>=1970 && y<=2035){
        cout<<"YES";
        return 0;
    }
    else{
        cout<<"NO";
    }
    return 0;
}   