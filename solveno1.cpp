#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,k;
   cin>>n>>k;
   int t=n,t1;
   while(t>2){
    t=n/k;
    t1=n-k*t;
     n=t;
    cout<<t1;
    break;
     }  

}