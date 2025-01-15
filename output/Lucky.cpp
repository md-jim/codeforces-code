#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){

   
    string num;
    cin>>num;

    if((num[0]+num[1]+num[2])==(num[3]+num[4]+num[5])){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

   
}}