#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[n];
    }
    int q,count=0;
    cin>>q;
    int m[q];
    for(int i=0;i<n;i++){
        cin>>m[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        if(m[i]<=a[j]){
            count++;

        }}
        cout<<count<<endl;

        
    }



}