#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    string a="codeforces";
    char b;
    int count=0;
    cin>>b;
    for(int i=0;i<10;i++){
          if(a[i]==b){
            count++;
          }
          
    }
    if(count>0){
        cout<<"YES"<<endl;
    }
   else  if(count==0){
        cout<<"NO"<<endl;
    }
}}