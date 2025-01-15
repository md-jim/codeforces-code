#include<iostream>
using namespace std;
int main(){

   int n,k,pt=0,i=1,count=0;
   cin>>n>>k;
   int temp=240-k;
   while(temp>=pt){

    pt=pt+5*i;
i++;
count++;
if(count-1==n){
    break;
}
   }
cout<<count-1<<endl;

}