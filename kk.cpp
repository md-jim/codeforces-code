#include<iostream>
 
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int x,x1,x2,y,y1,y2;
    cin>>x>>y;
     cin>>x1>>y1;
      cin>>x2>>y2;
      if(x==x1&&x1==x2&&y2>y&&y2<y1){
        if((y1-y)+2>0){
           cout<<(y1-y)+2<<endl;}
           else cout<<-(y1-y)+2<<endl;
      }
      if(x==x1&&x1==x2&&(y2<y||y2>y1)){
           if((y1-y)>0){
           cout<<(y1-y)<<endl;}
           else cout<<-(y1-y)<<endl;
      }
      if(y==y1&&y1==y2&&x2>x&&x2<x1){
        if((x1-x)>0){
           cout<<(x1-x)<<endl;}
           else cout<<-(x1-x)<<endl;
           
      }
      if(y==y1&&y1==y2&&(x2<x||x2>x1)){
        if((x1-x)>0){
           cout<<(x1-x)<<endl;}
           else cout<<-(x1-x)<<endl;
          }
      if(x==y&&x1==y1&&x2==y2){
           cout<<(x1-x)*(x1-x)<<endl;
      }
       
 
}}