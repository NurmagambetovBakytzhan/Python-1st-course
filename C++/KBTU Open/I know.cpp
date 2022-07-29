#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float n,k;
    cin>>n>>k;
    string s;
    double l = 1 / n;
    for(int i = 0 ; i < 10; i++){
        float x = l * k;
        s = s + to_string(floor(x));
        l = x - floor(x);
        cout<<floor(x);

    }  
    cout<<s;
    string y;
    for(int i = 1 ;i < s.size() ; i++){
        if(s[i] != '.'){
            y = y + s[i];
        }
    }
    bool flag = false;
    for(int i = 0 ; i <s.size() ; i++){
        if(s[i] == 0 || s[i] == '.'){
            flag = true;
        }
    }
    if(flag){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }

}