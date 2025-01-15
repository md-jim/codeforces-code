#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int a,b,c,n;
    cin>>a>>b>>c>>n;

    if((a+b+c+n)%3==0){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
    
}}