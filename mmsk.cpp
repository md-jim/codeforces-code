#include<iostream>
using namespace std;
int main()
{
    unsigned long n;
    cin>>n;
    unsigned long a[n];
    for(unsigned long i=0;i<n;i++){
        cin>>a[i];
    }
     unsigned long q,count;
    cin>>q;
     unsigned long m[q];
    for(unsigned long i=0;i<q;i++){
        cin>>m[i];
        count=0;
        for(unsigned long j=0;j<n;j++){
        if(m[i]>=a[j]){
            count++;}

        }
        cout<<count<<endl;

    }
    
        
    }



