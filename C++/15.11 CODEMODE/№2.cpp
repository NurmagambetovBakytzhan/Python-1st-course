#include <iostream>
#include <queue>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    queue<int> q;
    string s;
    int n;
    cin>>n;
    while(n--){
        cin>>s;
        if(s=="push"){
            int k;
            cin>>k;
            q.push(k);
            cout<<"Ok"<<endl;
        }
        if(s=="pop"){
            cout<<q.front()<<endl;
            q.pop();
        }
        if(s=="size"){
            cout<<q.size()<<endl;
        }
        if(s=="front"){
            cout<<q.front()<<endl;

        }
        
    }
    return 0;

}
/*input:
5
push 5
push 7
pop
size
front

output:
ok
ok
5
1
7
 int n;
    cin >> n;
    queue <int> n;
    string s;
    while(n--){
        cin >> s;
        if (s == "push"){
            int k;
            cin >> k;
        } else if (s == "pop"){

        } else if (s == "size"){

        } else if (s == "front"){
            
        }
    }

    return 0;
}
*/