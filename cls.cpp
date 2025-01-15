#include<iostream>
using namespace std;
int main()
{

    string a;
    cin>>a;
    string ter;
    ter="hello";
    int n=ter.length();
    int count=0;

    for(int i=0;i<a.length();i++){
        if(a[i]==ter[i]){
            count++;
        }}
       if(count==n){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

}