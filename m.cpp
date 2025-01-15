#include<iostream>
using namespace std;
int main()
{
    int n,count=0,j;
    cin>>n;
    j=n;
    int a[100];
    for(int i=0;i<n*2-1;i++){
        cin>>a[i];
        
    }
    for(int i=0;i<n*2-1;i++){
        for(int k=0;k<n*2-1;k++){
       if(a[k]==j){
        count++;

        break;
    
       }
        
    }
    j--;
    
    }

    if(count==n){
        cout<<"I become the guy."<<endl;
    }
    else  cout<<"Oh, my keyboard!"<<endl;
    
}