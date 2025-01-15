#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
   vector<int>v;
   for(int i=0;i<n;i++){
    int num;
    cin>>num;
    v.push_back(num);

   }
   sort(v.begin(),v.end());
   int sum=0;
  for(int i=0 ;i<n;i++){
     sum=sum+(v[n-1]-v[i]);
  }
  cout<<sum;


   
}