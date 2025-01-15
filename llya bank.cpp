#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    if(a>=0){
        cout<<a;
    }
    else if(a<0)  {int t1,t2,t;
     t1=-1*(a%10);
     t=a%100;
     t2=-1*(t/10);
     if(t1>=t2){
        if((a/100!=0)){
     cout<<(a/100)<<t2;}
     else cout<<-t2;
     }
     else{ 
       if((a/100!=0)){
     cout<<(a/100)<<t1;}
     else cout<<-t1;

     }
    }
}