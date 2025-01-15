#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
            int n,a,b,count=0;
    cin>>n;
    if(n%2==0){
        cout<<n/2<<" "<<n/2<<endl;
    }
   else if(n%2!=0){
   for(int i=1;i<n;i++){
    a=i;
    b=n-i;
    
    if((a%b==0||b%a==0)&&a!=1&&b!=1){
     
        cout<<a<<" "<<b<<endl;
      
       }
     else count++;
   }
   
 if(count==n-1) {cout<<1<<" "<<n-1<<endl;}
   } 
  
}}