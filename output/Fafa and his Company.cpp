#include<iostream>
using namespace std;
int main()
{
    int n,temp,count=0;
    cin>>n;
    for(int i=1 ; i<=n/2;i++ ){
       temp=n-i;
       if(temp%i==0){
     count++;
       }
    }
    cout<<count<<endl;

}