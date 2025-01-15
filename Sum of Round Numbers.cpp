#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int t1,t2,t3;
        int num;
        cin>>num;
        if(num%10!=0){
        t1=num%10;
          cout<<num%10<<" ";
          num=num/10;
        }
        if(num%100!=0){
        t2=num%100;
          cout<<(num%100)-t1<<" ";
           num=num/100;
        }
         if(num%1000!=0){
        t3=num%1000;
          cout<<(num%1000)-t2<<" ";
           num=num/1000;
        }
           if(num%10000!=0){
       
          cout<<(num%10000)-t3<<" ";
        }



    }
}