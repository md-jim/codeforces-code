#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,m,k,count=0;
    cin>>n>>m>>k;
    int a1[n],a2[m];
     for(int j=0;j<n;j++){
        cin>>a1[j];
     }
      for(int j=0;j<m;j++){
        cin>>a2[j];
     }
     for(int j=0;j<n;j++){
         for(int i=0;i<m;i++){
           if(a1[j]+a2[i]<=k){
         count++;
           }}}
           cout<<count<<endl;

}}