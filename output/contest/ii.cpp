#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    
    string a;
    cin>>a;
     int c1=0,c2=0,c3=0;
    for( unsigned int i=1;i<a.length();i++){
        for( unsigned int j=i-1;j>=0;j--){
         
         
         if(a[i]=='R'&&a[j]=='r'){
            c1=1;
         }
         if(a[i]=='G'&&a[j]=='g'){
            c2=1;
         }
         if(a[i]=='B'&&a[j]=='b'){
            c3=1;
         }


        }}
        if(c1==1){
        if(c2==1){
        if(c3==1){

       
    cout<<"YES"<<endl;}}}

else cout<<"NO"<<endl;
    
}}