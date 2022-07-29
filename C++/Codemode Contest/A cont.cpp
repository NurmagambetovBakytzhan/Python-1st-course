#include <iostream>
#include <queue>
#include <vector>

using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int cntz = k;
    int cnt = 0;
    queue<pair<string, float>> q;
    vector<string> v;
    while(n--){
        string s;
        float x;
        cin>>s>>x;
        q.push(pair<string,float>(s,x));
    }
    float temp;
    string news;
    pair<string, float> t;
    while(!q.empty()){
        if(cnt == cntz){
            break;
        }
        news = q.front().first;
        temp = q.front().second;
        q.pop();
        if(temp < q.front().second){
            q.push(pair<string,float>(news,temp));
        }
        else{
            v.push_back(news);
            cnt++;
        }
    }
    for(auto i: v){
        cout<<i<<endl;
    }

    return 0;
}