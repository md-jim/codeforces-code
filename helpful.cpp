#include<iostream>
using namespace std;
int main()
{
    string a;
    cin>>a;

    for(int i=0;i<a.length();i=i+2){
        for(int j=0;j<a.length()-1-i;j=j+2){
        if(i%2==0){
            if(a[j]>a[j+2]){
                swap(a[j],a[j+2]);
            }
        }
    }}
    cout<<a;
}