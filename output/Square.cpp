#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int ax,ay,bx,by,cx,cy,dx,dy;
    unsigned int temp;
    
    cin>>ax>>ay;
    cin>>bx>>by;
    cin>>cx>>cy;
    cin>>dx>>dy;
      
      if(ax==bx){
      temp=ay-by;
      }
     else if(ax==cx){
           temp=ay-cy;
      }
     else if(ax==dx){
          temp=ay-dy;
      } 
      cout<<temp*temp<<endl;

}}