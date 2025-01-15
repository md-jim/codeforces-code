#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
  int a,b,n,count=0;
  cin>>n;
  for(int i=0 ; i<n;i++){
    cin>>a>>b;

    if(a>b){
        count++;
    }
  }
cout<<count<<endl;
    }
}