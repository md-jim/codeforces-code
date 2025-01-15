#include<iostream>
using namespace std;
int main(){
 int a,b;
 char ch[0];
 cin>>a;
 cin>>ch;
 cin>>b;
 if(a>12){
  cout<<a<<":"<<b<<" "<<"PM"<<endl;
 }
  if(a==12){
    if(b==0)
    cout<<a<<":"<<b<<" "<<"AM"<<endl;
  }
  else cout<<a<<":"<<b<<" "<<"AM"<<endl;
}