#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
    int x,y,k;
    cin>>x>>y>>k;
   
   if(x>k){
    cout<<"0"<<endl;
   }
      else{  int i=k;
        while(i!=0){
        if(i%x==y){
            cout<<i<<endl;
            i=0;
        }
        else i--;}
    }}}