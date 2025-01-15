#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a>=b){
        int t=(a-b)/10;
       if((a-b)%10!=0){
        cout<<t+1<<endl;;
       }
       else cout<<t<<endl;}
       else {int t=(b-a)/10;
       if((b-a)%10!=0){
        cout<<t+1<<endl;}
        else cout<<t<<endl;

       }}}