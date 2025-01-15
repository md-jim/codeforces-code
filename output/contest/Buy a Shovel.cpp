#include<iostream>
using namespace std;
int main(){

  int n,k,temp=10,temp1;
cin>>k>>n;

for(int i=1 ; i<10;i++){

     if((k*i)%10==0){
    
          temp=(k*i)/k;
        break;
    }
    else if((k*i)%10==n){
       temp1=i;
    }}
    
if(temp1<temp){
    cout<<temp1<<endl;
}
else cout<<temp<<endl;

}