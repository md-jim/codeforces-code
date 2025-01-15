#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){

  string a1,a2;
  int n,count=0;
  cin>>n;
  cin>>a1;
  cin>>a2;

  for(int i=0;i<n;i++){
    if(a1[i]=='R'&&a2[i]=='R'){
  count++;
    }
    else if((a1[i]=='G'&&a2[i]=='G')||(a1[i]=='G'&&a2[i]=='B')||(a1[i]=='B'&&a2[i]=='G')||(a1[i]=='B'&&a2[i]=='B')){
     count++;
    }}
     cout<<count;
    if(count==n){
        cout<<"YES"<<endl;
    }
    else if(count!=n){
        cout<<"NO"<<endl;
    }
    }
  }
