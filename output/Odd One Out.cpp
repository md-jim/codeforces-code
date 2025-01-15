#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int t=0;t<n;t++){
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b){
        cout<<c<<endl;;
    }
      else if(a==c){
        cout<<b<<endl;
    }
      else if(b==c){
        cout<<a<<endl;
    }
}}