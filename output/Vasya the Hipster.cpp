#include<iostream>
using namespace std;
int main()
{
    int r,b;
    cin>>r>>b;
     
    if(r>=b){
        cout<<b<<" "<<(r-b)/2<<endl;
    }
   else  if(b>=r){
        cout<<r<<" "<<(b-r)/2<<endl;
    }
     

}