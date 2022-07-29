#include <iostream>
#include <vector>
using namespace std;
int main(){
    int a[5];
    int target;
    vector <int> v;
    cin>>target;
    for(int i = 0; i < 5; i++){
        cin>>a[i];
    }
    

    for(int i = 0; i < 5; i++){
        for(int j = i+1; j < 5; j++){
            if(a[i] + a[j] == target){
                v.push_back(i);
                v.push_back(j);
            }
        }
    }
    for(auto i = v.begin(); i != v.end(); i++){
        cout<<*i;
    }

}