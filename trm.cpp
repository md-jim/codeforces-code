#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n],c[n];
  for (int i = 0; i <n; i++)
  {
    cin>>a[i]>>b[i];
  }
  c[0]=0;
  int temp=0;
  for (int i = 0; i <n; i++)
  {
    c[i+1]=c[i]+b[i]-a[i];
   
    if(temp<c[i+1]){
       temp=c[i+1];
    }
  }

cout<<temp;
  
}