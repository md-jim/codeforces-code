#include<iostream>
using namespace std;
int main(){
    int a,b,areab,sumar,count=0,temp;
    cin>>a>>b;
    areab=b*2*2;
    sumar=areab+a;
   temp=(areab/4)/2;
   
   if((sumar-areab)>=a&&temp%2==0){
    cout<<temp<<endl;
   }
   else if((sumar-areab)<a&&temp%2==0){
    cout<<temp+1<<endl;
   }
   else if(temp%2!=0){cout<<temp+1<<endl;}
   
   }
