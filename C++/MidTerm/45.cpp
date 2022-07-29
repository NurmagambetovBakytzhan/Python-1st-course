#include <iostream>
#include <algorithm>
using namespace std;
string comp(string x){
    int temp;
    for(int i = 0 ; i<x.size();i++){
        for(int j = i+1; j< x.size(); j++){
            if(x[i] > x[j]){
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    return x;
}
int main(){
    string a,b;
    cin>>a>>b;
    if(comp(a) == comp(b)){
        cout<<"Anagram";    

    }   
    else{
        cout<<"Not anagram";
    }
    
    return 0;
}