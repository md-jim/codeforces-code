#include<iostream>
using namespace std;

int main(){
  
  double a,b,c,max,min,temp;
  cin>>a>>b>>c;

  if(a>b&&a>c){
    max=a;
  }
else if(b>c&&b>a){
    max=b;
  }
else if(c>a&&c>a){
    max=c;
  }
  if(a<b&&a<c){
    min=a;
  }
else if(b<c&&b<a){
    min=b;
  }
else if(c<a&&c<a){
    min=c;
  }
temp=(max-min)/2;
cout<<temp*2<<endl;





}