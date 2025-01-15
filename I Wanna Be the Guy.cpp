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
        cin>>a[x];
    }
    cin>>y;
    for(int i=0;i<y;i++){
        cin>>b[y];
    }
     
     int count=0;
     for(int i=1;i<=n;i++){
        for(int i=0;i<x+y;i++){
            if(i==a[i]||i==b[i]){
                count++;
                break;
            }
        }
        
     }
     cout<<count;
}