#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
    int c1,c2,c3,c4,i=0,j=0,k=0,l=0,c5=0;
    string a;
    cin>>a;
    for(int i=0;i<a.length();i++){
        if(a[i]=='M'||a[i]=='m'){
            c1++;
            j=i+1;
        }
        if(a[i]=='E'||a[i]=='e'){
            if(i<=j){
            c2++;
            k=i+1;
            j++;
            }
            else break;
        }
        if(a[i]=='O'||a[i]=='o'){
           if(j<=k){
            c3++;
            l=i+1;
            k++;
            }
            else break;
        }
         if(a[i]=='W'||a[i]=='w'){
            if(k<=l){
            c4++;
            
            }
            else break;
        }
         if(a[i]!='W'||a[i]!='w'&&a[i]!='M'||a[i]!='m'&&a[i]!='E'||a[i]!='e'&&a[i]!='O'||a[i]!='o'){
         
            c5++;
            
            
        }}
        cout<<c1<<c2<<c3;
        if(c1>0&&c2>0&&c3>0&&c4>0&&c5==0){
            cout<<"YES"<<endl;
        }
       else if(c5>0)
       {   cout<<"NO"<<endl;}
       else cout<<"NO"<<endl;

}}