#include<iostream>
using namespace std;

int main(){

   int a,count=0;
   cin>>a;
   
   for(int i=1;i<=a;i++){





    if(i/100==3&&i!=3){
    count=count+100;
   }
   else if(count/10==3){
    count=count+10;
   }
   else if(count%10==3){
    count=count+2;
   }
else count++;
if(count%3==0||count%10==3){
    count++;
}






   }


cout<<count;

   }



