#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
        
    int count=0;
    int size;
    string ch;
    cin>>size;
    cin>>ch;
 
   for(int i=0;i<size;i++){
        
         if(ch[i]!=ch[i+1]){
     for(int j=i;j<size-(i+1);j++){
        if(ch[i]==ch[j+1]){
    count=count+1;
        }
 
     }
        }
 
    }
    if(count>0)
    {cout<<"NO"<<endl;}
    else if(count==0)
    {cout<<"YES"<<endl;}
 
}}