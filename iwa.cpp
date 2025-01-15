#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int x;
    int a[x];
     int y;
    int b[y];
    cin>>n;
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    cin>>y;
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
         if(ar[j]==i){
            count++;
            break;
         }
    }}
    cout<<count;
}