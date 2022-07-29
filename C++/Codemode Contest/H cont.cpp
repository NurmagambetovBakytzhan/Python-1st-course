#include <iostream>
#include <set>  
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    int n;

    cin>>n;
    set<int> set;
    while(n--){
        
        int k;
        cin>>k;
        while(k--){
            string s;
            cin>>s;
            if(s=="Insert"){
                int x;
                cin>>x;
                set.insert(x);
            }
            if(s=="Print"){
                for(auto i : set){
                    cout<<i<<" ";
                }

                cout<<endl;
            }
            if(s=="Delete"){
                int cnt=0;
                int l;
                cin>>l;
                for(auto i : set){
                    if(i == l){
                        set.erase(i);
                        cout<<"Deleted"<<endl;
                        break;
                    }
                    else{
                        cnt++;
                    }
                    if(cnt == set.size()){
                        cnt=0;
                        cout<<"Does not exist"<<endl;
                        break;
                    }
                }
            }
            
        }set.clear();
    }
    return 0;
    
}