#include<iostream>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
    int n,count=0;
    cin>>n;
    int a[n];
   for(int i=0;i<n;i++){cin>>a[i];}
    for(int i=0;i<n;i++){
       if(a[i]==2){
        count++;
       }


    }
    if(count%8==0){
        cout<<"YES"<<endl;
    }
    else if(count%8!=0){
        cout<<"NO"<<endl;
    }
}}