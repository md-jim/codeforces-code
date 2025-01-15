#include<iostream>
using namespace std;
int main(){
long long int a;
int count=0,i;

cin>>a;

for( i=2 ; i<a;i=i+1){
  if(a%i==0){
    count++;
    break;
  }


}
cout<<i;
if(count==1){
    cout<<"YES"<<endl;
}
else if(count==0){
    cout<<"NO"<<endl;
}


}