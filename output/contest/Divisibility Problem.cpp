#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){

unsigned long int a,b,temp;
cin>>a>>b;


if(a%b!=0){
temp=a/b;
temp=temp*b;
temp=(temp+b)-a;}
else temp=0;



cout<<temp<<endl;


}}