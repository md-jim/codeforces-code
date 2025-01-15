#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int s;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
      for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            int temp=0;
        if(i==j){
            j=j;
        }
        else {
         temp=a[j]-a[i];
         if(temp%2!=0){
          count++;
          
         }
             
        }
        }
         
        if(count==n-1){
            s=i;
            break;
          }
    }
   cout<<s+1;
    
}