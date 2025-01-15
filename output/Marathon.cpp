#include<iostream>

using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
    int a,b,c,d;
    int count=0;
    cin>>a>>b>>c>>d;
    if(a>b){
        count =count;
    }
    else count =count+1;
     if(a>c){
        count =count;
    }
    else count =count+1;
     if(a>d){
        count =count;
    }
    else count =count+1;
    cout<<count<<endl;

}}

 