#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
long long beg = 0;
int gen( ){
  long long temp = pow(beg,beg);
  beg++;
  return temp;
}
int main() { 
  
  long long n;
  cin>>n;
  long long a[n+1];
  generate(a, a+n+1, gen);
  
  for(auto i : a){
    cout<<i<<" ";
  }
  cout<<endl;
  
  return 0;
}
