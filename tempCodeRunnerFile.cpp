#include<iostream>
using namespace std;
int main(){
  int n,m,a,b,temp,count=0,save=0;
  cin>>n>>m>>a>>b;
 int y=n;
  int x=n*a;
  while(n>=m){
    n=n-m;
    count++;
  }
if(n==0){
  if(count*b<=n*a){
    cout<<y*a;
  }
  
   else cout<<count*b;
  
  
  
}
else if(((count+1)*b)<(count*b+n*a)){
  cout<<(count+1)*b;
}
else cout<<count*b+n*a;
  
}