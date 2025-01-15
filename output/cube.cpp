#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int count=0,n,sum=0,i=0;
    cin>>n;
    while(sum!=n){
        sum=sum+i;
        count++;
        i++;
    }
    cout<<count;
}