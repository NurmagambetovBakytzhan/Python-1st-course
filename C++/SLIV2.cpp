#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
 int n;
 vector <int> v;
 cin>>n;

 for(int i = 0 ; i < n ;i++){
         int x;
         cin>>x;
         v.push_back(x);
         }   
 int k;
 cin>>k;
 int l = (n - k);
 rotate(v.begin(), v.begin()+ l , v.end());
 for(int i = 0 ; i <v.size(); i++){
         cout<<v[i]<<" ";
         }
         system("pause");
}
