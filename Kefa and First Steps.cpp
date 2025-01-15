#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int s=0,t=0;
    for(int i=0;i<n-1;i++){
       if(a[i+1]>=a[i]){
       s++;
       if(t<s){
             t=s;}
       }
        if(a[i+1]<a[i]){
            
       s=0;
     }
     

    }
    cout<<t+1;
    

}