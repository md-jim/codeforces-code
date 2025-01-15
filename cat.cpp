#include<iostream>
using namespace std;
{
    int c1,c2,c3;
    string a;
    cin>>a;
    for(int i=0;i<a.length();i++){
        if(a[i]=='M'&&a[i]=='m'){
            c1++;
        }
        if(a[i]=='E'&&a[i]=='e'){
            c2++;
        }
        if(a[i]=='O'&&a[i]=='o'){
            c3++;
        }
        if(a[i]=='W'&&a[i]=='w'){
            c4++;
        }
        }
        if(c1>0&&c2>0&&c3>0&&c4>0){
            cout<<"YES"<<endl;
        }
       else   cout<<"NO"<<endl;

}