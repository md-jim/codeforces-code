#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int n,t,i;
    cin>>t;
    for(int j=1 ; j<=t;j++){
    cin>>n;
    int a=0,b=0,c=0,d=0,e=0;
    
    char name[n];
    for(i=0;i<n;i++){
        
        cin>>name[i];
    }
    
   
    if(n==5)
    {   
       
 for(int i=0;i<5;i++){
       
       if(name[i]=='T'){
        a=1;
       }
       else if(name[i]=='i'){
        b=1;
       }
      else if(name[i]=='m'){
        c=1;
       }
      else if(name[i]=='u'){
        d=1;
       }
      else if(name[i]=='r'){
        e=1;
       }
 }}


    if(a==1&&b==1&&c==1&&d==1&&e==1){
        cout<<"YES"<<endl;
    }
    else if(a!=1||b!=1||c!=1||d!=1||e!=1||n!=5){
        cout<<"NO"<<endl;
    }
    }}
    
