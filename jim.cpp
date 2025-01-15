#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,count=0,j=1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
     if(a[i]==j){
        count++;
      }
      j++;
    }
    if(count==0){
        cout<<0<<endl;
    }
   else  if(count==1){
        cout<<1<<endl;
    }
   else  cout<<count-1<<endl;
}}