#include <iostream>
using namespace std;
int main(){
    int n,p,best,max = 0;
    int res;
    int sum = 0;
    
    cin>>n>>p;
    
    string s[n];
    string beststud = ""; 
    
    int a[n];
    for(int i = 0 ; i < n ; i++){
        a[i]=0;
    }
    if(n == 0 || p == 0){
        cout << "error";
         return 0;
    }
    for(int i = 0 ; i < n;i++){
        
        string name;
        cin>>name;
        s[i] = name;
        for(int j = 0 ; j < p ; j++){
            cin>>res;
            a[i] += res;
            if(a[i]>max){
                max = a[i];
                beststud=name;
            }
        }
    }
    for(int i = 0 ; i <n; i++){
    
        cout<<s[i]<<" "<<"-"<<" "<<a[i]<<endl;
        
    }   
    cout<<"The best:"<<endl<<beststud<<" "<<max;
    
    
    return 0;
}
/*
int main()
{
    int n;
    cin >> n;

    string s[n];
    for(int i=0; i<n; i++)
    {
        string name;
        cin >> name;

        s[i] = name;
    }

    for(int i=0; i<n; i++)
    {
        cout << s[i] << endl;
    }
string s[n];
string winner = "";
int ans = 0;

for(int i=0; i<n; i++)
{
    string student;
    cin >> student;
    s[i] = student;
    for(int j=0; j<m; j++)
    {
        int total;
        cin >> total;
        a[i] += total;
    }
}
*/