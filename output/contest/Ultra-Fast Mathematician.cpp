#include<iostream>
using namespace std;

int main(){
  string a;
  string b;
  cin>>a;
  cin>>b;
  for(int i=0 ; i<a.length();i++){
   
         if(a[i]!=b[i]){
        cout<<"1";
         }
         if(a[i]==b[i]){
        cout<<"0";
         }
  }


}