#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){

    int n;
    cin>>n;
   vector<int>v;
   for(int i=0;i<n;i++){
    int num;
    cin>>num;
    v.push_back(num);

   }
   sort(v.begin(),v.end());
  int count=0;
  for(int i=0 ;i<n-1;i++){
     if(v[i+1]-v[i]==1||v[i+1]-v[i]==0){
count++;
     }
  }
  if(count==n-1){
    cout<<"YES"<<endl;
  }
  else cout<<"NO"<<endl;
  

   
}}