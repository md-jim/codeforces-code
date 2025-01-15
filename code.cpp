#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    while(x--){
    int t;
    int a,b;
    cin>>t;
    if(t%3==0){
        a=t/3;
        b=(t/3);
        cout<<a<<" "<<b<<endl;
    }
    if(t%3!=0){
         a=t/3;
        b=(t/3)+1;
        if(a*2+b==t){
           cout<<b<<" "<<a<<endl;
        }
        else  cout<<b-1<<" "<<a+1<<endl;
    }
    
}}