#include <iostream>
#include <string>
using namespace std;
int big(string s, int i){
    if(i == s.size()){
        return -1;
    }
    else((s[i]>='A' && s[i]<='Z'){
        return s[i];
    }
    return big(s, i+1);

}
int main(){
    string s;
    cin>>s;
    
    big(s);
    return 0;
}