#include<bits/stdc++.h>
using namespace std;
int main(){
    
    int n,a,b,c;
    int count=0;
     cin>>n>>a>>b>>c;
     if(a+b==n||b+c==n||c+a==n){
        count=2;
     }
     else if(a+b+c==n){
      count=3;
     } 
      else if(a==b&&b==c){
      count=1;
     } 
     cout<<count<<endl;  
}
