#include<iostream>
using namespace std;
int main()
{
    int t,j;
    cin>>t;
    for(j=0;j<t;j++){
    int a,b,area=0;
    cin>>a;
    cin>>b;
    if(a>b){
       
        if((b+b)<a){
         area=(a*a);
        }
        else  area=(b+b)*(b+b);}


    
    else if(a<b){
        if((a+a)<b){
        area=(b*b);}
        else area=(a+a)*(a+a);
    
    }
    else if(a==b){
        area=(a+a)*(a+a);
    }
    cout<<area<<endl;
}}