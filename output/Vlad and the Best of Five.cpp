#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    string a;
    cin>>a;
    int c1=0,c2=0;
    
    for(int i=0;i<a.length();i++){
          if(a[i]=='A'){
           c1++;
          }
        else  if(a[i]=='B'){
           c2++;
          }
    }
    if(c1>c2){
        cout<<"A"<<endl;
    }
    else cout<<"B"<<endl;

}}