#include<iostream>
using namespace std;
int main()
{
    int n,t;
    
    cin>>t;
    
    for(int j=0 ;j<t;j++){
    cin>>n;
    int a=0,b=0;
    int c[n];
    for(int i =0 ; i<n;i++)
    {
        cin>>c[i];
    }
     for(int i =0 ; i<n;i++)
    {
        if(c[i]==1){
            a=a+1;
        }
         if(c[i]==2){
            b=b+1;
        }
    }
    if(a==b && (a+b)%4==0){
        cout<<"YES"<<endl;
    }
    else if(a==n && a%2==0 || b==n && b%2==0){
        cout<<"YES"<<endl;}
        else cout<<"NO"<<endl;
    }
}