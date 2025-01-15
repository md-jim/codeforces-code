#include<iostream>

using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    string a;
    cin>>a;
    int l,count=0;
    
    l=a.length();
    for(int i=0;i<l;i++){
        if(a[i]=='B'){
          count++;
        }
    }
    cout<<l-count+1<<endl;
}}