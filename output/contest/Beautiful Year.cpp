#include<iostream>
using namespace std;
int main(){
  
  int y[4];
  for(int i=0;i<4;i++){
  cin>>y[i];}
  int count=0;
  while(count=0){
   if(y[0]!=y[1]&&y[0]!=y[2]&&y[0]!=y[3]&&y[1]!=y[0]&&y[1]!=y[2]&&y[1]!=y[3]&&y[2]!=y[0]&&y[2]!=y[1]&&y[2]!=y[3]){
  count=1;

  }
  else count=0;
  

}