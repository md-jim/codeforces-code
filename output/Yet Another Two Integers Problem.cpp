#include<iostream>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
int n;
int sum;
int sum1=0;
int m;

cin>>n;
n=n+1;
while(n--){
    sum=0;
    m=n;
   while(m!=0){
    
    sum=sum+m%10;
   m=m/10;
   }
  
  
 sum1=sum1+sum/10+sum%10;
 
}
cout<<sum1<<endl;}
}