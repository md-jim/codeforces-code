#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
    cin>>n;
  vector<int>ar;
    for(int i=0;i<n;i++){
        int in;
        cin>>in;
        ar.push_back(in);
    }
    sort(ar.begin(),ar.end(),greater<>());
    int s1=0,s2=0;
   
    for(int i=0;i<n;i++){
      if(i%2==0){
        s1=s1+ar[i];
      }
      else s2=s2+ar[i];
    }
    cout<<s1<<" "<<s2;
   
}