#include<iostream>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int ca=0,cb=0,cc=0;
   
    int n=a.length();
    for(int i=0;i<n;i++){
        if(a[i]=='A'){
            ca++;
        }
        if(a[i]=='B'){
            cb++;
        }
        if(a[i]=='C'){
            cc++;
        }
    }
      
      if(ca>=cc){
        cb=cb-ca;
        if(cb==cc){
            cout<<"YES"<<endl;
        }}
        else  if(ca<=cc){
        cb=cb-cc;
        if(cb==ca){
            cout<<"YES"<<endl;
        }
      }
      else  cout<<"NO"<<endl;


}