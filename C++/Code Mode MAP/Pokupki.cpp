#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    //freopen("spisok.txt","r",stdin);
    map<string,int> m;
    int n;
    map<string,int> b;
    cin>>n;
    string t;
    int p;
    while(n--){
        cin>>t>>p;
        m.insert(pair <string,int>(t,p));

    }
    map<string, int> myorder;
    int k;
    cin>>k;
    string myt;
    int myp;
    while(k--){
        cin>>myt>>myp;
        myorder.insert(pair <string,int>(myt,myp));
    }
    cout<<"Here is your check......."<<endl;
    for (auto it : m) {
        for (auto myit : myorder) {
            if (it.first == myit.first) {
                b.insert(make_pair(it.first,(it.second * myit.second)));
            }
        }
    }
    cout<<endl;
    vector<pair<string, int> > v(b.begin(), b.end());
    //sort(v.begin(), v.end());
    int sum = 0;
    for (auto it : v){ //итого,,,,
        sum+=it.second;
        cout<<it.first<<" "<<it.second<<endl;
    }
    cout<<"Itogo"<<" "<<sum<<" " <<"have a great day!";
    return 0;
}
/*  
5
sausage 1390
milk 450
smetana 220
hleb 90
banan 702
3
milk 2
banan 3
hleb 1
~~~~~~~~~~~~~~~
output:
hleb 90
milk 900
banan 2106
*/