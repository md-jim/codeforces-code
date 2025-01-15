#include<iostream>
using namespace std;

int main()
{
    char s[5][5];
    int i,j;
    int a,b;
    //unsigned int x=0,y=0;
  
    for( i=0;i<5;i++){
         for( j=0;j<5;j++){
        cin>>s[i][j];
    }}
    for( i=0;i<5;i++){
          for(j=0;j<5;j++){

      if(s[i][j]=='1'){
       break;
      }}
      if(s[i][j]=='1'){
       break;}
 }
    
    if(j==5){
        i=i+1;
        j=0;
    }
    a=2-i;
    b=2-j;
    if(a>=0&&b>=0) {   
    cout<<a+b;}
   else if(a<0&&b>=0) {   
    cout<<(-1*a)+b;}
    else if(a>=0&&b<0) {   
    cout<<a+(-1*b);}
    else if(a<0&&b<0) {   
    cout<<(-1*a)+(-1*b);}



}