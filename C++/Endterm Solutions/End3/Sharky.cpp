#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int num){
    if(num == 1 or num == 0) return false;
    else if(num == 2) return true;
    for(int i = 2; i * i <= num; i++) if(num % i == 0) return false;
    return true;
}

int main(){

    int n; cin >> n;
    vector<int> v;

    for(int i = 2; i < n; i++){
        if(isPrime(i)) v.push_back(i);
    }

    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v.size(); j++){
            if(v[i] + v[j + i] == n){
                cout << v[i] << " " << v[j + i];
                exit(0);
            }
        }
    }
}