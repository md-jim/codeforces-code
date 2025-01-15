#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x;
    cin>>x;
    int a[x];
   
    
    
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
 int y;
      cin>>y;
    int b[y];
    for(int i=0;i<y;i++){
        cin>>b[i];
    }
int ar[n];
    for(int i=0;i<n;i++){
         ar[i]=i+1;
    }
    int count=0;
    for(int i=1;i<=n;i++){
        for(int j=0;j<n;j++){
         if(a[j]==i||b[j]==i){
            count++;
            break;
         }
    }

    }
    if(count==n){cout<<"I become the guy.";}
    else cout<<"Oh, my keyboard!";
}