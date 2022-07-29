#include <iostream>
using namespace std;
bool pal(string s, int strt, int end){
    if(strt==end){
        return true;
    }
    if(s[strt]!=s[end]){
        return false;
    }
    return pal(s, strt+1,end-1);

}
int main(){
    string s;
    cin>>s;
    int strt = s[0];
    int end = s.size();
    if(pal(s, 0 , s.size()-1)){
        cout<<"Yes";

    }
    else{
        cout<<"No";
    }
    return 0;
}