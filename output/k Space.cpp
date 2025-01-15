#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,count=0,max=-1;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
      
        if(a[i]==0){
            count++;
        }
        
           else  count=0;

      if(max<count){
        max=count;
      }

    }

cout<<max<<endl;
}}