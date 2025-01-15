#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,temp=1,sum1=0,sum2=0;
    cin>>n;
    for(int i=1;i<=n;i++){

   temp=2*temp;
   if(i>=(n/2)&&i!=n){
    sum1=sum1+temp;
   }
   else if(i<(n/2)||i==n){
    sum2=sum2+temp;
   }

    }
    cout<<sum2-sum1<<endl;
   

    
}}