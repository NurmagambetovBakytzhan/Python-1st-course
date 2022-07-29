#include <iostream>
#include <vector>
using namespace std;
#define fr(i, n) for(int i = 0; i < n; i++)
int main(){
    int a, b, cnt = 0;
    string x, y;
    cin >> x >> y;
    char t = x[x.size()-1];
    int q = x.size()-1;
    for(int i = y.size()-1; i >= 0; i--){
        if(y[i] == t){
            int k = i;
            int j = q;
            bool equal = true;
            while(equal){
                if(y[k] == x[j]){
                    k--;
                    j--;
                    cnt++;
                } else equal = false;
                if(k == 0) break; 
            }
            if(!equal) cnt = 0;
            else break; 
        }
        if(cnt != 0) break;
    }
    if(cnt == 0){
        cout << x << y;
        return 0;
    }
    cnt += 1;
    fr(i, x.size()-cnt){
        cout << x[i];
    }
    for(int i = cnt; i < y.size(); i++){
        cout << y[i];
    }
    return 0;
}