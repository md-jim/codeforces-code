#include<iostream>
using namespace std;
int main(){
    int a,b,count=0,count1=0;
    cin>>a;
    int temp=a;

    if(a%4==0||a%7==0||a%47==0){
        cout<<"YES"<<endl;
    }
    else {
        while(temp!=0){
             
          b=temp%10;
          if(b==7||b==4){
            count++;
          }
          temp=temp/10;
          count1++;

        }
        if(count==count1){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    
}