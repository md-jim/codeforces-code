#include<iostream>
using namespace std;
 
int main(){
 
int t;
cin>>t;
while(t--){
    int a[2][2];
    
    for(int i=0;i<2;i++){
        for(int j=0 ;j<2;j++){
            cin>>a[i][j];
        }}
        if((a[0][0]<a[0][1]&&a[1][0]<a[1][1])||(a[0][0]>a[0][1]&&a[1][0]>a[1][1])){
            if((a[0][0]<a[1][0]&&a[0][1]<a[1][1])||(a[0][0]>a[1][0]&&a[0][1]>a[1][1])){
            cout<<"YES"<<endl;}
             else cout<<"NO"<<endl;
        }
      else cout<<"NO"<<endl;
    
 
 
}}