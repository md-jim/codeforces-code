#include<iostream>
using namespace std;
int main()
{
    int taka;
    int t;
    cin>>t;
    for(int j=0;j<t;j++){


    int a,b;
    cin>>taka;
    a=taka/3;
    b=a+1;
    if(a+a*2==taka){
         cout<<a<<" "<<a<<endl;
    }
     if(a+b*2==taka){
         cout<<a<<" "<<b<<endl;
    }
     if(a*2+b==taka){
         cout<<b<<" "<<a<<endl;
    }

}}