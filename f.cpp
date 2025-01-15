#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    string a;
    cin>>a;
    int c0=0,c1=0;
 
    for(int i=0;i<a.length();i++){
          if(a[i]=='0'){
           c0++;
          }
           if(a[i]=='1'){
           c1++;
          }
    }
    if(c0==1&&c1==1){
        cout<<0<<endl;
    }
    if(c0==c1&&c0!=1&&c1!=1){
        cout<<c1-1<<endl;
    }
    if(c0>c1){
        cout<<c1<<endl;
    }
    if(c0<c1){
        cout<<c0<<endl;
    }
}}