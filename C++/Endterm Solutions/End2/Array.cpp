#include <iostream>
#include <algorithm>
using namespace std;

int to_int(string str){
    int ans = 0, digit = 1;
    for(int i = str.size() - 1; i >= 0; i--){
        ans += (str[i] - '0') * digit;
        digit *= 10;
    }
    return ans;
}

string to_str(int num){
    string ans = "";
    while(num){
        int x = num % 10;
        ans += x + '0';
        num /= 10;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){

    int n; cin >> n;
    int arr[n];
    string first = "", second = "";

    for(int i = 0; i < n; i++)
        cin >> arr[i];

    int x; cin >> x;
    for(int i = 0; i < n; i++){
        string num = to_str(arr[i]);
        if(i < x - 1) first += num;
        else second += num;
    }
    long long num1 = to_int(first);
    long long num2 = to_int(second);
    long long ans = num1 * num2;

    cout << ans;
}