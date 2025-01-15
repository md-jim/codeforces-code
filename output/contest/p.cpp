#include<iostream>
using namespace std;
int main(){
int n,i,sum=0,sum1 ;
cin>>n;
for(int i=0 ;i<n;i++){
    sum1=0;
   while(n!=0){
    
    sum1=sum1+n%10;
    n=n/10;
     sum=sum+sum1%10+sum1/10;
   }
    n--;
 //sum=sum+sum1%10+sum1/10;
   
   
}
cout<<sum<<endl;
}












