#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=0 ; i<t;i++){
    string s;
    cin>>s;
    if( s=="abc"||s=="acb"||s=="bac"||s=="cba"){
        cout<<"YES"<<endl;
    }
    else if( s=="bca"||s=="cab"){
        cout<<"NO"<<endl;
    }

}}