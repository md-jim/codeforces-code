#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int a,b,temp;
    cin>>a>>b;
    if(a>b){
        temp=a-b;
        if(temp%2==0){
            cout<<1<<endl;
        }
        else cout<<2<<endl;
    }
     if(a<b){
        temp=b-a;
        if(temp%2!=0){
            cout<<1<<endl;
        }
        else cout<<2<<endl;
    }
    if(a==b){
        
            cout<<0<<endl;
       
    }

}}