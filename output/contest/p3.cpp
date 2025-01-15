#include<iostream>
using namespace std;

int main(){
 
 int t;
 cin>>t;
 while(t--){
 
 unsigned long long int n,temp;
 int temp1;
 cin>>n ;
 
 temp=n/9;
 temp1=n-(temp*9);
if(temp1==0){cout<<temp*45<<endl;}
else if(temp1==1){cout<<temp*45+1<<endl;}
else if(temp1==2){cout<<temp*45+3<<endl;}
else if(temp1==3){cout<<temp*45+6<<endl;}
else if(temp1==4){cout<<temp*45+10<<endl;}
else if(temp1==5){cout<<temp*45+15<<endl;}
else if(temp1==6){cout<<temp*45+21<<endl;}
else if(temp1==7){cout<<temp*45+28<<endl;}
else if(temp1==8){cout<<temp*45+36<<endl;}



}}